<?php


require_once 'EzzipixModel.php';

class Login extends  EzzipixModel{
    function __construct() {
        parent::__construct('login');
    }
    public function getByEmailAndPassword($email, $password) {
        $email = mysql_real_escape_string(trim($email));
        $password = mysql_real_escape_string(trim($password));

        $query = "SELECT * FROM `$this->tableName` WHERE EMAIL = '$email' AND PASSWORD = '$password' limit 1";
        $result = mysql_query($query);
        return $this->getArrayData($result);
    }
    public function isEmailExist($email) {
        $email = mysql_real_escape_string(trim($email));

        $query = "SELECT * FROM `$this->tableName` WHERE EMAIL = '$email' limit 1";

        $result = mysql_query($query);
        foreach($this->getArrayData($result) as $row){
            return true;
        }
        return false;
    }
}
