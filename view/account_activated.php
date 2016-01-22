<?php
/**
 * Created by PhpStorm.
 * Project: ezeepix
 * File: account_activated.php
 * User: rajib
 * Date: 1/17/16
 * Time: 10:34 AM
 */

if ($confirmEmail){
    echo $message;?>
    <a href="login.php">Go To Login</a>
<?php }
else{
    echo $message;?>
<a href="login.php">Go To Login</a>
<?php
}

?>