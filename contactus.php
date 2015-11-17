<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:42 PM
 */
require_once 'EzzipixController.php';
class ContactUs extends EzzipixController
{
    public function index() {

        $this->loadView('contactus', $this->pageData);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}

$contactUs =  new ContactUs();
$contactUs->index();