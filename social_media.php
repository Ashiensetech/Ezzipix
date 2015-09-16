<?php
/**
 * Project  : ezzipix
 * File     : instagram.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/12/15 - 12:17 PM
 */

require_once 'EzzipixController.php';

class SocialMedia extends EzzipixController {
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
    function getImage() {
        $img = exec("curl " . $this->serviceUrl . $this->apiVersion . $this->recentImageRoute . "?access_token=" . $this->accessToken);
        $img = json_decode($img);

        return $img->data;
    }

    function getAuthentic() {
        if (@$_GET["code"]) {
            $code = $_GET["code"];

            $data = exec("curl -F 'client_id=$this->clientId' -F 'client_secret=$this->clientSecret' -F 'grant_type=$this->grantType' -F 'redirect_uri=$this->redirectUrl' -F 'code=$code' $this->serviceUrl$this->authRoute");

            $data        = json_decode($data);
            $accessToken = $data->access_token;

            $_SESSION["access_token"] = $accessToken;

            if ($accessToken) {
                $img = exec("curl " . $this->serviceUrl . $this->apiVersion . $this->recentImageRoute . "?access_token=$accessToken");
                $img = json_decode($img);

                return $img->data;
            }

        }

        return NULL;
    }
    function submitData(){
        include_once 'Model/UserServiceModel.php';

        $userServiceModel = new UserService();
        $serviceProvider = @$_POST["service_provider"];
        $images = @$_POST["images"];
        var_dump($images);
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
        var_dump($serviceID);

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
