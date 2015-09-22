<?php

require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';

class DashboardController extends AuthController {
    function __construct() {
        parent::__construct();
    }

    public function index() {
        $user        = new User();
        $userService = new UserService();

        $this->pageData['user']     = $user->getUserById($_SESSION['uId'])[0];
        $this->pageData['services'] = $userService->getAllService($_SESSION['uId']);

        $this->loadView('dashboard', $this->pageData);
    }

    public function logout() {
        session_destroy();
        header('Location: home.php');
    }

    public function updatePassword() {
        if (@$_POST) {
            $oldPassword = @$_POST['old-password'];
            $password    = @$_POST['password'];
            $rePassword  = @$_POST['re-password'];

            if ($oldPassword == NULL || $oldPassword == '') {
                header('Location: dashboard.php?r=updatePassword&fv=1');
                die;
            }

            if ($password == NULL || $password == '') {
                header('Location: dashboard.php?r=updatePassword&fv=2');
                die;
            }

            if ($rePassword == NULL || $rePassword == '') {
                header('Location: dashboard.php?r=updatePassword&fv=3');
                die;
            }

            if ($rePassword != $password) {
                header('Location: dashboard.php?r=updatePassword&fv=4');
                die;
            }

            if ($oldPassword == $password) {
                header('Location: dashboard.php?r=updatePassword&fv=5');
                die;
            }

            require_once "Model/LoginModel.php";
            $currentEmail = $_SESSION['email'];
            $login        = new Login();

            if (count($login->getByEmailAndPassword($currentEmail, $oldPassword)[0]) < 1) {
                header('Location: dashboard.php?r=updatePassword&fv=6');
                die;
            }

            if ($login->updatePassword($currentEmail, $password)) {
                header('Location: dashboard.php?status=success');
                die;
            } else {
                header('Location: dashboard.php?status=failed');
                die;
            }

        } else {
            $this->loadView("update_password", $this->pageData);
        }
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'updatePassword':
                $this->updatePassword();
                break;
            case 'logout':
                $this->logout();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$dashboard = new DashboardController();
$dashboard->process();