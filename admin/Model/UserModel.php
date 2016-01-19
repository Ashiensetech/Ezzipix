<?php

require_once 'AdminModel.php';

class User1 extends AdminModel {

    public function __construct() {
        parent::__construct('user');
    }

    public function getUserById() {
        $sql    = "SELECT u.id, u.first_name, u.last_name, l.email,l.id AS login_id,l.u_id, u.gender,l.activated, u.dob FROM user u LEFT JOIN login l ON u.id = l.u_id";
        $result = mysql_query($sql);

        return $this->getArrayData($result);
    }

    public function updateAccount($data = []) {
        if (!$data) {
            return FALSE;
        }

        $userId    = $data['user_id'];
        $dob       = mysql_real_escape_string(trim($data['dob']));
        $dob       = ($dob) ? $dob : "NULL";
        $gender    = mysql_real_escape_string(trim($data['gender']));
        $firstName = mysql_real_escape_string(trim($data['first_name']));
        $lastName  = mysql_real_escape_string(trim($data['last_name']));

        $sql = "UPDATE $this->tableName SET dob = '$dob', first_name = '$firstName', last_name = '$lastName'," .
            " gender = '$gender' WHERE id = '$userId'";

        return mysql_query($sql);
    }

    public function deactivateUserByUserId($uId)
    {
        $sql = "UPDATE `login` SET `activated` = 0 WHERE `id` = '$uId'";
        mysql_query($sql);
        return mysql_affected_rows();
    }
    public function activateUserByUserId($uId)
    {
        $sql = "UPDATE  `login` SET  `activated` =1 WHERE  `id` =  '$uId'";
        mysql_query($sql);
        return mysql_affected_rows();
    }
}
