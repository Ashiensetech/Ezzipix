<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:40 PM
 */

require_once 'EzzipixController.php';
class Terms extends EzzipixController
{
    public function index() {

        $this->loadView('terms', $this->pageData);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}

$terms =  new Terms();
$terms->index();
