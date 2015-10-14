<?php

/**
 * Project  : ezeepix
 * File     : flickr.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/16/15 - 11:47 AM
 */

require_once 'EzzipixController.php';

class Flickr extends EzzipixController {
    private $url       = "https://www.flickr.com/services/oauth/request_token/";
    private $authKey   = "1c27387cb07a70ef6ef67f58263cd906";
    private $authSign  = "ef842c2934d61012";
    private $signature = "MHAC-SHA1";
    private $version   = "1.0";
    private $callBack  = "http://localhost/ezeepix/flickr.php";

    public function index() {
        if (@$_REQUEST) {
            echo "<pre/>";
            print_r($_REQUEST);
        } else {
            $url = $this->url;
            $url .= "?oauth_nonce=" . rand(11111111, 9999999);
            $url .= "&oauth_timestamp=" . time();
            $url .= "&oauth_consumer_key=" . $this->authKey;
            $url .= "&oauth_signature=" . $this->authSign;
            $url .= "&oauth_signature_method=" . $this->signature;
            $url .= "&oauth_version=" . $this->version;
            $url .= "&oauth_callback=" . $this->callBack;

            //echo $url . "<br/>";
            $data = exec("curl " . $url);
            print_r($data);
        }
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            default:
                $this->index();
                break;
        }
    }
}

$fl = new Flickr();
$fl->process();