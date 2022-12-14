<?php
require_once 'EzzipixController.php';
require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

class Home extends EzzipixController {

    function index() {
        $this->pageData['printEnable'] = TRUE;
        $this->pageData['allImg']      = NULL;

        if (@$this->userInfo['uId'] > 0) {
            require_once 'Model/UserServiceDataModel.php';
            $userServiceData          = new UserServiceData();
            $this->pageData['allImg'] = json_encode($userServiceData->getAllMediaFileByUid($this->userInfo['uId']));
        }

        $this->loadView('home', $this->pageData);
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            default;
                $this->index();
                break;
        }
    }
}

$home = new Home();
$home->process();