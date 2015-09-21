<?php

require_once 'EzzipixModel.php';

class ResetPassword extends EzzipixModel {
    function __construct() {
        parent::__construct('reset_password');
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

    function verifyToken() {

    }

    function deleteToken($email) {
        $sql = "DELETE FROM $this->tableName WHERE email = '$email'";
        mysql_query($sql);
    }
}
