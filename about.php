<?php
/**
 * Project  : ezeepix
 * File     : about.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 11/3/15 - 12:22 PM
 */

require_once 'EzzipixController.php';

class AboutUs extends EzzipixController {
    public function index() {
        $data = [
            'text' => 'Photos are more than a file on your phone. They’re memories and tools to share ideas and inspire.' .
                      ' A picture is worth a thousand words. At Ezeepix we get that, and we don’t think you should have' .
                      ' to pay a lot to bring those memories to life. With us you get all of the quality services that' .
                      ' you expect from our competitors: beautiful albums, cards, business resources, photo gifts like' .
                      ' mugs, pillows and almost anything you can dream up. But with us you get so much more. We make' .
                      ' this process easy and convenient by allowing you to add pictures the way you want to, saving' .
                      ' you time and getting you that much closer to the unique creation that you designed from the' .
                      ' heart. We also provide you with cloud-based storage that you can access right from your account' .
                      ' to keep photos for future projects. Whether you are uploading them through Facebook, Instagram,' .
                      ' Whatsapp, Telegram or one of the many other social media sites we support, we don’t think that' .
                      ' these special and personalized gifts and mementos have to be expensive.. Always getting the' .
                      ' perfect gift and the perfect price will keep you coming back to Ezeepix and sharing the' .
                      ' experience with your friends.  ',
        ];

        $this->loadView('about', $data);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}

$about = new AboutUs();
$about->process();