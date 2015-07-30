<?php
require_once 'EzzipixController.php';
class LoginController  extends EzzipixController{
    function __construct() {
        parent::__construct();
        $this->checkLogin();
    }
    function index(){
        $this->loadView("index", $this->pageData);
    }
    function authintication(){
        require_once dirname(__FILE__) . '/Model/LoginModel.php';
       
        $email = trim($_POST["email"]);
        $password = trim($_POST["password"]);
        
        if ($email == "" || $password == "") {
            $this->respData['msg'] = "Invalid Username or  Password ";  
            echo json_encode($this->respData);
            return;
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

        echo json_encode($this->respData);
        return;
    }
  
    function process(){
        $method = (isset($_GET['r']))?$_GET['r']:"";
        switch($method){
            case 'authinticate';
                $this->authintication();
                break;
            default ;
                $this->index();
                break;
        }
    }

    private function storeDataInSession($data){
        foreach($data as $row){
            $_SESSION['uId']=$row['u_id'];
            $_SESSION['email']=$row['email'];
        }
        session_write_close();
    }

    private function checkLogin(){
        if(@$_SESSION['email'] && @$_SESSION['uId']){
            header('Location: dashboard.php?r=index');
        }
    }
}
$loginController = new LoginController();
$loginController->process();