<?php

require_once 'AuthController.php';
require_once 'WhatsAppAPIController.php';

class ServiceController extends AuthController {

    function __construct() {
        parent::__construct();
    }

    public function getNew() {
        require_once dirname(__FILE__) . '/Model/ServiceProviderModel.php';

        $serviceProvider = new ServiceProvider();

        $this->pageData['services'] = $serviceProvider->getProviderList();
        $this->loadView('service_form', $this->pageData);
    }

    public function sendCode() {
        require_once dirname(__FILE__) . '/Model/ActivationTokenModel.php';

        $serviceProviderId = $_POST['service_provider_id'];
        $serviceUserId     = $_POST['service_user_id'];

        if ($serviceProviderId == NULL || $serviceUserId == NULL) {
            $data = [
                'status'  => FALSE,
                'message' => 'Service Name or Service ID is Empty',
            ];
            echo json_encode($data);
            die;
        }

        require_once dirname(__FILE__) . '/Model/UserServiceModel.php';

        $serviceUser = new UserService();
        $unique = $serviceUser->findUserService($serviceProviderId, $serviceUserId);

        if ($unique > 0) {
            $data = [
                'status'  => FALSE,
                'message' => 'This Service ID already register with this Service Name',
            ];
            echo json_encode($data);
            die;
        }

        $API   = new WhatsAppAPIController();
        $token = new ActivationToken();

        $code = $API->getConfirmCode(6);

        $data = [
            'u_id'                => $_SESSION['uId'],
            'service_provider_id' => $serviceProviderId,
            'token'               => $code,
        ];

        if ($token->insert($data) < 0) {
            $data = [
                'status'  => FALSE,
                'message' => 'Code Sending Failed !',
            ];
            echo json_encode($data);
            die;
        }

        $API->target  = $serviceUserId;
        $API->message = $code;
        $status       = $API->sendMessage($API->target, $API->message);

        if ($status != NULL) {
            $data = [
                'status'  => TRUE,
                'message' => 'Verification Code Send Successfully',
            ];
            echo json_encode($data);
        } else {
            $data = [
                'status'  => FALSE,
                'message' => 'Verification Code Send Failed Try again',
            ];
            echo json_encode($data);
        }
    }

    public function submitCode() {
        require_once dirname(__FILE__) . '/Model/ActivationTokenModel.php';

        $serviceProviderId = $_POST['service_provider_id'];
        $serviceUserId     = $_POST['service_user_id'];
        $uId               = $_SESSION['uId'];
        $token             = $_POST['token'];

        $checkToken = new ActivationToken();

        $result = $checkToken->checkToken($serviceProviderId, $uId, $token);

        if ($result <= 0) {
            $data = [
                'status'  => FALSE,
                'message' => 'Your Code is Invalid or Expired',
            ];
            echo json_encode($data);
            die;
        }
        require_once dirname(__FILE__) . '/Model/UserServiceModel.php';

        $userService = new UserService();
        $data        = [
            'service_user_id'     => $serviceUserId,
            'service_provider_id' => $serviceProviderId,
            'u_id'                => $uId,
            'active'              => 0,
        ];

        $insertId = $userService->insert($data);

        if ($insertId <= 0) {
            $data = [
                'status'  => FALSE,
                'message' => 'System failed to register your Service',
            ];
            echo json_encode($data);
            die;
        }

        $data = [
            'status'  => TRUE,
            'message' => 'Your ID Verified SuccessFully !',
        ];
        echo json_encode($data);
    }

    public function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'sendCode';
                $this->sendCode();
                break;
            case 'submitCode';
                $this->submitCode();
                break;
            case 'new';
                $this->getNew();
                break;
            default;
                header('Location: dashboard.php?r=index');
                break;
        }
    }
}

$service = new ServiceController();
$service->process();