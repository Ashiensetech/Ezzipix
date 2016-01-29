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

class UserController extends EzzipizController1{
    function __construct() {
        parent::__construct();

        if(!(@$_SESSION['AdminEmail'] && @$_SESSION['AdminId'])){
            header('Location: login.php');
        }

    }


    public function loadPicture()
    {
        include("../Model/UserServiceDataModel.php");

        if(isset($_GET['u_id']))
        {
            $u_id = $_GET['u_id'];
            $userServiceData = new UserServiceData();
            $result = $userServiceData->getAllMediaFileByUid($u_id);
            $this->pageData['userImage'] = $result;
            $this->loadView("userPicture",$this->pageData);
        }
    }

    public function index(){

        require_once dirname(__FILE__) . '/Model/UserModel.php';

        $user = new User1();
        $result =  $user->getUserById();
        if(sizeof($result)>=1)
        {
            $this->pageData["userList"] = $result;
            $this->loadView("allUsers",$this->pageData);
        }
        else
        {
            $this->loadView("allUsers",$this->pageData);
        }
    }

    public function deactivateUser(){

        require_once dirname(__FILE__) . '/Model/UserModel.php';

        $userId = $_POST['u_id'];
        $user   = new User1();

        $status = $user->deactivateUserByUserId($userId);

        if ($status > 0) {
            $this->respData['status'] = TRUE;
            $this->respData['msg']    = "User account has been deactivated !";
        } else {
            $this->respData['status'] = FALSE;
            $this->respData['msg']    = "System unable to deactivated user service try again later !";
        }
        echo json_encode($this->respData);
    }

    public function activateUser(){
        require_once dirname(__FILE__) . '/Model/UserModel.php';

        $userId = $_POST['u_id'];
        $user   = new User1();

        $status = $user->activateUserByUserId($userId);

        if ($status > 0) {
            $this->respData['status'] = TRUE;
            $this->respData['msg']    = "User account has been Activated !";
        } else {
            $this->respData['status'] = FALSE;
            $this->respData['msg']    = "System unable to Activated user service try again later !";
        }
        echo json_encode($this->respData);
    }

    function process() {
        $method = (isset($_GET['a'])) ? $_GET['a'] : "";
        switch ($method) {
            case 'getPicture':
                $this->loadPicture();
                break;
            case 'deactivate':
                $this->deactivateUser();
                break;
            case 'activate':
                $this->activateUser();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$usercontroller = new UserController();
$usercontroller->process();