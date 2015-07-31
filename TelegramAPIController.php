<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);

require('tg/vendor/autoload.php');

class TelegramAPIController {

    public $tel;
    public $target;
    public $message;
    public $imagePath;

    function __construct() {
        $this->tel       = new \Zyberspace\Telegram\Cli\Client('unix:///tmp/tg.sck');
        $this->target    = '';
        $this->message   = '';
        $this->imagePath = 'upload/img/';
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
        return $this->tel->addContact($phone,$phone, '');
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
     * @param int $messageId
     * @param int $userId
     *
     * @return array
     */
    function loadImage($messageId, $userId = 0) {
        $image = $this->tel->loadImage($messageId);

        $data = [
            'url'      => $image->result,
            'savePath' => ($userId > 0) ? $this->imagePath . $userId : $this->imagePath,
        ];

        return $data;
    }

    /**
     * @param string $imgUrl
     * @param int    $messageId
     * @param string $path
     *
     * @return bool|string
     */
    function saveImage($imgUrl, $messageId, $path = "upload/img") {
        if (!file_exists($path)) {
            mkdir($path, 0755, TRUE);
        }

        $imageType = str_replace('image/', '', getimagesize($imgUrl)["mime"]);
        $imageType = ($imageType == 'jpeg') ? 'jpg' : $imageType;
        $imageName = md5(time() + $messageId) . '.' . $imageType;
        if (file_put_contents($path . '/' . $imageName, file_get_contents($imgUrl))) {
            return $imageName;
        }

        return FALSE;
    }

    /**
     * @param string $printName
     *
     * @return array|bool
     */
    function getHistory($printName) {
        return $this->tel->getHistory($printName);
    }
}