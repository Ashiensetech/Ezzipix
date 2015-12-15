<?php

session_start();

//require_once 'helper/DateHelper.php';
class EzzipizController1 {

    public $pageData;
    public $baseUrl;
    public $userInfo;
    public $respData;
    public function __construct()
    {

        //error_reporting(E_ALL);
        //ini_set('display_errors', 1);

        $this->pageData = array();
        $this->userInfo = array();
        $this->respData = array();

        $this->baseUrl = ((isset($_SERVER['HTTPS']) && $_SERVER['HTTPS'] == "on") ? "https" : "http");
        $this->baseUrl .= "://" . $_SERVER['HTTP_HOST'] . "/ezeepix/admin/"; // Local

        $this->fileUrl = ((isset($_SERVER['HTTPS']) && $_SERVER['HTTPS'] == "on") ? "https" : "http");
        $this->fileUrl .="://" . $_SERVER['HTTP_HOST'] . "/ezeepix/"; // Local
//        $this->baseUrl .= "://" . $_SERVER['HTTP_HOST'] . "/admin/"; // Server
//        $this->fileUrl ="://" . $_SERVER['HTTP_HOST'] . "/"; // Server
        $this->userInfo['AdminId'] = 0;
        $this->userInfo['AdminEmail'] = NULL;
        $this->userInfo['isLogin'] = FALSE;

        if (isset($_SESSION['AdminId'])) {
            $this->userInfo['AdminId'] = $_SESSION['AdminId'];
            $this->userInfo['AdminEmail'] = $_SESSION['AdminEmail'];
            $this->userInfo['isLogin'] = TRUE;
        }
        date_default_timezone_set("Asia/dhaka");
        $this->respData['userInfo'] = $this->userInfo;
        $this->respData['data'] = new StdClass();
        $this->respData['status'] = true;
        $this->respData['msg'] = "";
    }

    public function loadView($fileName, $var, $str = false) {
        extract($var, EXTR_PREFIX_SAME, "wddx");
        ob_start();
        include getcwd() . '/view/' . $fileName . '.php';
        $content = ob_get_clean();
        if (!$str) {
            echo $content;
            return;
        }
        return $content;
    }

}

?>