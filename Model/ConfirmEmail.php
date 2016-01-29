<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: ConfirmEmail.php
 * User: rajib
 * Date: 1/17/16
 * Time: 9:54 AM
 */

require_once 'EzzipixModel.php';

class ConfirmEmail extends EzzipixModel {
    function __construct() {
        parent::__construct('confirm_email');
    }

    function setToken($email) {
        $this->deleteToken($email);

        $expired = date("Y-m-d H:i", (time() + (12 * 60 * 60)));
        $token   = md5($expired . $email);
        $sql     = "INSERT INTO $this->tableName VALUES (NULL, '$email', '$token', '$expired')";

        if (mysql_query($sql)) {
            return $this->searchToken($email)[0];
        }

        return FALSE;
    }

    function searchToken($email) {
        $sql    = "SELECT * FROM $this->tableName where email = '$email' LIMIT 1";
        $result = mysql_query($sql);

        return $this->getArrayData($result);
    }

    function verifyToken($email, $token) {
        $sql    = "SELECT * FROM $this->tableName WHERE email = '$email' AND token = '$token' AND expired > NOW() LIMIT 1";
        $result = mysql_query($sql);

        if (mysql_num_rows($result) > 0) {
            return TRUE;
        }

        return FALSE;
    }

    function deleteToken($email) {
        $sql = "DELETE FROM $this->tableName WHERE email = '$email'";
        mysql_query($sql);
    }
}
