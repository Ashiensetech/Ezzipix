<?php

error_reporting(E_ALL);
ini_set('display_errors', 1);

require_once dirname(__FILE__).'/../../SocialMediaSDK/dropbox-sdk-php-1.1.5/lib/Dropbox/autoload.php';
use \Dropbox as dbx;
class Dropbox  {
    private $url         = "https://api.dropboxapi.com/1/oauth2/";
    private $loginUrl    = "https://www.dropbox.com/1/oauth2/authorize/";
    private $tokenUrl    = "";
    private $callbackUrl;
    private $appKey      = "hcvfe6j8hyuof5l";
    private $appSecret   = "izwbpm05e6dig4t";
    private $code        = "";
    private $accessToken = "";
    private $tokenType   = "";
    private $userId      = "";
    public $pictureList;
    public $dbxClient;
    public $responseArray;
    private $appAuthLink;
    public function __construct($baseUrl,$code="") {
        $this->responseArray = array();
        $this->responseArray["status"] = true;
        $this->responseArray["msg"] = "";
        $this->callbackUrl = $baseUrl."social_media.php?r=dropbox";
        $this->tokenUrl = $this->url . "token";
        if ($code!="") {
            $this->code = $_REQUEST["code"];
        }

        $this->pictureList =  new ArrayObject();

        $this->appAuthLink = $this->loginUrl . "?client_id=" . $this->appKey . "&response_type=code&redirect_uri=" . $this->callbackUrl;
    }
    function getAppAuthLink(){
        return $this->appAuthLink;
    }
    public function initiate() {

        $isDropBoxLogin = false;
        if ($this->code) {
            $data = exec("curl -F 'client_id=$this->appKey' -F 'client_secret=$this->appSecret' -F 'grant_type=authorization_code' -F 'redirect_uri=$this->callbackUrl' -F 'code=$this->code' $this->tokenUrl");
            $data = json_decode($data);

            if(!isset($data->uid)){
                $this->responseArray["status"] =false;
                $this->responseArray["msg"] = "Code broken";
                return  $this->responseArray;
            }
            $this->userId      = $data->uid;
            $this->tokenType   = $data->token_type;
            $this->accessToken = $data->access_token;

            $this->dbxClient = new dbx\Client( $this->accessToken, "PHP-Example/1.0");
            $folderMetadata =  $this->dbxClient->getMetadataWithChildren("/");
            $this->exploreAllImageFile($folderMetadata);
            $isDropBoxLogin = true;
        }

        $this->responseArray['isDropBoxLogin'] = $isDropBoxLogin;
        $this->responseArray['link'] = $this->loginUrl . "?client_id=" . $this->appKey . "&response_type=code&redirect_uri=" . $this->callbackUrl;
        $this->responseArray['pictureList'] = $this->pictureList;


        return  $this->responseArray;
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

}