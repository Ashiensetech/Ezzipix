<?php
/**
 * Copyright 2015 Eric Enold <zyberspace@zyberware.org>
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
echo '<pre> ';
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(-1);


require('vendor/autoload.php');
$telegram = new \Zyberspace\Telegram\Cli\Client('unix:///tmp/tg.sck');

$contactList = $telegram->getContactList();
//var_dump($contactList);

//var_dump($telegram->msg($contactList[1]->print_name, '"Te\'st"' . "\n" . time()));
$history = $telegram->getHistory('+8801977974812', 1);
/*foreach ($history as $row) {
    if (isset($row->media)) {
        var_dump($row->media);
    }
}*/
//var_dump($telegram->getUserInfo('+8801977974809'));
print_r($history);
//print_r($telegram->loadImage(99));
//var_dump($telegram->addContact("+8801977974809", "+8801977974809", ""));

if (@$telegram->loadImage($history[0]->id)) {
    $img = $telegram->loadImage($history[0]->id);
    //print_r($img);
    if (@$img->result) {
        $cmd = 'cp ' . $img->result . ' /home/touch/Projects/php/ezzipix/';
        exec($cmd);
        if(saveImage($img->result)){
            echo "ok";
        }else{
            echo "hehe";
        }
    }
}

function saveImage($imgUrl, $path = "../upload/img") {
    if (!file_exists($path)) {
        mkdir($path, 0777, TRUE);
    }

    $imageType = str_replace('image/', '', getimagesize($imgUrl)["mime"]);
    $imageType = ($imageType == 'jpeg') ? 'jpg' : $imageType;
    $imageName = md5(time()) . '.' . $imageType;
    if (file_put_contents($path . '/' . $imageName, file_get_contents($imgUrl))) {
        return $imageName;
    }

    return FALSE;
}