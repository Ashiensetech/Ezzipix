<?php
/**
 * Created by PhpStorm.
 * User: User
 * Date: 10-Jul-15
 * Time: 12:28 PM
 */
require_once 'EzzipixController.php';
class MediaController extends EzzipixController{
    function index(){
        echo "Nothing to see here";
        return;
    }
    function showAllImage(){
        require_once 'Model/UserServiceDataModel.php';
        $userServiceData = new UserServiceData();

        $this->pageData['imgGallery'] =  $userServiceData->getAllMediaFileByUid($this->userInfo['uId']);
        $this->loadView('image_gallery',$this->pageData);
    }
    function process(){
        $method = (isset($_GET['r']))?$_GET['r']:"";
        switch($method){
            case 'all';
                $this->showAllImage();
                break;
            default ;
                $this->index();
                break;
        }
    }
}
$media = new MediaController();
$media->process();