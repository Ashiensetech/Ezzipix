<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: ContactSync.php
 * User: rajib
 * Date: 1/17/16
 * Time: 5:36 PM
 */

set_time_limit(30);
require 'lib/WhatsApi/src/whatsprot.class.php';
require 'lib/WhatsApi/src/events/MyEvents.php';

$username  =  "16465982050";
$password  = "F7xxjlf90mpxVxXf1FwFJYrlNRA=";




$u = $_REQUEST['service_user_id'];//'88001716587132';
if (!is_array($u)) {
    $u = [$u];
}
$numbers = [];
foreach ($u as $number) {
    if ($number[0] != '+') {
        //add leading +
        $number = "+$number";
    }
    $numbers[] = $number;
}
//event handler
/**
 * @param $result SyncResult
 */
function onSyncResult($result)
{
    foreach ($result->existing as $number) {
        $data = [
            'status'  => true,
            'message' => '',
        ];
        echo json_encode($data);
        return;
    }
    foreach ($result->nonExisting as $number) {

        $data = [
            'status'  => false,
            'message' => 'Number not found in whats app system',
        ];
        echo json_encode($data);
        return;
    }
     //to break out of the while(true) loop
}
$wa = new WhatsProt($username, 'WhatsApp', false);
//bind event handler
$wa->eventManager()->bind('onGetSyncResult', 'onSyncResult');
$wa->connect();
$wa->loginWithPassword($password);
//send dataset to server
$wa->sendSync($numbers);
return;