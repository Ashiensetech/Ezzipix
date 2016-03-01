<?php

require_once 'AdminBaseController.php';

class AuthController extends AdminBaseController {
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