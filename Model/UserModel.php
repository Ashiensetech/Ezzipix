<?php

require_once 'EzzipixModel.php';

class User extends EzzipixModel {

    public function __construct() {
        parent::__construct('user');
    }

    public function getUserById($id) {
        $sql    = "SELECT u.id, u.full_name, l.email, u.gender, u.dob FROM login l , user u WHERE l.u_id = u.id AND u.id = $id";
        $result = mysql_query($sql);

        return $this->getArrayData($result);
    }

    public function updateAccount($data = []) {
        if (!$data) {
            return FALSE;
        }

        $userId   = $data['user_id'];
        $dob      = mysql_real_escape_string(trim($data['dob']));
        $dob      = ($dob) ? $dob : "NULL";
        $gender   = mysql_real_escape_string(trim($data['gender']));
        $fullName = mysql_real_escape_string(trim($data['full_name']));

        $sql = "UPDATE $this->tableName SET dob = '$dob', full_name = '$fullName', gender = '$gender'" .
               " WHERE id = '$userId'";

        return mysql_query($sql);
    }
}
