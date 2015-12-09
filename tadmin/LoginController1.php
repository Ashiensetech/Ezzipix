<?php

error_reporting(E_ALL);
ini_set('display_errors', 1);

require_once 'EzzipizController1.php';

class LoginController1 extends EzzipizController1 {
    function __construct() {
        parent::__construct();
        $this->checkLogin();
    }

    function index() {
        $this->loadView("login", $this->pageData);
    }

    function authintication($email, $password) {
        require_once dirname(__FILE__) . '/Model/AdminLoginModel.php';


        if ($email == "" || $password == "") {
            $this->respData['msg'] = "Invalid Username or  Password ";

            return json_encode($this->respData);
        } else {
            $login  = new AdminLoginModel();
            $result = $login->getByEmailAndPassword($email, $password);
            if (sizeof($result) == 1) {
                $this->storeDataInSession($result);
                $this->respData['loginStatus'] = TRUE;
                $this->respData['msg'] = "";
                header('Location: AdminDashboard.php?r=index.php');
            } else {
                $this->respData['loginStatus'] = FALSE;
                $this->respData['msg']         = "Invalid Username or  Password ";
            }

        }

        return json_encode($this->respData);
    }

    private function storeDataInSession($data) {
        foreach ($data as $row) {
            $_SESSION['AdminId']   = $row['id'];
            $_SESSION['AdminEmail'] = $row['email'];
        }
        session_write_close();
    }

    function process() {
        $method = (isset($_GET['a'])) ? $_GET['a'] : "";
        switch ($method) {
            case 'authinticate':
                echo $this->authintication(trim($_POST["email"]), trim($_POST["password"]));
                break;
            default:
                $this->index();
                break;
        }
    }

    private function checkLogin() {
        if (@$_SESSION['AdminEmail'] && @$_SESSION['AdminId']) {
            header('Location: AdminDashboard.php');
        }
    }




}