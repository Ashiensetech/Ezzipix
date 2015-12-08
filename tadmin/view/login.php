<!--
/**
 * File     : login.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 */
-->
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Ezeepix Admin</title>
    <!-- Tell the browser to be responsive to screen width -->
    <meta content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" name="viewport">
    <!-- Bootstrap 3.3.5 -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/bootstrap/css/bootstrap.min.css';?>">
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.4.0/css/font-awesome.min.css">
    <!-- Ionicons -->
    <link rel="stylesheet" href="https://code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css">
    <!-- Theme style -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/dist/css/AdminLTE.min.css';?>">
    <!-- iCheck -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/plugins/iCheck/square/blue.css';?>">

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
    <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
    <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
    <![endif]-->
</head>
<?php include_once 'partial/head.php'; ?>
<body class="hold-transition login-page">
<div class="login-box">
    <div class="login-logo">
        <a href=""><b>Ezeepix</b> Admin</a>
    </div>

    <div class="login-box-body">
        <form method="post" action="login.php?a=authinticate">

            <div class="form-group has-feedback">
                <input name="email" type="email" id="email" class="form-control" placeholder="Email">
                <span class="glyphicon glyphicon-envelope form-control-feedback"></span>
            </div>
            <div class="form-group has-feedback">
                <input name="password" type="password" id="password" class="form-control" placeholder="Password">
                <span class="glyphicon glyphicon-lock form-control-feedback"></span>
            </div>
            <div class="row">
                <div class="col-xs-8">

                </div>
                <!-- /.col -->
                <div class="col-xs-4">
                    <button type="submit" class="btn btn-primary btn-block btn-flat">Sign In</button>
                </div>
                <!-- /.col -->
            </div>
        </form>
    </div>
    <!-- /.login-box-body -->
</div>
<div id="msg"></div>
<!-- /.login-box -->

<!-- jQuery 2.1.4 -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/jQuery/jQuery-2.1.4.min.js';?>"></script>
<!-- Bootstrap 3.3.5 -->
<script src="<?php echo $this->baseUrl.'tadmin/public/bootstrap/js/bootstrap.min.js';?>"></script>
<!-- iCheck -->
</body>
<script>
    function doLogin() {
        var email = $('#email').val();
        var password = $('#password').val();
        $('#msg').html("");
        $.ajax({
            url: "?a=authinticate",
            method: "POST",
            data: {"email": email, "password": password},
            success: function (data) {
                var resp = jQuery.parseJSON(data);
                alert("success");
                $('#msg').html(resp.msg);
                $('#msg').fadeIn(500);
                if (resp.loginStatus) {
                    alert("login status");
                    window.location.href = 'AdminDashboard' + phpSuffix;
                }
            }
        });
        return false;
    }
</script>
</html>