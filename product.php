<?php

require_once 'EzzipixController.php';
require_once dirname(__FILE__) . '/Model/UserServiceModel.php';
require_once dirname(__FILE__) . '/Model/UserServiceDataModel.php';

class Product extends EzzipixController {

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