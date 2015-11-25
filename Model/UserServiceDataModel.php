<?php
require_once 'EzzipixModel.php';

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
                  . " user_service.u_id = " . $u_id
                  . " ORDER BY id DESC ";
        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getAllMediaDataByLoginId($login_id)
    {
        $query = "SELECT $this->tableName.* "
                ." FROM `$this->tableName`"
                ." WHERE `$this->tableName`.user_service_id IN"
                ." (SELECT `user_service`.id FROM `user_service` WHERE `user_service`.u_id IN"
                ." (SELECT `login`.u_id FROM `login` WHERE `login`.id = 1 ))";
        $result = mysql_query($query);
        
    return $this->getArrayData($result);

    }




    function getMediaFileByUid($u_id, $platformId) {
        $query  = "SELECT $this->tableName.* "
                  . " FROM `$this->tableName`"
                  . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
                  . " WHERE "
                  . " user_service.u_id = " . $u_id
                  . " AND user_service.service_provider_id = " . $platformId
                  . " ORDER BY id DESC ";
        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getMediaFileByUidAndDate($u_id, $platformId,$date) {
        $date = mysql_real_escape_string(trim($date));

        $query  = "SELECT $this->tableName.* "
            . " FROM `$this->tableName`"
            . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
            . " WHERE "
            . " user_service.u_id = " . $u_id
            . " AND user_service.service_provider_id = " . $platformId
            . " AND date(".$this->tableName.".created_date) = date('".$date."') "
            . " ORDER BY id DESC ";

        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getAllMediaFileByUidAndDate($u_id,$date) {

        $date = mysql_real_escape_string(trim($date));
        $query  = "SELECT $this->tableName.* "
            . " FROM `$this->tableName`"
            . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
            . " WHERE "
            . " user_service.u_id = " . $u_id
            . " AND date(".$this->tableName.".created_date) = date('".$date."') "
            . " ORDER BY id DESC ";

        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getDistinctDateWiseMediaFileByUid($u_id) {
        $query  = "SELECT $this->tableName.* "
            . " FROM `$this->tableName`"
            . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
            . " WHERE "
            . " user_service.u_id = " . $u_id
            ." Group by date(user_service_data.created_date)"
            . " ORDER BY id DESC ";

        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getDistinctDateWiseMediaFileByUidAndServiceId($u_id,$platformId) {
        $query  = "SELECT $this->tableName.* "
            . " FROM `$this->tableName`"
            . " INNER join user_service on user_service.id = $this->tableName.user_service_id "
            . " WHERE "
            . " user_service.u_id = " . $u_id
            . " AND user_service.service_provider_id = " . $platformId
            ." Group by date(user_service_data.created_date)"
            . " ORDER BY id DESC ";

        $result = mysql_query($query);

        return $this->getArrayData($result);
    }
    function getImageByUserId($imageId) {
        $query  = "SELECT * FROM $this->tableName WHERE id = $imageId";
        $result = mysql_query($query);

        return $this->getArrayData($result);
    }

    function deleteImage($imageId) {
        $query = "DELETE FROM $this->tableName WHERE id = $imageId";

        return mysql_query($query);
    }
}
