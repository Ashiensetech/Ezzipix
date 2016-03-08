<?php

/**
 * Created by PhpStorm.
 * User: tomal
 * Date: 3/2/16
 * Time: 2:33 PM
 */
//require_once 'whatsapp_nohup.php';

class AdminServerControl
{

function heloo(){

    $command="nohup php whatsapp_nohup.php";
    $pid = shell_exec(sprintf('%s > /dev/null 2>&1 & echo $!', $command));
    echo $pid;
    print(shell_exec("pwd"));
}



}

$test=new AdminServerControl();
$test->heloo();