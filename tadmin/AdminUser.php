<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: UserController.php
 * User: rajib
 * Date: 12/8/15
 * Time: 4:28 PM
 */

require_once 'EzzipizController1.php';

class AdminUserController extends EzzipizController1{
    function __construct() {
        parent::__construct();
    }

    public function index(){

        require_once dirname(__FILE__) . '/Model/AdminUserModel.php';

        $user = new AdminUser();
        $result =  $user->getAllAdminUser();
        if(sizeof($result)>=1)
        {
            $this->pageData["userList"] = $result;
            $this->loadView("AllAdminUser",$this->pageData);
        }
    }
    public function showForm(){
        $this->loadView("AdminUserForm",$this->pageData);
    }

    public function addAdminUser($name,$email,$password){

        require_once dirname(__FILE__) . '/Model/AdminUserModel.php';

        $this->respData['createStatus'] = FALSE;

        $adminUser = new AdminUser();
        if ($adminUser->isEmailExist($email)) {
            $this->respData['createStatus'] = FALSE;
            $this->respData['msg']       = 'Email Already Exist';
            echo json_encode($this->respData);
            return;
        }

        $userInsertData  = [
            'name' => $name,
            'email'  => $email,
            'password'     => $password
        ];
        if($adminUser->insert($userInsertData)>0){
            $this->respData['msg']       = 'User added Successfully.';
            $this->respData['createStatus'] = TRUE;

        } else {
                $this->respData['msg']       = 'Internal Server error';
                $this->respData['createStatus'] = FALSE;
        }
        echo json_encode($this->respData);

        return;


    }

    function process() {
        $method = (isset($_GET['a'])) ? $_GET['a'] : "";
        switch ($method) {
            case 'getAdminUserForm':
                $this->showForm();
                break;
            case 'addAdminUser':
                $this->addAdminUser($_POST['name'],$_POST['email'],$_POST['password']);
                break;
            default:
                $this->index();
                break;
        }
    }
}