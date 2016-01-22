<?php

require_once 'EzzipixController.php';
require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

class PhotoController extends AuthController
{
    private $serverProvider;
    public function __construct()
    {
        parent::__construct();
        $this->serverProvider = array(1=>"telegram",2=>"whatsapp",3=>"facebook",4=>"instagram",5=>"dropbox", 6=>"picasa",7=>"flicker",8=> "desktop" );
    }
    public function index(){


    }
    public function showAllImage(){
        require_once dirname(__FILE__) .'/Model/UserServiceDataModel.php';

        $userServiceData = new UserServiceData();
        $this->pageData["images"] = $userServiceData->getAllMediaFileByUidAndDate($this->userInfo['uId'],"2015-11-25");
        print_r($this->pageData["images"]);
        $this->loadView('img_gallery/image_list', $this->pageData);
    }
    public function showDateWiseImage(){
        $this->auth();

        require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';
        require_once dirname(__FILE__) . '/Model/ServiceProviderModel.php';

        $serviceProvider = new ServiceProvider();
        $userServiceData = new UserServiceData();
        $services        = $serviceProvider->getProviderList();
        $servicesArray   = [];

        foreach ($services as $service) {
            $servicesArray[$service['id']] = $service['name'];
        }

        $d = @$_GET['d'];
        if($d==null || $d==""){
            header($this->baseUrl.'media.php?r=allnew');
            die;
        }
        $platform = (isset($_GET['p']))?$_GET['p']:"all";

        if (in_array($platform,  $this->serverProvider)) {
            $platformId                     = array_search($platform, $this->serverProvider);
            $this->pageData['imgGallery'] = $userServiceData->getMediaFileByUidAndDate($this->userInfo['uId'],$platformId,$d);
        } else {

            $this->pageData['imgGallery'] = $userServiceData->getAllMediaFileByUidAndDate($this->userInfo['uId'],$d);
        }



        $this->pageData['platform'] = $platform;
        $this->pageData['allImg'] = json_encode($this->pageData['imgGallery']);
        $this->loadView('img_gallery/image_gallery_date_wise', $this->pageData);
    }
    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'date':
                $this->showDateWiseImage();
                break;
            case 'all':
                $this->showAllImage();
                break;
            default:
                $this->index();
                break;
        }
    }
}
$photoController = new PhotoController();
$photoController->process();