<?php

require_once 'EzzipixModel.php';

class User extends EzzipixModel {

    public function __construct() {
        parent::__construct('user');
    }

    public function getUserById($id){
        $sql = "SELECT u.id, u.full_name, l.email, u.gender, u.dob FROM login l , user u WHERE l.u_id = u.id AND u.id = $id";
        $result = mysql_query($sql);
        return $this->getArrayData($result);
    }

}
