<?php

/**
 * Project  : ezeepix
 * File     : InstagramAPIController.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/12/15 - 11:42 AM
 */

//error_reporting(E_ALL);
//ini_set('display_errors', 1);

class InstagramAPIController {
    private $accessToken;

    /**
     * @return string
     */
    public function getAccessToken() {
        return $this->accessToken;
    }

    /**
     * @param string $accessToken
     */
    public function setAccessToken($accessToken) {
        $this->accessToken = $accessToken;
    }
}