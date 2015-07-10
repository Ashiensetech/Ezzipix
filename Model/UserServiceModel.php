<?php

require_once 'EzzipixModel.php';

class UserService extends EzzipixModel {

    public function __construct() {
        parent::__construct('user_service');
    }

    public function getAllService($uId) {
        $sql = "SELECT p.name, u.service_user_id FROM user_service u, service_provider p WHERE u_id = $uId AND p.id = u.service_provider_id ORDER BY p.id";
        return $this->getArrayData(mysql_query($sql));
    }
}
