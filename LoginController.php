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
            case 'authinticate':
                echo $this->authintication(trim($_POST["email"]), trim($_POST["password"]));
                break;
            case 'forgetPassword':
                $this->forgetPassword();
                break;
            case 'resetPassword':
                $this->resetPassword();
                break;
            case 'saveNewPassword':
                $this->saveNewPassword();
                break;
            default:
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

            if ($user = $login->getUserDetails($email)) {
                include_once "Model/ResetPassword.php";

                $reset = new ResetPassword();
                $data  = $reset->setToken($email);

                if ($data) {
                    $subject = 'Password Reset : Ezeepix';
                    $message = 'Dear,' .
                               ' ' .
                               $user['full_name'] . ', we received a password reset request from you.' .
                               'If you request for password follow below link, if you not ignore this mail.' .
                               ' ' .
                               ' ' .
                               $this->baseUrl . 'login.php?r=resetPassword&email=' . $email .
                               '&token=' . $data["token"];
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
        if (@$_GET['email'] && @$_GET['token']) {
            include_once "Model/ResetPassword.php";

            $reset = new ResetPassword();
            $email = $_GET['email'];
            $token = $_GET['token'];

            if ($reset->verifyToken($email, $token)) {
                $this->pageData['reset'] = TRUE;
                $this->loadView('reset_password', $this->pageData);
            } else {
                $this->pageData['reset']   = FALSE;
                $this->pageData['message'] = "Password Reset token expired ! Try again .";
                $this->loadView("request_password", $this->pageData);
            }
        } else {
            $this->pageData['reset']   = FALSE;
            $this->pageData['message'] = "Password Reset Failed ! Try again .";
            $this->loadView("request_password", $this->pageData);
        }
    }

    public function saveNewPassword() {
        require_once 'Model/LoginModel.php';
        include_once "Model/ResetPassword.php";

        $login = New Login();
        $reset = new ResetPassword();

        $email      = $_POST['email'];
        $token      = $_POST['token'];
        $password   = $_POST['password'];
        $rePassword = $_POST['re-password'];

        if (($password == NULL || $password == "") && ($rePassword == NULL || $rePassword == "")) {
            header('Location: login.php?r=resetPassword&email=' . $email . '&token=' . $token . '&fv=4');
            die;
        }

        if ($password == NULL || $password == "") {
            header('Location: login.php?r=resetPassword&email=' . $email . '&token=' . $token . '&fv=2');
            die;
        }

        if ($rePassword == NULL || $rePassword == "") {
            header('Location: login.php?r=resetPassword&email=' . $email . '&token=' . $token . '&fv=3');
            die;
        }

        if ($password != $rePassword) {
            header('Location: login.php?r=resetPassword&email=' . $email . '&token=' . $token . '&fv=1');
            die;
        }

        if ($reset->verifyToken($email, $token)) {
            if ($login->updatePassword($email, $password)) {
                $reset->deleteToken($email);
                header('Location: login.php?&resetPassword=success');
            } else {
                header('Location: login.php?&resetPassword=failed');
            }
        } else {
            $this->pageData['reset']   = FALSE;
            $this->pageData['message'] = "Password Reset token expired ! Try again .";
            $this->loadView("request_password", $this->pageData);
        }
    }
}