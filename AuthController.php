<?php

require_once 'EzzipixController.php';

class AuthController extends EzzipixController {
    function __construct() {
        parent::__construct();
        $this->auth();
    }

    function auth(){
        if(!@$_SESSION['email'] && !@$_SESSION['uId']){
            header('Location: login.php');
        }
    }
}