<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);

require 'lib/WhatsApi/src/whatsprot.class.php';
require 'lib/WhatsApi/src/events/MyEvents.php';
class WhatsAppAPIController {
    /* --- Server --- */
    //new :pZdkyDZKdKSUWj3Q3YLdTUShUBc=
    //old: F7xxjlf90mpxVxXf1FwFJYrlNRA=
    public $username  = "16465982050";
    public $nickname  = "Ezeepix";
    public $password  = "pZdkyDZKdKSUWj3Q3YLdTUShUBc=";
    public $imei ="";

    /* --- Local --- */


    public $debug     = FALSE;
    public $w         = NULL;
    public $target    = NULL; // The number of the person you are sending the message
    public $message   = NULL;
    public $imagePath = 'upload/img/';
    public $numberIsExistInWa = false;


    function __construct() {
        $this->w = new WhatsProt($this->username,$this->imei, $this->nickname, $this->debug);
        $this->w->eventManager()->bind('onGetSyncResult', '$this->onSyncResult');
        if($this->w->connect()){
            $this->w->loginWithPassword($this->password);
        }else{
            echo "Unable to connect";
        }

    }

    public function getMessages() {
        return $this->w->getMessages();
    }
    public function onSyncResult($result)
    {
        foreach ($result->existing as $number) {
            $this->numberIsExistInWa = true;
        }
        echo "Before ";
        var_dump($this->numberIsExistInW);
        foreach ($result->nonExisting as $number) {
            $this->numberIsExistInWa =  false;
        }
        var_dump($this->numberIsExistInW);
    }
    public function pullMessage() {
        return $this->w->pollMessage();
    }

    public function sendMessage($target, $message) {
        return $this->w->sendMessage($target, $message);
    }

    function saveImage($imgUrl, $path = "upload/img") {
        if (!file_exists($path)) {
            mkdir($path, 0755, TRUE);
        }

        $imageType = str_replace('image/', '', getimagesize($imgUrl)["mime"]);
        $imageType = ($imageType == 'jpeg') ? 'jpg' : $imageType;
        $imageName = md5(time()) . '.' . $imageType;
        if (file_put_contents($path . '/' . $imageName, file_get_contents($imgUrl))) {
            return $imageName;
        }

        return FALSE;
    }
    function isConnected(){
        return $this->w->isConnected();
    }
}

/*
foreach ($messages as $message) {
    foreach ($message->getChildren() as $child) {
        if (($child->getTag() == "media") && ($child->getAttribute('type') == "image")) {
            $url = $child->getAttribute('url');
            echo "<img src='$url' />";
        }

        if ($message->getTag() == "body") {
            echo $child->getAttribute('');
        }
    }
}

foreach ($messages as $message) {
    $messageFrom = $message->getAttributes();

    $messageBody = $message->getChildren();

    foreach ($messageBody as $message) {
        $text = $message->getData();
        list($from) = explode('@', $messageFrom['from']);

        echo "Form : " . $from . '</br>';
        echo "Message : " . $text . '</br>';

        if (($message->getTag() == "media") && ($message->getAttribute('type') == "image")) {
            $imageUrl = $message->getAttribute('url');
            $path = "upload/img/";// . $from;
            if (saveImage($imageUrl, $path)) {
                $w->sendMessage($from, "Image successful uploaded to your account !");
            } else {
                $w->sendMessage($from, "Image upload failed !");
            }
        }

        if (strtoupper($text) === 'START') {
            $code = getConfirmCode(6);
            echo "Response : Thank you for choosing Ezeepix your verification code is - " . $code . '</br>';
            $w->sendMessage($from, "Thank you for choosing Ezeepix your verification code is : " . $code);
        }

        if (strtoupper($text) === "CANCEL") {
            $w->sendMessage($from, "Your account has been deactivated.");
        }
    }
}
//$w->sendMessage($target, $message);

*/
