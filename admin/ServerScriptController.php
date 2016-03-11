<?php

/**
 * Created by PhpStorm.
 * User: tomal
 * Date: 3/2/16
 * Time: 11:21 AM
 *
 */
require_once 'AuthController.php';



class ServerScriptController extends AuthController
{
    function __construct() {
        parent::__construct();

    }



    function resetWhatsApp(){
        require_once dirname(__FILE__) . '/Model/AdminServerData.php';
        $cl=new AdminServerData();
        $result=$cl->getData("whatsapp");
        $root = realpath($_SERVER["DOCUMENT_ROOT"]);
        chdir($root);




        if(count($result)>0){
            foreach($result as $row){
                $pid = $row['process_id'];
                $command = "kill " . $pid;
                shell_exec($command);

            }

        }


            $command="nohup php whatsapp_nohup.php";
            $pid = shell_exec(sprintf('%s > /dev/null 2>&1 & echo $!', $command));
            $flag=$cl->setPid("whatsapp",$pid);

        chdir($root);

        if($flag==1){
            echo "Whatsapp Chat-api restarted succesfully";
        }else{
            echo "There is some problem.. Please try again later";
        }





    }

    function status(){

        $output=shell_exec("ps -ef | grep whatsapp_nohup.php");

        print_r($output);

    }

    function ResetTelegram(){
        require_once dirname(__FILE__) . '/Model/AdminServerData.php';
        $cl=new AdminServerData();
        $result=$cl->getData("telegram");
        $root = realpath($_SERVER["DOCUMENT_ROOT"]);
        chdir($root);



        if(count($result)>0){
            foreach($result as $row){
                $pid = $row['process_id'];
                $command = "kill " . $pid;
                shell_exec($command);

            }

        }

        $command="nohup php telegram_nohup.php";
        $pid = shell_exec(sprintf('%s > /dev/null 2>&1 & echo $!', $command));
        $flag=$cl->setPid("telegram",$pid);

        chdir($root);

        if($flag==1){
            echo "Telegram api restarted succesfully";
        }else{
            echo "There is some problem.. Please try again later";
        }









    }
    function process(){
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'whatsapp':
                $this->resetWhatsApp();
                break;
            case 'telegram':
                $this->ResetTelegram();
                break;
            case 'status':
                $this->status();
                break;
            default:
                $this->index();
                break;
        }

    }

}

$serverController=new ServerScriptController();
$serverController->process();
