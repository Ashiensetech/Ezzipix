<?php

/**
 * Project  : ezzipix
 * File     : lmedia.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/16/15 - 4:10 PM
 */

require_once 'EzzipixController.php';

class LMedia extends EzzipixController {
    public function index() {
        $this->loadView("local_images", $this->pageData);
    }

    public function upload() {
        include('filer/class.uploader.php');

        $uploader = new Uploader();
        $data     = $uploader->upload($_FILES['files'], [
            'limit'       => 10, //Maximum Limit of files. {null, Number}
            'maxSize'     => 10, //Maximum Size of files {null, Number(in MB's)}
            'extensions'  => NULL, //Whitelist for file extension. {null, Array(ex: array('jpg', 'png'))}
            'required'    => FALSE, //Minimum one file is required for upload {Boolean}
            'uploadDir'   => 'upload/', //Upload directory {String}
            'title'       => ['auto', 10], //New file name {null, String, Array} *please read documentation in README.md
            'removeFiles' => TRUE, //Enable file exclusion {Boolean(extra for jQuery.filer), String($_POST field name containing json data with file names)}
            'perms'       => NULL, //Uploaded file permisions {null, Number}
            'onCheck'     => NULL, //A callback function name to be called by checking a file for errors (must return an array) | ($file) | Callback
            'onError'     => NULL, //A callback function name to be called if an error occured (must return an array) | ($errors, $file) | Callback
            'onSuccess'   => NULL, //A callback function name to be called if all files were successfully uploaded | ($files, $metas) | Callback
            'onUpload'    => NULL, //A callback function name to be called if all files were successfully uploaded (must return an array) | ($file) | Callback
            'onComplete'  => NULL, //A callback function name to be called when upload is complete | ($file) | Callback
            'onRemove'    => 'onFilesRemoveCallback' //A callback function name to be called by removing files (must return an array) | ($removed_files) | Callback
        ]);

        if ($data['isComplete']) {
            $files = $data['data'];
            print_r($files);
        }

        if ($data['hasErrors']) {
            $errors = $data['errors'];
            print_r($errors);
        }

        function onFilesRemoveCallback($removed_files) {
            foreach ($removed_files as $key => $value) {
                $file = 'uploads/' . $value;

                echo $file;

                if (file_exists($file)) {
                    unlink($file);
                }
            }

            return $removed_files;
        }
    }

    function insert() {

    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            case 'upload';
                $this->upload();
                break;
            default:
                $this->index();
        }
    }
}

$lm = new LMedia();
$lm->process();