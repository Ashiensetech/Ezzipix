<?php

require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';

class DashboardController extends AuthController {
    function __construct() {
        parent::__construct();
    }

    public function index() {
        $user = new User();
        $userService = new UserService();

        $this->pageData['user'] = $user->getUserById($_SESSION['uId'])[0];
        $this->pageData['services'] = $userService->getAllService($_SESSION['uId']);

        $this->loadView('dashboard', $this->pageData);
    }

    public function logout(){
        session_destroy();
        header('Location: home.php');
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'logout';
                $this->logout();
                break;
            default;
                $this->index();
                break;
        }
    }
}

$dashboard = new DashboardController();
$dashboard->process();