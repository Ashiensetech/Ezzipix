<?php
/**
 * Project  : ezzipix
 * File     : instagram.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/12/15 - 12:17 PM
 */

require_once 'AuthController.php';

class SocialMedia extends AuthController {
    private $accessToken      = NULL;
    private $redirectUrl      = "http://localhost/ezzipix/social_media.php";
    private $serviceUrl       = "https://api.instagram.com/";
    private $apiVersion       = "v1/";
    private $authRoute        = "oauth/access_token/";
    private $recentImageRoute = "users/self/media/recent/";
    private $clientId         = "1f26c98221854439ad6f529854007bf9";
    private $clientSecret     = "76a90fd2f95e4d14bbb6960049006e0a";
    private $grantType        = "authorization_code";

    public function __construct() {
        parent::__construct();



        if (@$_SESSION["access_token"]) {
            $this->accessToken = $_SESSION["access_token"];
        }
    }

    public function index() {
        include_once 'custom_lib/social_media/Dropbox.php';
        if ($this->accessToken) {
            $this->pageData["images"]        = $this->getImage();
            $this->pageData["dataSubmitted"] = TRUE;
        } else {
            if (@$_GET["code"]) {
                $this->pageData["images"]        = $this->getAuthentic();
                $this->pageData["dataSubmitted"] = TRUE;
            } else {
                $this->pageData["dataSubmitted"] = FALSE;
                $this->pageData["link"]          = "https://instagram.com/oauth/authorize/?client_id=" . $this->clientId . "&redirect_uri=" . $this->redirectUrl . "&response_type=code";
            }
        }
        include_once 'custom_lib/social_media/Instagram.php';
        $instagram = new Instagram();
        $dropbox = new Dropbox($this->baseUrl,"");

        $this->pageData["instagramLoginLink"] = $instagram->getAuthLoginLink();
        $this->pageData["dropBoxLoginLink"] = $dropbox->getAppAuthLink();


        $this->loadView("social_media/index", $this->pageData);
    }
    public function dropbox(){
        include_once 'custom_lib/social_media/Dropbox.php';
        $code = (isset($_REQUEST["code"]) && $_REQUEST["code"]!="")?$_REQUEST["code"]:"";
        $dropbox = new Dropbox($this->baseUrl,$code);
        $dropboxData = $dropbox->initiate();
        if(!$dropboxData['status']){

            header('Location: '.$dropbox->getAppAuthLink());
        }

        $this->pageData['isDropBoxLogin'] = $dropboxData['isDropBoxLogin'] ;
        $this->pageData['link']  =$dropboxData['link'];
        $this->pageData['pictureList'] =$dropboxData['pictureList'];
        $this->loadView("social_media/dropbox", $this->pageData);

    }
    public function instagram(){
        include_once 'custom_lib/social_media/Instagram.php';
        $accessToken= null;
        $code = null;
        if (@$_SESSION["access_token"]) {
            $accessToken = $_SESSION["access_token"];
        }
        if (@ $_GET["code"]) {
            $code =  $_GET["code"];
        }

        $instagram = new Instagram($accessToken,$code);

        if (@ $_GET["code"]) {
            $this->pageData["images"]        = $instagram->getAuthentic();
            $this->pageData["dataSubmitted"] = TRUE;
        }else {
            $this->pageData["dataSubmitted"] = FALSE;
            $this->pageData["link"]          = $instagram->getAuthLoginLink();
        }

        $this->loadView("social_media/instagram", $this->pageData);

    }

    function submitData(){
        include_once 'Model/UserServiceModel.php';
        include_once 'Model/UserServiceDataModel.php';
        include_once 'helper/FileManagement.php';



        $userServiceModel = new UserService();
        $serviceProvider = @$_POST["service_provider"];
        $images = @$_POST["images"];
        if($images==null || $images==""){
            $this->respData['status'] = false;
            $this->respData['msg'] = "No image provided";
            echo json_encode($this->pageData);
            return;
        }


        $serviceProviderID=0;
        switch ($serviceProvider) {
            case "facebook":
                $serviceProviderID = 3;
                break;
            case "instagram":
                $serviceProviderID = 4;
                break;
            case "dropbox":
                $serviceProviderID = 5;
                break;
            default:
                $this->respData['status'] = false;
                $this->respData['msg'] = "Service Provider does not in list";
                break;
        }
        $serviceProvider = trim($serviceProvider);

        if(!$this->respData['status']){
            echo json_encode($this->respData);
            return;
        }

        $images = json_decode($images);

        $serviceID = $userServiceModel->initiateServiceIdForSocialMedia($this->userInfo['uId'],$serviceProviderID);


        if($serviceID==0){
            $this->respData['status'] = false;
            $this->respData['msg'] = "Internal server error";
            echo json_encode($this->respData);
            return;

        }
        $path  = "upload/img/".$this->userInfo['uId']."/".$serviceProvider;
        $fileManagement  = new FileManagement();

        $userServiceData = new UserServiceData();
        $errorCount = 0;
        for($i=0;$i<sizeof($images);$i++){
            if ($fileName = $fileManagement->saveImage($images[$i],$path)) {
                $data = [
                    'user_service_id' => $serviceID,
                    'media_file_path' => $this->userInfo['uId'] ."/".$serviceProvider ."/". $fileName
                ];
                if($userServiceData->insert($data)<=0){
                    $errorCount++;
                }
            }else{
                $errorCount++;
            }
        }
        $successCount = sizeof($images) - $errorCount;
        $plural = ($successCount>1)?"s":"";
        $this->respData['msg'] = $successCount. " Image".$plural." successfull uploaded";
        $this->respData['msg'] =($errorCount>0)?$this->respData['msg']." ".$errorCount." Images are unable to upload ":$this->respData['msg'];
        echo json_encode($this->respData);
        return;

    }
    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case "dropbox":
                $this->dropbox();
                break;
            case "instagram":
                $this->instagram();
                break;
            case "submitdata":
                $this->submitData();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$socialMedia = new SocialMedia();
$socialMedia->process();
