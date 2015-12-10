<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: login.php
 * User: rajib
 * Date: 12/8/15
 * Time: 1:34 PM
 */
require_once 'LoginController1.php';

$loginController = new LoginController1();
$loginController->process();