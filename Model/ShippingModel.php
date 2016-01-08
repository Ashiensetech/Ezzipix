<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: ShippingModel.php
 * User: rajib
 * Date: 1/8/16
 * Time: 11:52 AM
 */

require_once 'EzzipixModel.php';

class Shipping extends EzzipixModel{

    public function __construct() {
        parent::__construct('shipping_info');
    }

    public function getShippingInfoByUid($id) {
        $sql    = "SELECT s.id, s.u_id, s.address1,s.address2,s.city,s.state,s.postcode,s.country,s.phone FROM shipping_info s WHERE s.u_id = $id";
        $result = mysql_query($sql);

        return $this->getArrayData($result);
    }

    public function isShippingExist($id)
    {
        $userId = mysql_real_escape_string(trim($id));

        $query = "SELECT * FROM `$this->tableName` WHERE u_id = '$userId' limit 1";

        $result = mysql_query($query);
        foreach ($this->getArrayData($result) as $row) {
            return TRUE;
        }

        return FALSE;
    }
    public function updateShipping($data = []){

        if (!$data) {
            return FALSE;
        }
        $userId = $data["u_id"];
        $address1 = mysql_real_escape_string(trim($data["address1"]));
        $address2  = mysql_real_escape_string(trim($_POST["address2"]));
        $city    = mysql_real_escape_string(trim($_POST["city"]));
        $state    = mysql_real_escape_string(trim($_POST["state"]));
        $postcode = mysql_real_escape_string(trim($_POST["postcode"]));
        $country      = mysql_real_escape_string(trim($_POST["country"]));
        $phone      = mysql_real_escape_string(trim($_POST["phone"]));

        $sql = "UPDATE $this->tableName SET address1 = '$address1', address2 = '$address2', city = '$city'," .
            " state = '$state',postcode = '$postcode',country = '$country',phone='$phone' WHERE u_id = '$userId'";

        return mysql_query($sql);
    }
    public function addShippingInfo(){

    }


}