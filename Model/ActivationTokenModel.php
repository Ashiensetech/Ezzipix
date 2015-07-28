<?php


require_once 'EzzipixModel.php';

class ActivationToken extends  EzzipixModel{
    function __construct() {
        parent::__construct('activation_token');
    }

    public function checkToken($service_provider_id, $u_id, $token){
        $sql = "SELECT COUNT(*) AS numbers FROM activation_token WHERE service_provider_id = $service_provider_id AND u_id = $u_id AND token = '$token'";
        $count = $this->getArrayData(mysql_query($sql))[0];
        return $count['numbers'];
    }
}
