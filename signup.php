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
            $this->respData['msg']       = 'Registration Success.';
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


    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'register';
                $this->registration();
                break;
            default;
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