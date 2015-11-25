<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:28 PM
 */
require_once 'EzzipixController.php';
class Support extends EzzipixController
{
    public function index() {

        $this->loadView('support', $this->pageData);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}

$support =  new Support();
$support->index();
