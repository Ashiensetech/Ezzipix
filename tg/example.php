<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);
echo '<pre> ';


require('vendor/autoload.php');
$telegram = new \Zyberspace\Telegram\Cli\Client('unix:///tmp/tg.sck');

$contactList = $telegram->getContactList();
//var_dump($contactList);

//var_dump($telegram->msg($contactList[1]->print_name, '"Te\'st"' . "\n" . time()));
$telegramDataList = new ArrayObject();
foreach ($contactList as $contact) {
    $telegramData = [];
    $history      = $telegram->getHistory($contact->print_name);

    if (sizeof($history) == 0) {
        continue;
    }

    if (!isset($telegramData['phone'])) {
        $telegramData['phone'] = $contact->print_name;
    }

    $msgObjList = new ArrayObject();

    foreach ($history as $row) {
        if (isset($row->media) && $row->media->type == 'photo') {
            $tempMsgObj['msgId']   = $row->id;
            $tempMsgObj['date']    = $row->date;
            $tempMsgObj['caption'] = $row->media->caption;

            $msgObjList->append($tempMsgObj);
        } else if (isset($row->text)) {
            if (strtoupper(trim($row->text)) == "CANCEL") {
                // do operation for cancel
                //break;
            }

        } else {
            $telegram->deleteMsg($row->id);
        }

    }
    $telegramData['msgObjList'] = $msgObjList;
    $telegramDataList->append($telegramData);
    //    print_r($history);
}


//Storing Data in server
foreach ($telegramDataList as $rowdata) {
    echo $rowdata['phone'] . "<br>";
    foreach ($rowdata['msgObjList'] as $msgObj) {
        echo "ID " . $msgObj['msgId'] . "<br>";

    }
}
//print_r($telegramDataList);
//var_dump($telegram->getUserInfo('+8801977974809'));

//print_r($telegram->loadImage(99));
//var_dump($telegram->addContact("+8801977974809", "+8801977974809", ""));


die;
if (@$telegram->loadImage($history[0]->id)) {
    $img = $telegram->loadImage($history[0]->id);
    //print_r($img);
    if (@$img->result) {
        $cmd = 'cp ' . $img->result . ' /home/touch/Projects/php/ezzipix/';
        exec($cmd);
        if (saveImage($img->result)) {
            echo "ok";
        } else {
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