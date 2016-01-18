<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);

require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';
include_once 'TelegramAPIController.php';

class TelegramNohup {
    public $API;
    public $i;

    public function __construct() {
        $this->API = new TelegramAPIController();
        $this->i   = 0;
    }

    public function start()
    {
        while(1){
        $this->i++;
        echo "Count $this->i \n";
        $contacts = $this->API->getContactList();
        $dataList = new ArrayObject();
        print_r("<pre/>");

        if ($contacts) {
            foreach ($contacts as $contact) {
                $data = [];
                $histories = $this->API->getHistory($contact->print_name);
                if (sizeof($histories) == 0) {
                    continue;
                }

                if (!isset($data['print_name'])) {
                    $data['print_name'] = $contact->print_name;
                }

                $messages = new ArrayObject();

                foreach (@$histories as $history) {
                    if (@$history->media->type == 'photo') {
                        $tempMessage['id'] = $history->id;
                        $tempMessage['date'] = $history->date;
                        $tempMessage['caption'] = $history->media->caption;

                        $messages->append($tempMessage);
                    } else if (isset($history->text)) {
                        if (strtoupper(trim($history->text)) == "CANCEL") {
                            // do operation for cancel
                            //break;
                            $this->API->tel->deleteMsg($history->id);
                        } else {
                            $this->API->tel->deleteMsg($history->id);
                        }
                    } else {
                        $this->API->tel->deleteMsg($history->id);
                    }
                }
                if (sizeof($messages) > 0) {
                    $data['messages'] = $messages;
                    $dataList->append($data);
                }

            }
        } else {
            echo 'Connection Error !';
        }

        $service = new UserService();
        $serviceData = new UserServiceData();

        foreach ($dataList as $user) {
            $from = $user['print_name'];
            $userId = $service->getUserIdByProviderAndService(1, $from);
            $userServiceId = $service->getIdByService_user_id(1, $from);
            echo $from . ' ' . $userId;
            if ($userId > 0) {
                $errorFlag = FALSE;
                $errorMsg = "";
                foreach ($user['messages'] as $message) {


                    $messageImage = $this->API->loadImage($message['id'], $userId);
                    $imageSave = $this->API->saveImage($messageImage['url'], $message['id'], $messageImage['savePath']);
                    print_r($messageImage);
                    print_r($imageSave);
                    //print_r("<br/>");
                    $this->API->tel->deleteMsg($message['id']);
                    if ($imageSave) {
                        $data = [
                            'user_service_id' => $userServiceId,
                            'media_file_path' => $userId . '/' . $imageSave,
                        ];

                        if ($serviceData->insert($data)) {
                            echo " INSERTED <br>";
                            exec('rm ' . $messageImage['url']);
                            $this->API->tel->deleteMsg($message['id']);
                        } else {
                            $errorFlag = TRUE;
                            $errorMsg = "Unable to save in database. Try again later !";
                        }
                    } else {
                        $errorFlag = TRUE;
                        $errorMsg = "Unable to save file in server. Try again later !";
                    }
                }
                $msgCount = sizeof($user['messages']);
                if ($msgCount > 0) {
                    $msg = ($errorFlag) ? $errorMsg : $msgCount . " image received ";
                    $this->API->sendMessage($user['print_name'], $msg);
                }

            }

        }
        sleep(5);
    }
        //$this->start();
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


}

$telegramNohup = new TelegramNohup();
$telegramNohup->start();
