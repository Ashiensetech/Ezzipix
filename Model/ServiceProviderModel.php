<?php


require_once 'EzzipixModel.php';

class ServiceProvider extends EzzipixModel {
    function __construct() {
        parent::__construct('service_provider');
    }

    public function getProviderList(){
        $sql = "SELECT id, name FROM service_provider";
        return $this->getArrayData(mysql_query($sql));
    }
}
