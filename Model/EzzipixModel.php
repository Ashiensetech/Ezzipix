<?php

class EzzipixModel {

    public $con;
    public $tableName;

    public function __construct($tabName) {
        //$this->con = mysql_connect("localhost", "wsadmin_rafi", "voidmain(void)");
        $this->con = mysql_connect("localhost", "root", "");
        if (!$this->con)
            die("Couldn't connect to database!!!");
        mysql_select_db("ezzipix", $this->con);
        $this->tableName = $tabName;
    }

    public function getArrayData($result) {

        $respData = new ArrayObject();
        if($result==false){
            return $respData;
        }
        while ($temp = mysql_fetch_assoc($result)) {
            $respData->append($temp);
        }
        return $respData;
    }

    public function insert($values) {
        $str1 = "INSERT INTO `" . $this->tableName . "` ( ID";
        $str2 = "VALUES ( NULL";
        foreach ($values as $key => $value) {
            $str1 .= ", ";
            $str2 .= ", ";
            $str1 .= strtoupper($key);
            if (gettype($value) == "integer")
                $str2 .= $value;
            else
            {
                $value = mysql_real_escape_string(trim($value));
                $str2 .= "'" . $value . "'";
            }
        }
        $str1 .= ") ";
        $str2 .= ")";
        $query = $str1 . $str2;
        mysql_query($query);
        return mysql_insert_id($this->con);
    }

    public function deleteById($ID) {
        $ID = mysql_real_escape_string(trim($ID));
        $query = "DELETE FROM " . $this->tableName . " WHERE ID = " . $ID;
        $result = mysql_query($query);
    }

    public function deleteByIdUsingIsDeleted($ID) {
        $ID = mysql_real_escape_string(trim($ID));
        $query = "UPDATE " . $this->tableName . " SET ISDELETED = TRUE WHERE ID = " . $ID;
        $result = mysql_query($query);
    }

    public function getByEntityValue($values) {
        $values['Entity'] = mysql_real_escape_string(trim($values['Entity']));
        $values['Value'] = mysql_real_escape_string(trim($values['Value']));
        $query = "SELECT * FROM " . $this->tableName . " WHERE " . $values['Entity'] . " = " . $values['Value'];
        return $this->getArrayData(mysql_query($query));
    }

    public function getAll() {
        $query = "SELECT * FROM " . $this->tableName;
        $result = mysql_query($query);
        return $result;
    }

    public function update($values) {
        $temp = 0;
        $query = "UPDATE " . $this->tableName . " SET ";
        foreach ($values as $key => $value) {
            if (strtoupper($key) == "ID" || strtoupper($key) == "UPDATEKEY" || strtoupper($key) == strtoupper($values['UpdateKey']))
                continue;
            if ($temp > 0)
                $query .= ", ";
            $query .= strtoupper($key);
            $query .= " = ";
            if (gettype($value) == "integer")
                $query .= $value;
            else
            {
                $value = mysql_real_escape_string(trim($value));
                $query .= "'" . $value . "'";
            }
            $query .= " ";
            $temp++;
        }
        $query .= "WHERE " . strtoupper($values['UpdateKey']) . " = " . $values[$values['UpdateKey']];
        $result = mysql_query($query);
    }

}

?>