<?php

/**
 * Created by PhpStorm.
 * User: tomal
 * Date: 3/4/16
 * Time: 12:54 PM
 */
require_once 'AdminModel.php';
class AdminServerData extends AdminModel
{
    function __construct() {
        parent::__construct('api_data');
    }


    public function getData($data){
        $sql="select * from $this->tableName where process_name='".$data."' ";

        $result=mysql_query($sql);

        $data=$this->getArrayData($result);



        return $data;



        while($row = mysql_fetch_array($data)){
        //print_r($row);
        }
print_r(mysql_num_rows($result));

    }

    public function setPid($process, $pid){
        $sql="update $this->tableName set process_id= '".$pid."'  where process_name='".$process."' ";
        $result=mysql_query($sql);
        return $result;


    }

}


