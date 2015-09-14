<?php
/**
 * Project  : ezzipix
 * File     : instagram.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/12/15 - 12:17 PM
 */

require_once 'EzzipixController.php';

class Instagram extends EzzipixController {
    private $accessToken      = NULL;
    private $redirectUrl      = "http://localhost/ezzipix/instagram.php";
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
        if ($this->accessToken) {
            $this->pageData["images"] = $this->getImage();
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

        $this->loadView("instagram", $this->pageData);
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

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            default;
                $this->index();
                break;
        }
    }
}

$instagram = new Instagram();
$instagram->process();