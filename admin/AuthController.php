<?php

require_once 'EzzipizController1.php';

class AuthController extends EzzipizController1 {
    function __construct() {
        parent::__construct();
        $this->auth();
    }

    function auth(){
        if(!@$_SESSION['AdminEmail'] && !@$_SESSION['AdminId']){
            header('Location: login.php');
        }
    }
}