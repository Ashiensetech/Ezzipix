<?php

require_once 'EzzipixController.php';
require_once 'AuthController.php';

class MediaController extends EzzipixController {
    public function __construct() {
        parent::__construct();
    }

    public function index() {
        require_once 'WhatsAppAPIController.php';
        require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
        require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

        $API = new WhatsAppAPIController();
        $API->pullMessage();
        $data = $API->getMessages();

        echo '<meta http-equiv="refresh" content="3">';

        foreach ($data as $message) {
            $messageFrom = $message->getAttributes();
            $messageBody = $message->getChildren();

            foreach ($messageBody as $message) {
                $text = $message->getData();
                list($form) = explode('@', $messageFrom['from']);

                echo "Form : " . $form . '</br>';
                echo "Message : " . $text . '</br>';

                if (($message->getTag() == "media") && ($message->getAttribute('type') == "image")) {
                    $service       = new UserService();
                    $userId        = $service->getUserIdByProviderAndService(2, $form);
                    $userServiceId = $service->getIdByService_user_id(2, $form);
                    $imageUrl      = $message->getAttribute('url');
                    $path          = "upload/img/" . $userId;

                    if ($userId > 0) {
                        if ($imgName = $API->saveImage($imageUrl, $path)) {
                            $data        = [
                                'user_service_id' => $userServiceId,
                                'media_file_path' => $userId . '/' . $imgName,
                            ];
                            $serviceData = new UserServiceData();
                            $serviceData->insert($data);
                            $API->sendMessage($form, "Image successful uploaded to your account !");
                        } else {
                            $API->sendMessage($form, "Image upload failed !");
                        }
                    } else {
                        $API->sendMessage($form, "Your account not found in System !");
                    }
                }
            }
        }
    }

    function showAllImage() {
        $this->auth();
        require_once 'Model/UserServiceDataModel.php';
        $userServiceData = new UserServiceData();

        $this->pageData['imgGallery'] = $userServiceData->getAllMediaFileByUid($this->userInfo['uId']);
        $this->loadView('image_gallery', $this->pageData);
    }

    function uploadMedia() {
        $this->auth();
        $this->loadView('imageForm', $this->pageData);
    }

    function saveUpload() {

        var_dump($_SESSION);

        $text  = $_POST['text'];
        $image = $_FILES['image'];

        $this->saveImage($image);
    }

    function auth() {
        $auth = new AuthController();
        $auth->auth();
    }

    function saveImage($file) {
        $text      = md5(time());
        $imageType = str_replace('image/', '', $file['type']);
        $imageType = ($imageType == 'jpeg') ? 'jpg' : $imageType;
        $fileName  = $text . '.' . $imageType;

        if (move_uploaded_file($file['tmp_name'], 'upload/img/' . $fileName)) {
            return $fileName;
        }

        return FALSE;
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'all';
                $this->showAllImage();
                break;
            case 'upload';
                $this->uploadMedia();
                break;
            case 'saveUpload';
                $this->saveUpload();
                break;
            default;
                $this->index();
                break;
        }
    }
}

$media = new MediaController();
$media->process();