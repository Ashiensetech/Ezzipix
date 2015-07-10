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

    function isUserIdExist($service_provider_id, $service_user_id) {

        $service_provider_id = mysql_real_escape_string(trim($service_provider_id));
        $service_user_id     = mysql_real_escape_string(trim($service_user_id));

        $query = "SELECT * FROM $this->tableName WHERE "
                 . "  service_user_id = '$service_user_id'"
                 . " AND service_provider_id = $service_provider_id  limit 1";

        $result = mysql_query($query);

        if (mysql_num_rows($result) >= 1) {
            return TRUE;
        }

        return FALSE;
    }

    function getIdByService_user_id($service_provider_id, $service_user_id) {

        $service_provider_id = mysql_real_escape_string(trim($service_provider_id));
        $service_user_id     = mysql_real_escape_string(trim($service_user_id));

        $query  = "SELECT id FROM $this->tableName WHERE "
                  . " service_user_id = '$service_user_id'"
                  . " and service_provider_id = $service_provider_id  limit 1";
        $result = mysql_query($query);

        foreach ($this->getArrayData($result) as $rowData) {
            return $rowData['id'];
        }

        return 0;
    }

    function getUserIdByProviderAndService($service_provider_id, $service_user_id) {
        $service_provider_id = mysql_real_escape_string(trim($service_provider_id));
        $service_user_id     = mysql_real_escape_string(trim($service_user_id));

        $query = "SELECT u_id FROM $this->tableName WHERE service_user_id = '$service_user_id'"
                 . " and service_provider_id = $service_provider_id  limit 1";

        foreach ($this->getArrayData(mysql_query($query)) as $rowData) {
            return $rowData['u_id'];
        }

        return 0;
    }
}
