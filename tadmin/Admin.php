<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: Admin.php
 * User: rajib
 * Date: 12/8/15
 * Time: 6:26 PM
 */

require_once 'AdminUser.php';

$usercontroller = new AdminUserController();
$usercontroller->process();