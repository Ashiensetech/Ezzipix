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

$username  =  "8801977974819";
$password  = "GGfvxQIBC4x5FHBLQ1U7C4bv+Dc=";
$u = '123456789';
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
        echo "$number exists";
    }
    foreach ($result->nonExisting as $number) {
        echo "$number does not exist";
    }
    die(); //to break out of the while(true) loop
}
$wa = new WhatsProt($username, 'WhatsApp', false);
//bind event handler
$wa->eventManager()->bind('onGetSyncResult', 'onSyncResult');
$wa->connect();
$wa->loginWithPassword($password);
//send dataset to server
$wa->sendSync($numbers);
//wait for response
while (true) {
    $wa->pollMessage();
}