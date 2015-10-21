<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);
require_once 'EzzipixController.php';
require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

class MediaController extends EzzipixController {
    public function __construct() {
        parent::__construct();
    }

    public function index() {
        require_once 'WhatsAppAPIController.php';

        $API = new WhatsAppAPIController();
        $API->pullMessage();
        $data = $API->getMessages();

        $serviceData = new UserServiceData();
        $userService = new UserService();

        $result  = [];
        $counter = 0;

        echo '<meta http-equiv="refresh" content="3">';
        echo "<pre>";
        var_dump($data);
        foreach ($data as $message) {
            $messageFrom = $message->getAttributes();
            $messageBody = $message->getChildren();

            foreach ($messageBody as $message) {
                $text = $message->getData();
                list($from) = explode('@', $messageFrom['from']);

                echo "Form : " . $from . '</br>';
                echo "Message : " . $text . '</br>';

                if (($message->getTag() == "media") && ($message->getAttribute('type') == "image")) {
                    $service       = new UserService();
                    $userId        = $service->getUserIdByProviderAndService(2, $from);
                    $userServiceId = $service->getIdByService_user_id(2, $from);
                    $imageUrl      = $message->getAttribute('url');
                    $path          = "upload/img/" . $userId;

                    if ($userId > 0 && $userServiceId) {
                        if ($imgName = $API->saveImage($imageUrl, $path)) {
                            $data = [
                                'user_service_id' => $userServiceId,
                                'media_file_path' => $userId . '/' . $imgName,
                            ];
                            $serviceData->insert($data);
                            //$API->sendMessage($from, "Image successful uploaded to your account !");
                            $result[$counter] = [
                                'from'    => $from,
                                'message' => '',//"Image successful uploaded to your account !",
                                'type'    => 'media',
                            ];
                        } else {
                            //$API->sendMessage($from, "Image upload failed !");
                            $result[$counter] = [
                                'from'    => $from,
                                'message' => "Image upload failed !",
                                'type'    => 'mediaError',
                            ];
                        }
                    } else {
                        //$API->sendMessage($from, "Your account not found in System !");
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "Your account not found in System !",
                            'type'    => 'userError',
                        ];
                    }
                }

                if (strtoupper($text) === "CANCEL") {
                    $status = $userService->deactivateService(2, $from);

                    if ($status > 0) {
                        //$API->sendMessage($from, "Your account has been deactivated.");
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "Your account has been deactivated !",
                            'type'    => 'account',
                        ];
                    } else {
                        //$API->sendMessage($from, "System unable to deactivated your service try again later.");
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "System unable to deactivated your service try again later !",
                            'type'    => 'account',
                        ];
                    }
                }

