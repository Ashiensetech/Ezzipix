<?php

/**
 * Created by PhpStorm.
 * User: mi
 * Date: 11/17/15
 * Time: 1:47 PM
 */
require_once 'EzzipixController.php';
class Policy extends  EzzipixController
{
    public function index() {

        $this->loadView('policy', $this->pageData);
    }

    function process() {
        $method = @$_REQUEST["r"];
        switch ($method) {
            default:
                $this->index();
        }
    }
}

$policy = new Policy();
$policy->index();