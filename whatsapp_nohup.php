<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);
require_once 'EzzipixController.php';
require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';
require_once 'WhatsAppAPIController.php';

class WhatsAppReceiveDataController  {
    private $API;
    private $i;
    private $nc;
    public function __construct() {
        $this->API = new WhatsAppAPIController();

        $this->i=0;
        $this->nc=0;
    }
    public function starLoop(){
        while(true){
            $this->start();
        }
    }
    public function start() {
        echo  date(DATE_RFC2822)." \n";
        try{
            if($this->API==null || $this->API==false){
                $this->nc++;
                $this->API = new WhatsAppAPIController();
                echo "New connection (API NULL OR FALSE ) Created on $this->i and count is $this->nc \n";
            }
            if($this->API->isConnected()==false){
                sleep(10);
                $this->nc++;
                $this->API = new WhatsAppAPIController();
                echo "New connection (isConnected is false ) Created on $this->i and count is $this->nc \n";
                return;
                //$this->start();
            }
            $data;
            if($this->API->pullMessage()){

                $data = $this->API->getMessages();
            }else{
                sleep(5);
                return;
                //$this->start();
            }


            $serviceData = new UserServiceData();
            $userService = new UserService();

            $result  = [];
            $counter = 0;



            foreach ($data as $message) {
                $messageFrom = $message->getAttributes();
                $messageBody = $message->getChildren();

                foreach ($messageBody as $message) {
                    $text = $message->getData();
                    list($from) = explode('@', $messageFrom['from']);

                    echo "Form : " . $from . '\n';

                    if (($message->getTag() == "media") && ($message->getAttribute('type') == "image")) {
                        $service       = new UserService();
                        $userId        = $service->getUserIdByProviderAndService(2, $from);
                        $userServiceId = $service->getIdByService_user_id(2, $from);
                        $imageUrl      = $message->getAttribute('url');
                        $path          = "upload/img/" . $userId;

                        if ($userId > 0) {
                            if ($imgName = $this->API->saveImage($imageUrl, $path)) {
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
                        $this->API->sendMessage($sendTo, "Your account not found in System !");
                    } elseif ($result[$i]['type'] == 'mediaError') {
                        $this->API->sendMessage($sendTo, "Image upload failed !");
                    } elseif ($result[$i]['type'] == 'account') {
                        $this->API->sendMessage($sendTo, $result[$i]['message']);
                    } else {
                        $totalImage = $this->searchFromArray($result, $sendTo);
                        $s          = '';

                        if ($totalImage > 1) {
                            $s = "s";
                        }

                        $this->API->sendMessage($sendTo, "$totalImage Image$s successful uploaded to your account !");
                    }
                }

            }
            sleep(5);

            $this->i++;
            echo "reached $this->i \n";
            //$this->start();
        }catch (Exception $e) {
            echo 'Caught exception: ',  $e->getMessage(), "\n";
            $this->API = null;

            sleep(5);
            //$this->start();

        }

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


}

$wp = new WhatsAppReceiveDataController();
$wp->starLoop();