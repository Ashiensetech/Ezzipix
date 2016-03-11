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

                    echo "From : " . $from . "\n";
                    echo "Message:" . $text. "\n";
                  // $this->API->sendMessage($from, $text);//TODO temporary

                    if (($message->getTag() == "media") && ($message->getAttribute('type') == "image")) {
                        $service = new UserService();
                        $userId = $service->getUserIdByProviderAndService(2, $from);
                        $userServiceId = $service->getIdByService_user_id(2, $from);
                        $imageUrl = $message->getAttribute('url');
                        $path = "upload/img/" . $userId;
                        $isActive = $service->getActiveStatus($from,2);
                        if ($userId > 0) {

                            if($isActive=="0"){
                                $this->API->sendMessage($from, "Image not uploaded!. Your account is deactivated. Active first to upload image");
                            }
                            else {
                                if ($imgName = $this->API->saveImage($imageUrl, $path)) {
                                    $data = [
                                        'user_service_id' => $userServiceId,
                                        'media_file_path' => $userId . '/' . $imgName,
                                    ];

                                    $serviceData->insert($data);
                                    $this->API->sendMessage($from, "Image successful uploaded to your account !");
                                    $result[$counter] = [
                                        'from' => $from,
                                        'message' => '',//"Image successful uploaded to your account !",
                                        'type' => 'media',
                                    ];
                                } else {
                                    $this->API->sendMessage($from, "Image upload failed !");
                                    $result[$counter] = [
                                        'from' => $from,
                                        'message' => "Image upload failed !",
                                        'type' => 'mediaError',
                                    ];
                                }
                            }
                        } else {
                            $this->API->sendMessage($from, "Your account not found in System !");
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "Your account not found in System !",
                                'type' => 'userError',
                            ];
                        }
                    }

                    if (strtoupper($text) === "DEACTIVATE") {
                        $status = $userService->deactivateService(2, $from);

                        if ($status > 0) {
                            echo  "Deactivated successfully\n";
                            $this->API->sendMessage($from, "Your account has been deactivated!");
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "Your account has been deactivated !",
                                'type' => 'account',
                            ];
                        } else {
                            echo  "Deactivated error\n";
                            $this->API->sendMessage($from, "System unable to deactivated your service try again later.");
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "System unable to deactivated your service try again later !",
                                'type' => 'account',
                            ];
                        }
                    }

                    if (strtoupper($text) === "ACTIVE") {
                        $foundStatus = $userService->deactivateService(2, $from, 1);
                        $activeStatus = $userService->getServiceStatus($from, 2);

                        if ($foundStatus > 0) {
                            echo  "Activated successfully\n";
                            $this->API->sendMessage($from, "Your account has been activated.");
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "Your account has been activated !",
                                'type' => 'account',
                            ];
                        } elseif ($activeStatus) {
                            echo  "Account Already in system\n";
                            $this->API->sendMessage($from, "Account Already in system");
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "Your account already activated !",
                                'type' => 'account',
                            ];
                        } else {
                            $this->API->sendMessage($from, "System unable to deactivated your service try again later.");
                            echo  "Activated problem\n";
                            $result[$counter] = [
                                'from' => $from,
                                'message' => "System unable to activated your service try again later !",
                                'type' => 'account',
                            ];
                        }
                    }

                    $counter++;
                }

                $len = count($result);

                //TODO bangla code. no need this condition
               /* if ($len > 0) {
                    for ($i = 0; $i < $len; $i++) {
                        $sendTo = $result[$i]['from'];
                        if ($result[$i]['type'] == 'userError') {
                            $this->API->sendMessage($sendTo, "Your account not found in System !",$force_plain = false);
                        } elseif ($result[$i]['type'] == 'mediaError') {
                            $this->API->sendMessage($sendTo, "Image upload failed !",$force_plain = false);
                        } elseif ($result[$i]['type'] == 'account') {
                            $this->API->sendMessage($sendTo, $result[$i]['message'],$force_plain = false);
                        } else{
                            $totalImage = $this->searchFromArray($result, $sendTo);
                            $s = '';

                            if ($totalImage > 1) {
                                $s = "s";
                            }

                            $this->API->sendMessage($sendTo, "$totalImage Image$s successful uploaded to your account !",$force_plain = false);
                        }
                    }

                }*/
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
