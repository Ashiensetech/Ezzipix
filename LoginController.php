<?php
require_once 'EzzipixController.php';
class LoginController  extends EzzipixController{
    function __construct() {
        parent::__construct();
        $this->checkLogin();
    }
    function index(){
        $this->loadView("login", $this->pageData);
    }
    function authintication($email,$password){
        require_once dirname(__FILE__) . '/Model/LoginModel.php';


        if ($email == "" || $password == "") {
            $this->respData['msg'] = "Invalid Username or  Password ";
            return; json_encode($this->respData);
        } else {
            $login = new Login();
            $result = $login->getByEmailAndPassword($email, $password);

            if(sizeof($result) == 1){
                $this->storeDataInSession($result);
                $this->respData['loginStatus'] = true;
            }else{
                $this->respData['loginStatus'] = false;
                $this->respData['msg'] = "Invalid Username or  Password ";
            }

        }
        return json_encode($this->respData);
    }
    private function storeDataInSession($data){
        foreach($data as $row){
            $_SESSION['uId']=$row['u_id'];
            $_SESSION['email']=$row['email'];
        }
        session_write_close();
    }
    function process()
    {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'authinticate';
                echo $this->authintication(trim($_POST["email"]), trim($_POST["password"]));
                break;
            default;
                $this->index();
                break;
        }
    }
    private function checkLogin(){
        if(@$_SESSION['email'] && @$_SESSION['uId']){
            header('Location: dashboard.php?r=index');
        }
    }
}