<?php

require_once 'EzzipixController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';
require_once dirname(__FILE__) . '/Model/UserModel.php';
require_once dirname(__FILE__) . '/Model/ShippingModel.php';

class Product extends EzzipixController {


    /**
     * Product constructor.
     */
 //   private $serverProvider;
    public function __construct()
    {
        parent::__construct();
        $this->serverProvider = array(1=>"telegram",2=>"whatsapp",3=>"facebook",4=>"instagram",5=>"dropbox", 6=>"picasa",7=>"flicker",8=> "desktop" );

    }

    function index() {
        require_once dirname(__FILE__) . '/Model/ServiceProviderModel.php';

        $this->pageData['printEnable'] = TRUE;
        $this->pageData['allImg']      = NULL;

        if ( $this->userInfo['isLogin'] ) {
            require_once 'Model/UserServiceDataModel.php';
            $userServiceData          = new UserServiceData();

            $serviceProvider = new ServiceProvider();
            $services        = $serviceProvider->getProviderList();
            $servicesArray   = [];

            foreach ($services as $service) {
                $servicesArray[$service['id']] = $service['name'];
                $platform                     = $servicesArray[$service['id']];
                $this->pageData[str_replace(" ","",$platform).'Img'] = json_encode($userServiceData->getMediaFileByUid($this->userInfo['uId'], $service['id']));
            };

            $this->pageData['allImg'] = json_encode($userServiceData->getAllMediaFileByUid($this->userInfo['uId']));
//        $this->pageData['imgDateWise'] =$userServiceData->getDistinctDateWiseMediaFileByUid($this->userInfo['uId']);
            //   $platformId = 8;
//
//            $this->pageData['imgDateWise'] =
            $dateWise =[];
            for($i=1;$i<=8;$i++){
                $dateList =  $userServiceData->getDistinctDateWiseMediaFileByUidAndServiceId($this->userInfo['uId'],$i);
                foreach( $dateList as $key=>$row){
                    list($d, $t) = explode(" ", $row['created_date']);
                    $dateList[$key]["pictures"] =  $userServiceData->getMediaFileByUidAndDate($this->userInfo['uId'],$i,$d);

                }
                $dateWise[$this->serverProvider[$i]]["dateWise"] = $dateList;
            }
            $user        = new User();
            $shipping = new Shipping();
            $this->pageData['shippingAddress'] = null;

            if($this->userInfo['isLogin']){
                $this->pageData['shippingAddress'] = json_encode($shipping->getShippingInfoByUid($this->userInfo['uId']));
                $this->pageData['userInfo'] = json_encode($user->getUserById($this->userInfo['uId']));
            }

            $this->pageData['imgDateWise'] = json_encode($dateWise);
//            var_dump($this->pageData['imgDateWise']);die;
        }
        $this->loadView('products', $this->pageData);
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

$product = new Product();
$product->process();