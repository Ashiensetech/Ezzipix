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
    }

    function process() {
        $method = (isset($_GET['a'])) ? $_GET['a'] : "";
        switch ($method) {
            default:
                $this->index();
                break;
        }
    }
}

$usercontroller = new UserController();
$usercontroller->process();