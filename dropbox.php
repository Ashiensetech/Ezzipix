<?php

/**
 * Project  : ezzipix
 * File     : dropbox.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/14/15 - 12:59 PM
 */

require_once 'EzzipixController.php';
require_once 'vendor/dropbox/dropbox-sdk/lib/Dropbox/autoload.php';

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

    public function __construct() {
        parent::__construct();
        $this->tokenUrl = $this->url . "token";

        if (isset($_REQUEST["code"])) {
            $this->code = $_REQUEST["code"];
        }
    }

    public function index() {
        if ($this->code) {
            $data = exec("curl -F 'client_id=$this->appKey' -F 'client_secret=$this->appSecret' -F 'grant_type=authorization_code' -F 'redirect_uri=$this->callbackUrl' -F 'code=$this->code' $this->tokenUrl");
            $data = json_decode($data);

            $this->userId      = $data->uid;
            $this->tokenType   = $data->token_type;
            $this->accessToken = $data->access_token;
        } else { ?>
            <a href="<?php echo $this->loginUrl . "?client_id=" . $this->appKey . "&response_type=code&redirect_uri=" . $this->callbackUrl; ?>">
                Login with Dropbox</a>
        <?php }
        ?><div id="dropboxjs"></div> <script type="text/javascript" src="https://www.dropbox.com/static/api/2/dropins.js" id="dropboxjs" data-app-key="hcvfe6j8hyuof5l"></script><?php
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