<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: AdminUserModel.php
 * User: rajib
 * Date: 12/8/15
 * Time: 6:14 PM
 */

require_once 'AdminModel.php';

class AdminUser extends AdminModel {

    public function __construct() {
        parent::__construct('admin_users');
    }


    public function isEmailExist($email) {

        $email = mysql_real_escape_string(trim($email));

        $query = "SELECT * FROM `$this->tableName` WHERE EMAIL = '$email' limit 1";

        $result = mysql_query($query);
        foreach ($this->getArrayData($result) as $row) {
            return TRUE;
        }

        return FALSE;
    }

    public function getAllAdminUser() {
        $sql    = "SELECT * FROM admin_users";
        $result = mysql_query($sql);

        return $this->getArrayData($result);
    }
    public function addAdminUser(){


    }

}
