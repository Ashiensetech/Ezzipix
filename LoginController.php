<?php

//error_reporting(E_ALL);
//ini_set('display_errors', 1);

require_once 'EzzipixController.php';

class LoginController extends EzzipixController {
    function __construct() {
        parent::__construct();
        $this->checkLogin();
    }

    function index() {
        $this->loadView("login", $this->pageData);
    }

    function authintication($email, $password) {
        require_once dirname(__FILE__) . '/Model/LoginModel.php';


        if ($email == "" || $password == "") {
            $this->respData['msg'] = "Invalid Username or  Password ";

            return;
            json_encode($this->respData);
        } else {
            $login  = new Login();
            $result = $login->getByEmailAndPassword($email, $password);

            if (sizeof($result) == 1) {
                $this->storeDataInSession($result);
                $this->respData['loginStatus'] = TRUE;
            } else {
                $this->respData['loginStatus'] = FALSE;
                $this->respData['msg']         = "Invalid Username or  Password ";
            }

        }

        return json_encode($this->respData);
    }

    private function storeDataInSession($data) {
        foreach ($data as $row) {
            $_SESSION['uId']   = $row['u_id'];
            $_SESSION['email'] = $row['email'];
        }
        session_write_close();
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'authinticate';
                echo $this->authintication(trim($_POST["email"]), trim($_POST["password"]));
                break;
            case 'forgetPassword';
                $this->forgetPassword();
                break;
            default;
                $this->index();
                break;
        }
    }

    private function checkLogin() {
        if (@$_SESSION['email'] && @$_SESSION['uId']) {
            header('Location: dashboard.php');
        }
    }

    public function forgetPassword() {
        $this->pageData["sendMail"] = FALSE;

        if (@$_POST['email']) {
            require_once "Model/LoginModel.php";
            $email = $_POST['email'];
            $login = new login();

            if ($login->isEmailExist($email)) {
                include_once "Model/ResetPassword.php";

                $reset = new ResetPassword();
                $data  = $reset->setToken($email);

                if ($data) {
                    $subject = 'Password Reset : Ezeepix';
                    $message = 'Reset password yet not implemented, need 1 more day !';
                    $headers = 'From: support@ezeepix.com' . "\r\n" .
                               'Reply-To: webmaster@example.com' . "\r\n" .
                               'X-Mailer: PHP/' . phpversion();

                    if (mail($email, $subject, $message, $headers)) {
                        $this->pageData["sendMail"] = TRUE;
                        $this->pageData["message"]  = "Message sent Successfully !";
                    } else {
                        $this->pageData["sendMail"] = FALSE;
                        $this->pageData["message"]  = "Message sent Failed !";
                    }
                }
            } else {
                $this->pageData["message"] = "Email address doesn't exist !";
            }
        }

        $this->loadView("request_password", $this->pageData);
    }

    public function resetPassword() {

    }
}