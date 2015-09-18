<?php

class Instagram {
    private $accessToken      = NULL;
    private $code             = NULL;
    private $redirectUrl      = NULL;
    private $serviceUrl       = "https://api.instagram.com/";
    private $apiVersion       = "v1/";
    private $authRoute        = "oauth/access_token/";
    private $recentImageRoute = "users/self/media/recent/";
    private $clientId         = "1f26c98221854439ad6f529854007bf9";
    private $clientSecret     = "76a90fd2f95e4d14bbb6960049006e0a";
    private $grantType        = "authorization_code";
    public $responseData;
    public function __construct($base_url,$accessToken="",$code=""){
        $this->responseData = array();

        $this->redirectUrl      = $base_url."social_media.php?r=instagram";
        if($accessToken!=""){
            $this->accessToken = $accessToken;
        }
        if($code!=""){
            $this->code = $code;
        }
    }
    public function getAuthLoginLink(){
        return "https://instagram.com/oauth/authorize/?client_id=" . $this->clientId . "&redirect_uri=" . $this->redirectUrl . "&response_type=code";
    }
    public function initiate(){
        if ($this->accessToken) {
            $this->responseData["images"]        = $this->getImage();
            $this->responseData["dataSubmitted"] = TRUE;
        } else {
            if ($this->code!=NULL) {
                $this->responseData["images"]        = $this->getAuthentic();
                $this->responseData["dataSubmitted"] = TRUE;
            } else {
                $this->responseData["dataSubmitted"] = FALSE;
                $this->responseData["link"]          = "https://instagram.com/oauth/authorize/?client_id=" . $this->clientId . "&redirect_uri=" . $this->redirectUrl . "&response_type=code";
            }
        }
        return $this->responseData;
    }
    function getImage() {
        $img = exec("curl " . $this->serviceUrl . $this->apiVersion . $this->recentImageRoute . "?access_token=" . $this->accessToken);
        $img = json_decode($img);

        return $img->data;
    }

    function getAuthentic() {
        if ($this->code!=NULL) {
            $code =$this->code;;

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

}