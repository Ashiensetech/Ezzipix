<?php
/**
 * Project  : ezzipix
 * File     : facebook.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/15/15 - 11:59 AM
 */

require_once 'EzzipixController.php';

class Facebook extends EzzipixController {
    public function index() {
        $this->loadView("facebook", $this->pageData);
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            default:
                $this->index();
                break;
        }
    }
}

$fb = new Facebook();
$fb->process();