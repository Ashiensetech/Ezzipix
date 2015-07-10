<?php

require_once 'EzzipixController.php';

class MediaController extends EzzipixController {
    public function __construct() {
        parent::__construct();
    }

    public function index() {
        require_once 'WhatsAppAPIController.php';
        require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
        require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

        $API = new WhatsAppAPIController();
        $data  = $API->getMessages();

        //echo '<meta http-equiv="refresh" content="3">';

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

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'logout';
                $this->logout();
                break;
            default;
                $this->index();
                break;
        }
    }
}

$media = new MediaController();
$media->process();