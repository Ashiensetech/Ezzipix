<?php

class UserServiceData extends EzzipixModel {
    function __construct() {
        parent::__construct('user_service_data');
    }

    function getAllMediaFileByUser_service_id($user_service_id) {
        $query  = "SELECT $this->tableName.* FROM $this->tableName WHERE "
                  . " user_service_id = $user_service_id";
        $result = mysql_query($query);

        return $this->getArrayData($result);
    }

    function getAllMediaFileByUid($u_id) {
        $query  = "SELECT $this->tableName.* "
                  . " FROM `$this->tableName`"
                  . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
                  . " WHERE "
                  . " user_service.u_id = " . $u_id;
        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
}
