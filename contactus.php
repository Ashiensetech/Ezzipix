<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:42 PM
 */
require_once 'EzzipixController.php';
class ContactUs extends EzzipixController
{
    public function index() {

        $this->loadView('contactus', $this->pageData);
    }

    public function submitEmail($email,$name,$subject,$message)
    {
        $email_to = "rajibcse2k10@gmail.com";

        if ($email == "" || $name == ""||$subject==""||$message=="") {
            $this->respData['msg'] = "All field is required ";
            return json_encode($this->respData);
        }

        $email_message="Contact form responses \n\n";
        $email_message .= "Name: ".$name."\n";
        $email_message .= "Message: ".$message."\n";

        $headers = 'From: '.$email . "\r\n".
            'Reply-To: '.$email . "\r\n" .
            'X-Mailer: PHP/' . phpversion();

        if (mail($email_to, $subject, $email_message, $headers)) {
            $this->respData["sendMail"] = TRUE;
            $this->respData["msg"]  = "Message sent Successfully !";
        } else {
            $this->respData["sendMail"] = FALSE;
            $this->respData["msg"]  = "Message sent Failed !";
        }

        return json_encode($this->respData);
        //$this->loadView("contactus", $this->pageData);

    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            case 'contactus/sendMail':
                echo $this->submitEmail(trim($_POST["email"]), trim($_POST["name"]), trim($_POST["subject"]), trim($_POST["message"]));
                break;
            default:
                $this->index();
                break;
        }
    }
}

$contactUs =  new ContactUs();
$contactUs->process();