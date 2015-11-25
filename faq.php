<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:41 PM
 */
require_once 'EzzipixController.php';
class Faq extends EzzipixController
{
    public function index() {

        $this->loadView('faq', $this->pageData);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}
$faq =  new Faq();
$faq->index();