                if (strtoupper($text) === "ACTIVE") {
                    $foundStatus  = $userService->deactivateService(2, $from, 1);
                    $activeStatus = $userService->getServiceStatus($from, 2);

                    if ($foundStatus > 0) {
                        //$API->sendMessage($from, "Your account has been deactivated.");
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "Your account has been activated !",
                            'type'    => 'account',
                        ];
                    } elseif ($activeStatus) {
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "Your account already activated !",
                            'type'    => 'account',
                        ];
                    } else {
                        //$API->sendMessage($from, "System unable to deactivated your service try again later.");
                        $result[$counter] = [
                            'from'    => $from,
                            'message' => "System unable to activated your service try again later !",
                            'type'    => 'account',
                        ];
                    }
                }

                $counter++;
            }

            $len = count($result);

            for ($i = 0; $i < $len; $i++) {
                $sendTo = $result[$i]['from'];

                if ($result[$i]['type'] == 'userError') {
                    $API->sendMessage($sendTo, "Your account not found in System !");
                } elseif ($result[$i]['type'] == 'mediaError') {
                    $API->sendMessage($sendTo, "Image upload failed !");
                } elseif ($result[$i]['type'] == 'account') {
                    $API->sendMessage($sendTo, $result[$i]['message']);
                } else {
                    $totalImage = $this->searchFromArray($result, $sendTo);
                    $s          = '';

                    if ($totalImage > 1) {
                        $s = "s";
                    }

                    $API->sendMessage($sendTo, "$totalImage Image$s successful uploaded to your account !");
                }
            }

        }
    }

    public function telegram() {
        include_once 'TelegramAPIController.php';

        $API         = new TelegramAPIController();
        $service     = new UserService();
        $serviceData = new UserServiceData();

        $contacts = $API->getContactList();
        $dataList = new ArrayObject();
        echo '<meta http-equiv="refresh" content="3">';
        print_r("<pre/>");

        foreach ($contacts as $contact) {
            $data      = [];
            $histories = $API->getHistory($contact->print_name);
            if (sizeof($histories) == 0) {
                continue;
            }

            if (!isset($data['print_name'])) {
                $data['print_name'] = $contact->print_name;
            }

            $messages = new ArrayObject();

            foreach (@$histories as $history) {
                if (@$history->media->type == 'photo') {
                    $tempMessage['id']      = $history->id;
                    $tempMessage['date']    = $history->date;
                    $tempMessage['caption'] = $history->media->caption;

                    $messages->append($tempMessage);
                } else if (isset($history->text)) {
                    $text = strtoupper(trim($history->text));
                    $from = $contact->print_name;

                    if ($text === "CANCEL") {
                        $status       = $service->deactivateService(1, $from);
                        $activeStatus = $service->getServiceStatus($from, 0);

                        if ($status > 0) {
                            $API->sendMessage($from, "Your account has been deactivated.");
                        } elseif ($activeStatus) {
                            $API->sendMessage($from, "Your account already deactivated !");
                        } else {
                            $API->sendMessage($from, "System unable to deactivated your service try again later.");
                        }

                        //$API->tel->deleteMsg($history->id);
                    } elseif ($text === "ACTIVE") {
                        $foundStatus  = $service->deactivateService(1, $from, 1);
                        $activeStatus = $service->getServiceStatus($from, 1);

                        if ($foundStatus > 0) {
                            $API->sendMessage($from, "Your account has been Activated.");
                        } elseif ($activeStatus) {
                            $API->sendMessage($from, "Your account already activated !");
                        } else {
                            $API->sendMessage($from, "System unable to Activated your service try again later.");
                        }

                        //$API->tel->deleteMsg($history->id);
                    }

                    $API->tel->deleteMsg($history->id);
                }
            }

            if (sizeof($messages) > 0) {
                $data['messages'] = $messages;
                $dataList->append($data);
            }

        }

        foreach ($dataList as $user) {
            $from          = $user['print_name'];
            $userId        = $service->getUserIdByProviderAndService(1, $from);
            $userServiceId = $service->getIdByService_user_id(1, $from);
            echo $from . ' ' . $userId;
            if ($userId > 0 && $userServiceId) {
                foreach ($user['messages'] as $message) {
                    $messageImage = $API->loadImage($message['id'], $userId);
                    $imageSave    = $API->saveImage($messageImage['url'], $message['id'], $messageImage['savePath']);

                    if ($imageSave) {
                        $data = [
                            'user_service_id' => $userServiceId,
                            'media_file_path' => $userId . '/' . $imageSave,
                        ];

                        if ($serviceData->insert($data)) {
                            echo " INSERTED <br>";
                            exec('rm ' . $messageImage['url']);
                            $API->tel->deleteMsg($message['id']);
                        }
                    }
                }

                $msgCount = sizeof($user['messages']);

                if ($msgCount > 0) {
                    $msg = $msgCount . " image received ";
                    $API->sendMessage($user['print_name'], $msg);
                }
            }

        }
    }

    function showAllImage() {
        $this->auth();

        require_once 'Model/UserServiceDataModel.php';
        require_once dirname(__FILE__) . '/Model/ServiceProviderModel.php';

        $serviceProvider = new ServiceProvider();
        $userServiceData = new UserServiceData();
        $services        = $serviceProvider->getProviderList();
        $servicesArray   = [];

        foreach ($services as $service) {
            $servicesArray[$service['id']] = $service['name'];
        }

        $platform = ucwords(@$_GET['p']);

        if (in_array($platform, $servicesArray)) {
            $platform                     = array_search($platform, $servicesArray);
            $this->pageData['imgGallery'] = $userServiceData->getMediaFileByUid($this->userInfo['uId'], $platform);
        } else {
            $this->pageData['imgGallery'] = $userServiceData->getAllMediaFileByUid($this->userInfo['uId']);
        }

        $this->pageData['allImg'] = json_encode($this->pageData['imgGallery']);
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

    function searchFromArray($data = [], $from) {
        $count = 0;
        foreach ($data as $dt) {
            if ($from == $dt['from'] && $dt['type'] == 'media') {
                $count++;
            }
        }

        return $count;
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

    function deleteImage() {
        $imageId     = @$_POST["imageId"];
        $userService = new UserServiceData();
        $image       = $userService->getImageByUserId($imageId);
        $imagePath   = $image[0]["media_file_path"];
        $file        = dirname(__FILE__) . "/upload/img/" . $imagePath;

        if (file_exists($file)) {
            if (unlink($file)) {
                $userService->deleteImage($imageId);
                echo json_encode(["status" => TRUE]);

                return;
            }
        }
        echo json_encode(["status" => FALSE]);
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'all':
                $this->showAllImage();
                break;
            case 'upload':
                $this->uploadMedia();
                break;
            case 'saveUpload':
                $this->saveUpload();
                break;
            case 'deleteImage':
                $this->deleteImage();
                break;
            case 'telegram':
                $this->telegram();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$media = new MediaController();
$media->process();