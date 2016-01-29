<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: shipping.php
 * User: rajib
 * Date: 1/8/16
 * Time: 11:50 AM
 */

require_once 'AuthController.php';
require_once dirname(__FILE__) . '/Model/UserModel.php';
require_once dirname(__FILE__) . '/Model/ShippingModel.php';

class ShippingController extends AuthController{
    function __construct() {
        parent::__construct();
    }

    public function index() {
        $user        = new User();
        $shipping = new Shipping();
        $this->pageData['user']     = $user->getUserById($this->userInfo['uId']);
        $this->pageData['shipping'] = $shipping->getShippingInfoByUid($this->userInfo['uId']);
        $this->loadView('shippingInfo/shipping_info', $this->pageData);
    }

    public function getAddShippingView(){
        $user = new User();

        $this->pageData['user'] = $user->getUserById($_SESSION['uId'])[0];
        $this->loadView('shippingInfo/addShippingInfo',$this->pageData);
    }

    public function addShipping(){
        require_once dirname(__FILE__) . '/Model/ShippingModel.php';
        require_once dirname(__FILE__) . '/Model/UserModel.php';
        $this->respData['regStatus'] = FALSE;

        $address1 = trim($_POST["address1"]);
        $address2  = trim($_POST["address2"]);
        $city    = trim($_POST["city"]);

        $state    = trim($_POST["state"]);
        $postcode = trim($_POST["postcode"]);
        $country      = trim($_POST["country"]);
        $phone      = trim($_POST["phone"]);

        $shipping = new Shipping();
        $user  = new User();
        $userId = $this->userInfo['uId'];

        if ($shipping->isShippingExist($userId)) {
            $this->respData['regStatus'] = FALSE;
            $this->respData['msg']       = 'Shipping Address Already Present';
            echo json_encode($this->respData);

            return;
        }
        $shippingInsertData  = [
            'u_id' => $userId,
            'address1'  => $address1,
            'address2'     => $address2,
            'city'        => $city,
            'state'     => $state,
            'postcode'  => $postcode,
            'country'       => $country,
            'phone'         => $phone
        ];

        if ($shipping->insert($shippingInsertData) > 0) {
            $this->respData['msg']       = 'Shipping Address successfully added';
            $this->respData['regStatus'] = TRUE;
        } else {
            $this->respData['msg']       = 'Internal Server error';
            $this->respData['regStatus'] = FALSE;
        }
        echo json_encode($this->respData);

        return;
    }

    public function getUpdateShippingView(){

        $user        = new User();
        $shipping = new Shipping();
        $this->pageData['user']     = $user->getUserById($this->userInfo['uId']);
        $this->pageData['shipping'] = $shipping->getShippingInfoByUid($this->userInfo['uId']);
        $this->loadView('shippingInfo/updateShippingInfo', $this->pageData);
    }

    public function updateShipping(){
        require_once dirname(__FILE__) . '/Model/ShippingModel.php';
        require_once dirname(__FILE__) . '/Model/UserModel.php';
        $this->respData['regStatus'] = FALSE;

        $address1 = trim($_POST["address1"]);
        $address2  = trim($_POST["address2"]);
        $city    = trim($_POST["city"]);

        $state    = trim($_POST["state"]);
        $postcode = trim($_POST["postcode"]);
        $country      = trim($_POST["country"]);
        $phone      = trim($_POST["phone"]);

        $shipping = new Shipping();
        $user  = new User();
        $userId = $this->userInfo['uId'];

        $shippingUpdateData  = [
            'u_id' => $userId,
            'address1'  => $address1,
            'address2'     => $address2,
            'city'        => $city,
            'state'     => $state,
            'postcode'  => $postcode,
            'country'       => $country,
            'phone'         => $phone
        ];

        if ($shipping->updateShipping($shippingUpdateData) > 0) {
            $this->respData['msg']       = 'Shipping Update Success.';
            $this->respData['regStatus'] = TRUE;
        } else {
            $this->respData['msg']       = 'Internal Server error';
            $this->respData['regStatus'] = FALSE;
        }
        echo json_encode($this->respData);

        return;

    }
    function process(){
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'getAddShippingView':
                $this->getAddShippingView();
                break;
            case 'updateShipping':
                $this->updateShipping();
                break;
            case 'addShipping':
                $this->addShipping();
                break;
            case 'getUpdateShippingView':
                $this->getUpdateShippingView();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$shipping = new ShippingController();
$shipping->process();