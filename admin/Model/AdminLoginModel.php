<?php


require_once 'AdminModel.php';

class AdminLoginModel extends AdminModel {
    function __construct() {
        parent::__construct('admin_users');
    }

    public function getByEmailAndPassword($email, $password) {
        $email    = mysql_real_escape_string(trim($email));
        $password = mysql_real_escape_string(trim($password));

        $query  = "SELECT * FROM `$this->tableName` WHERE EMAIL = '$email' AND PASSWORD = '$password' limit 1";
        $result = mysql_query($query);

        return $this->getArrayData($result);
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

    public function getUserDetails($email) {
        $email  = mysql_real_escape_string(trim($email));
        $query  = "SELECT * FROM $this->tableName , user WHERE EMAIL = '$email' AND user.id = $this->tableName.u_id limit 1";
        $result = mysql_query($query);

        foreach ($this->getArrayData($result) as $row) {
            return $row;
        }

        return FALSE;
    }

    public function updatePassword($email, $password) {
        $email    = mysql_real_escape_string(trim($email));
        $password = mysql_real_escape_string(trim($password));
        $sql      = "UPDATE $this->tableName SET password = '$password' WHERE email = '$email'";

        return mysql_query($sql);
    }
}
