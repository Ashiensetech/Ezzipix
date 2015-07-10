<?php
require_once 'EzzipixController.php';
class SignupController  extends EzzipixController{
    function __construct() {
        parent::__construct();
    }
    function index(){
        $this->loadView("registration", $this->pageData);
    }
    function registration(){
        require_once dirname(__FILE__) . '/Model/LoginModel.php';
        require_once dirname(__FILE__) . '/Model/UserModel.php';
        $this->respData['regStatus'] = false;
        
        $name = trim($_POST["name"]);
        $gender = trim($_POST["gender"]);
        
        $email = trim($_POST["email"]);
        $password = trim($_POST["password"]);
        
        $login = new Login();
        $user = new User();
        if($login->isEmailExist($email)){
             $this->respData['regStatus']=false;
             $this->respData['msg']='Email Already Exist';
        }
        $userInsertData = array('full_name'=>$name,'gender'=>$gender);
        $uId = $user->insert($userInsertData);
        $loginInsertData = array('u_id'=>$uId,'email'=>$email,'password'=>$password);
        if($login->insert($loginInsertData)>0){
            $this->respData['msg']='Registration Success...and <br>Redirect to login page';
            $this->respData['regStatus']=true;
        }    
        echo json_encode($this->respData);
        return;
    }
    
  
    function process(){
        $method = (isset($_GET['r']))?$_GET['r']:"";
        switch($method){
            case 'register';
                $this->registration();
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
    }
}
$signupController = new SignupController();
$signupController->process();