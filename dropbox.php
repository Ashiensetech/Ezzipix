<?php

error_reporting(E_ALL);
ini_set('display_errors', 1);

require_once 'EzzipixController.php';
require_once 'SocialMediaSDK/dropbox-sdk-php-1.1.5/lib/Dropbox/autoload.php';
use \Dropbox as dbx;
class Dropbox extends EzzipixController {
    private $url         = "https://api.dropboxapi.com/1/oauth2/";
    private $loginUrl    = "https://www.dropbox.com/1/oauth2/authorize/";
    private $tokenUrl    = "";
    private $callbackUrl = "http://localhost/ezzipix/dropbox.php";
    private $appKey      = "hcvfe6j8hyuof5l";
    private $appSecret   = "izwbpm05e6dig4t";
    private $code        = "";
    private $accessToken = "";
    private $tokenType   = "";
    private $userId      = "";
    public $pictureList;
    public $dbxClient;
    public function __construct() {

        parent::__construct();
        $this->tokenUrl = $this->url . "token";

        if (isset($_REQUEST["code"])) {
            $this->code = $_REQUEST["code"];
        }

        $this->pictureList =  new ArrayObject();
    }
    public function index() {

        $isDropBoxLogin = false;
        if ($this->code) {
            $data = exec("curl -F 'client_id=$this->appKey' -F 'client_secret=$this->appSecret' -F 'grant_type=authorization_code' -F 'redirect_uri=$this->callbackUrl' -F 'code=$this->code' $this->tokenUrl");
            $data = json_decode($data);

            if(!isset($data->uid)){
                header('Location: dropbox.php');
            }
            $this->userId      = $data->uid;
            $this->tokenType   = $data->token_type;
            $this->accessToken = $data->access_token;

            $this->dbxClient = new dbx\Client( $this->accessToken, "PHP-Example/1.0");
            $folderMetadata =  $this->dbxClient->getMetadataWithChildren("/");
            $this->exploreAllImageFile($folderMetadata);
            $isDropBoxLogin = true;
        }

        $this->pageData['isDropBoxLogin'] = $isDropBoxLogin;
        $this->pageData['link'] = $this->loginUrl . "?client_id=" . $this->appKey . "&response_type=code&redirect_uri=" . $this->callbackUrl;
        $this->pageData['pictureList'] = $this->pictureList;

        $this->loadView("social_media/dropbox",$this->pageData);
        return;
    }
    public function exploreAllImageFile($folderMetadata){


        for($i=0;$i<sizeof($folderMetadata["contents"]);$i++){
            $content = $folderMetadata["contents"][$i];
            if($content["is_dir"]==1){
                $this->exploreAllImageFile($this->dbxClient->getMetadataWithChildren($content["path"]));

            }else{
                $picture = Array();
                $picture["thumb"] =  "https://api-content.dropbox.com/1/thumbnails/dropbox".$content["path"]."?size=l&access_token=".$this->accessToken;
                $picture["auto"] =  "https://api-content.dropbox.com/1/files/auto".$content["path"]."?size=l&access_token=".$this->accessToken;
                $this->pictureList->append($picture);
            }
        }
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            default:
                $this->index();
                break;
        }
    }
}

$db = new Dropbox();
$db->process();