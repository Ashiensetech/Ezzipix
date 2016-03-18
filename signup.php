<?php
require_once 'EzzipixController.php';
require_once 'LoginController.php';

class SignupController extends EzzipixController {
    function __construct() {
        parent::__construct();
        if(@$_SESSION['email'] || @$_SESSION['uId']){
            header('Location: home.php');
        }
    }

    function index() {
        $this->loadView("registration", $this->pageData);
    }

    function registration() {
        require_once dirname(__FILE__) . '/Model/LoginModel.php';
        require_once dirname(__FILE__) . '/Model/UserModel.php';
        $this->respData['regStatus'] = FALSE;

        $firstName = trim($_POST["first_name"]);
        $lastName  = trim($_POST["last_name"]);
        $gender    = trim($_POST["gender"]);

        $email    = trim($_POST["email"]);
        $password = trim($_POST["password"]);
        $dob      = trim($_POST["dob"]);

        $login = new Login();
        $user  = new User();
        if ($login->isEmailExist($email)) {
            $this->respData['regStatus'] = FALSE;
            $this->respData['msg']       = 'Email Already Exist';
            echo json_encode($this->respData);

            return;
        }
        $userInsertData  = [
            'first_name' => $firstName,
            'last_name'  => $lastName,
            'gender'     => $gender,
            'dob'        => $dob
        ];
        $uId             = $user->insert($userInsertData);
        $loginInsertData = ['u_id' => $uId, 'email' => $email, 'password' => $password];

        if ($login->insert($loginInsertData) > 0) {
            if($this->sendConfirmationEmail($email))
            {
                $this->respData['msg']       = 'Registration Success and confirmation email sent.';
            }
            else{
                $this->respData['msg']       = 'Registration Success and confirmation email not sent.';
            }

            $this->respData['regStatus'] = TRUE;
            $lc                          = new LoginController();
            $lc->authintication($email, $password);
        } else {
            $this->respData['msg']       = 'Internal Server error';
            $this->respData['regStatus'] = FALSE;
        }
        echo json_encode($this->respData);

        return;
    }
    public function sendConfirmationEmail($email)
    {

        require_once "Model/LoginModel.php";
        $login = new login();

        if ($user = $login->getUserDetails($email)) {
            include_once "Model/ConfirmEmail.php";

            $confirm = new ConfirmEmail();
            $data  = $confirm->setToken($email);
            /*$headers =  'MIME-Version: 1.0' . "\r\n";
            $headers .= 'Content-type: text/html; charset=iso-8859-1' . "\r\n";*/


            $from="support@ezeepix.com";

            $headers = "From: <$from> \n";
            $headers .= "Reply-To: webmaster@example.com  \r\n";
            $headers .= "Return-Path: admin <$from>\r\n";





            $headers .= "X-Priority: 2\nX-MSmail-Priority: high";
            $headers .= "X-Mailer: PHP". phpversion() ."\r\n";


            //'X-Mailer: PHP/' . phpversion();



            if ($data) {
                $subject = 'Email Confirmation : Ezeepix';
                $message = 'Dear,' .
                    $user['full_name'] . ', You are successfully registered to Ezeepix.' .
                    'Follow the below link to confirm your email.' .
                    ' ' .

                    $this->baseUrl . 'signup.php?r=checkConfirmation&email=' . $email .
                    '&token=' . $data["token"];


                if (mail($email, $subject, $message, $headers, "-f$from")) {


                    return true;
                } else {


                    return false;
                }
            }
        } else {
            return false;
        }
        return false;

    }

    public function checkConfirmation()
    {
        if (@$_GET['email'] && @$_GET['token']) {
            include_once "Model/ConfirmEmail.php";
            include_once "Model/LoginModel.php";

            $confirm = new ConfirmEmail();
            $login = new Login();

            $email = $_GET['email'];
            $token = $_GET['token'];

            if ($confirm->verifyToken($email, $token)) {
                if($login->activateUserAccount($email))
                {
                    $confirm->deleteToken($email);
                    $this->pageData['confirmEmail'] = TRUE;
                    $this->pageData['message'] = "Congrats Your account Activated";
                }
                else {
                    $this->pageData['confirmEmail'] = FALSE;
                    $this->pageData['message'] = "Your Account didn't activated";
                }
            } else {
                $this->pageData['confirmEmail']   = FALSE;
                $this->pageData['message'] = "Confirmation Email token expired ! Try again .";
            }
        } else {
            $this->pageData['confirmEmail']   = FALSE;
            $this->pageData['message'] = "email and token didn't match";
        }
        $this->loadView("account_activated", $this->pageData);
    }


    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'register':
                $this->registration();
                break;
            case 'checkConfirmation';
                $this->checkConfirmation();
                break;
            default:
                $this->index();
                break;
        }
    }

    private function storeDataInSession($data) {
        foreach ($data as $row) {
            $_SESSION['uId']   = $row['u_id'];
            $_SESSION['email'] = $row['email'];
        }
    }
}

$signupController = new SignupController();
$signupController->process();