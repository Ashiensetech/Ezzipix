<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);

require('tg/vendor/autoload.php');

class TelegramAPIController {
    public $tel     = NULL;
    public $target  = '';
    public $message = '';

    function __construct() {
        $this->tel = new \Zyberspace\Telegram\Cli\Client('unix:///tmp/tg.sck');
    }

    /**
     * @return array|bool
     */
    function getContactList() {
        return $this->tel->getContactList();
    }

    /**
     * @param string $phone
     *
     * @return Array of objects
     */
    function addContact($phone) {
        $phone = str_replace('+', '', $phone);

        return $this->tel->addContact($phone, '+' . $phone, '');
    }

    /**
     * @param string $printName
     * @param string $message
     *
     * @return boolean
     */
    function sendMessage($printName, $message) {
        return $this->tel->msg($printName, $message);
    }

    /**
     * @param int    $messageId
     * @param string $savePath
     *
     * @return array
     */
    function loadImage($messageId, $savePath = NULL) {
        $image = $this->tel->loadImage($messageId);

        $data = [
            'imageUrl' => $image->result,
            'savePath' => $savePath,
        ];

        return $data;
    }

    /**
     * @param string $imgUrl
     * @param string $path
     *
     * @return bool|string
     */
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
}