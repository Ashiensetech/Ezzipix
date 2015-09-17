<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 9/16/15
 * Time: 6:07 PM
 */
class FileManagement
{

    function saveImage($imgUrl, $path = "upload/img") {
        if (!file_exists($path)) {
            $old_umask = umask(0);
            mkdir($path, 0777);
            umask($old_umask);
        }

        $imageType = str_replace('image/', '', getimagesize($imgUrl)["mime"]);
        $imageType = ($imageType == 'jpeg') ? 'jpg' : $imageType;
        $imageName = md5(time()) . '.' . $imageType;
        if (file_put_contents($path . '/' . $imageName, file_get_contents($imgUrl))) {
            return $imageName;
        }

        return FALSE;
    }
}