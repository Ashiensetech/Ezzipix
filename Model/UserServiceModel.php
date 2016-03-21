<?php

require_once 'EzzipixModel.php';

class UserService extends EzzipixModel {

    public function __construct() {
        parent::__construct('user_service');
    }

    public function getAllService($uId) {
        $sql = "SELECT p.id as spId,p.name, u.service_user_id, u.active AS active FROM user_service u, service_provider p WHERE u_id = $uId AND p.id = u.service_provider_id AND u.active=1 ORDER BY p.id";

        return $this->getArrayData(mysql_query($sql));
    }

    function checkAndUpdate($value){
        $service_user_id= $value['service_user_id'];
        $sql="select * from $this->tableName WHERE service_user_id = '".$service_user_id."'";

        $data=$this->getArrayData(mysql_query($sql));

        foreach($data as $d){
            $id=$d['id'];
        }
        if(empty($id)){

            return 2;
        }

        $sql2="update $this->tableName set active=1 where id=".$id;


        $flag=mysql_query($sql2);

        return 1;



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
                  . " and service_provider_id = $service_provider_id AND active = 1  limit 1";
        $result = mysql_query($query);

        foreach ($this->getArrayData($result) as $rowData) {
            return $rowData['id'];
        }

        return FALSE;
    }

    function haveServiceIdByu_id($service_provider_id, $service_user_id, $u_id) {

        $service_provider_id = mysql_real_escape_string(trim($service_provider_id));
        $service_user_id     = mysql_real_escape_string(trim($service_user_id));

        $query  = "SELECT id, active FROM $this->tableName WHERE "
                  . " service_user_id = '$service_user_id'"
                  . " and service_provider_id = $service_provider_id  and u_id = $u_id limit 1";
        $result = $this->getArrayData(mysql_query($query));

        if (!empty($result)) {
            return $result[0];
        }

        return FALSE;
    }

    function getUserIdByProviderAndService($service_provider_id, $service_user_id) {
        $service_provider_id = mysql_real_escape_string(trim($service_provider_id));
        $service_user_id     = mysql_real_escape_string(trim($service_user_id));

        $query = "SELECT u_id FROM $this->tableName WHERE service_user_id = '$service_user_id'"
                 . " and service_provider_id = '$service_provider_id' limit 1";
	$result = $this->getArrayData(mysql_query($query));
       foreach ($result as $rowData) { 
	 return $rowData['u_id'];
        }

        return 0;
    }

    function findUserService($serviceProviderId, $serviceUserId, $data = NULL) {
        $serviceProviderId = mysql_real_escape_string(trim($serviceProviderId));
        $serviceUserId     = mysql_real_escape_string(trim($serviceUserId));

        $deactivate = ($data == 'deactivate') ? ' AND active = 0' : '';
        $query      = "SELECT COUNT(*) AS total FROM $this->tableName WHERE service_user_id = '$serviceUserId' " .
                      "AND service_provider_id = '$serviceProviderId' $deactivate LIMIT 1";

        foreach ($this->getArrayData(mysql_query($query)) as $rowData) {
            return $rowData['total'];
        }

        return 0;
    }

    function deactivateService($serviceProviderId, $serviceUserId, $status = NULL) {
        $serviceProviderId = mysql_real_escape_string(trim($serviceProviderId));
        $serviceUserId     = mysql_real_escape_string(trim($serviceUserId));

        if (!$status == 1) {
            $status = 0;
        }
        $sql = "UPDATE  $this->tableName SET active = $status WHERE service_user_id = '$serviceUserId' AND service_provider_id = '$serviceProviderId'";
        mysql_query($sql);
        return mysql_affected_rows();
    }
	 function activateService($serviceProviderId, $serviceUserId, $status = NULL){
        $serviceProviderId = mysql_real_escape_string(trim($serviceProviderId));
        $serviceUserId     = mysql_real_escape_string(trim($serviceUserId));

        if (!$status == 1) {
            $status = 0;
        }

        $sql = "UPDATE  $this->tableName SET active = $status WHERE service_user_id = '$serviceUserId' AND service_provider_id = $serviceProviderId";
        mysql_query($sql);

        return mysql_affected_rows();
    }
    /**
     * Get service current status active or not
     *
     * @param string $form
     * @param int    $serviceType
     *
     * @return bool
     */
    function getServiceStatus($form, $serviceType) {
        $form = mysql_real_escape_string(trim($form));
        $sql  = "SELECT active FROM $this->tableName WHERE service_user_id = '$form' " .
                "AND service_provider_id = '$serviceType' LIMIT 1";
        $data = $this->getArrayData(mysql_query($sql));

        if (!empty($data)) {
            return TRUE;
        }

        return FALSE;
    }
    function getActiveStatus($form, $serviceType) {
        $form = mysql_real_escape_string(trim($form));
        $sql  = "SELECT active FROM $this->tableName WHERE service_user_id = '$form' " .
            "AND service_provider_id = '$serviceType' LIMIT 1";
        $data = $this->getArrayData(mysql_query($sql));

        foreach($data as $d){
            return $d['active'];
        }
    }

    function getServiceIDByProviderId($u_id, $serviceProviderId) {
        $u_id              = mysql_real_escape_string(trim($u_id));
        $serviceProviderId = mysql_real_escape_string(trim($serviceProviderId));

        $sql  = "SELECT id FROM $this->tableName WHERE service_provider_id = $serviceProviderId AND u_id = $u_id  LIMIT 1";
        $data = $this->getArrayData(mysql_query($sql));

        foreach ($data as $rowData) {
            return $rowData['id'];
        }

        return 0;
    }

    function initiateServiceIdForSocialMedia($u_id, $serviceProviderId) {
        $serviceID = $this->getServiceIDByProviderId($u_id, $serviceProviderId);
        if ($serviceID == 0) {
            $data      = [
                "service_provider_id" => $serviceProviderId,
                "u_id"                => $u_id,
                "active"              => 0,
            ];
            $serviceID = $this->insert($data);
        }

        return $serviceID;
    }
}
