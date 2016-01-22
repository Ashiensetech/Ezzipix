<!--
/** * File     : master.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 */
 -->
<!DOCTYPE html>
<html>
<?php include_once 'view/head.php' ?>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Ezeepix Admin</title>
    <meta content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" name="viewport">

    <link rel="stylesheet" href="<?php echo $this->baseUrl.'public/bootstrap/css/bootstrap.min.css';?>">
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.4.0/css/font-awesome.min.css">
    <!-- Ionicons -->
    <link rel="stylesheet" href="https://code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css">
    <!-- jvectormap -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'public/plugins/jvectormap/jquery-jvectormap-1.2.2.css';?>">
    <!-- Theme style -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'public/dist/css/AdminLTE.min.css';?>">
    <!-- AdminLTE Skins. Choose a skin from the css/skins
         folder instead of downloading all of them to reduce the load. -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'public/dist/css/skins/_all-skins.min.css';?>">
    <link href="https://cdn.datatables.net/1.10.10/css/jquery.dataTables.min.css" rel="stylesheet" type='text/css'>

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
    <script src="https://cdn.datatables.net/1.10.10/js/jquery.dataTables.min.js"></script>
    <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
    <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
    <![endif]-->
</head>

<body class="hold-transition skin-blue sidebar-mini">

<div class="wrapper">
    <?php include_once "layout/topMenu.php"?>

    <?php include_once "layout/sideBar.php"?>
    <div class="content-wrapper">
        <div class="box box-info">
            <div class="box-header with-border">
                <h3 class="box-title">Add Admin</h3>
            </div>
            <form method="POST" action="Admin.php?a=addAdminUser" onsubmit="return signup();" accept-charset="UTF-8" class="form-horizontal"><input name="_token" type="hidden" value="8wQ3I6I3u9SCm3nsB5hAxhYt0ZTIvkT56AataIRg">
                <div class="box-body">
                    <div class="form-group">
                        <label for="name" class="col-sm-2 control-label">Full name</label>
                        <div class="col-sm-10">
                            <input class="form-control mendatory" titleName="First Name"  type="text" id="name">
                        </div>
                    </div>
                    <div class="form-group">
                        <label for="email" class="col-sm-2 control-label">Email</label>
                        <div class="col-sm-10">
                            <input class="form-control mendatory" titleName="Email" type="text" id="email">
                        </div>
                    </div>
                    <div class="form-group">
                        <label for="password" class="col-sm-2 control-label">Password</label>
                        <div class="col-sm-10">
                            <input class="form-control mendatory" titleName="password" type="password" value="" id="password">
                        </div>
                    </div>
                    <div class="form-group">
                        <label for="password-confirmation" class="col-sm-2 control-label">Re-Password</label>
                        <div class="col-sm-10">
                            <input class="form-control mendatory" id="conPassword" titleName="password_confirmation" type="password" value="">
                        </div>
                    </div>
                </div>
                <p class="help-block text-muted text-center">
                    <span id="msg" style="background:#C50505;color:#fff;"></span>
                </p>
                <div class="box-footer">
                    <button type="submit" class="btn btn-info pull-right">Add Admin</button>
                </div>
            </form>
        </div>
    </div>
    <?php include_once "layout/footer.php"?>
</div>

<script src="<?php echo $this->baseUrl.'public/plugins/jQuery/jQuery-2.1.4.min.js';?>"></script>
<!-- Bootstrap 3.3.5 -->
<script src="<?php echo $this->baseUrl.'public/bootstrap/js/bootstrap.min.js';?>"></script>
<!-- FastClick -->
<script src="<?php echo $this->baseUrl.'public/plugins/fastclick/fastclick.min.js';?>"></script>
<!-- AdminLTE App -->
<script src="<?php echo $this->baseUrl.'public/dist/js/app.min.js';?>"></script>
<!-- Sparkline -->
<script src="<?php echo $this->baseUrl.'public/plugins/sparkline/jquery.sparkline.min.js';?>"></script>
<!-- jvectormap -->
<script src="<?php echo $this->baseUrl.'public/plugins/jvectormap/jquery-jvectormap-1.2.2.min.js';?>"></script>
<script src="<?php echo $this->baseUrl.'public/plugins/jvectormap/jquery-jvectormap-world-mill-en.js';?>"></script>
<!-- SlimScroll 1.3.0 -->
<script src="<?php echo $this->baseUrl.'public/plugins/slimScroll/jquery.slimscroll.min.js';?>"></script>
<!-- ChartJS 1.0.1 -->
<script src="<?php echo $this->baseUrl.'public/plugins/chartjs/Chart.min.js';?>"></script>
<!-- AdminLTE dashboard demo (This is only for demo purposes) -->
<script src="<?php echo $this->baseUrl.'public/dist/js/pages/dashboard2.js';?>"></script>
<!-- AdminLTE for demo purposes -->
<script src="<?php echo $this->baseUrl.'public/dist/js/demo.js';?>"></script>

<script src="<?php echo $this->baseUrl.'public/plugins/datatables/jquery.dataTables.min.js';?>"></script>
<script src="<?php echo $this->baseUrl.'public/plugins/datatables/dataTables.bootstrap.min.js';?>"></script>

</body>
<script>
    function signup() {
        var valid = true;
        var errorMsg = "";
        $('#msg').html("");
        $('.mendatory').each(function () {
            if (valid && $(this).val() == "") {
                console.log("")
                if ($(this).prop("tagName") == "SELECT") {
                    errorMsg = "Select " + $(this).attr("titleName");
                } else {
                    errorMsg = $(this).attr("titleName") + " field required";
                }

                $(this).focus();
                valid = false;
                return false;
            }
        });

        var re = /^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i;

        if ($('#email').val() != "" && !re.test($('#email').val())) {
            $('#email').focus();
            valid = false;
            errorMsg = 'Email is not in valid format';
        }
        if ($('#password').val() != "" && $('#password').val().length < 6) {
            $('#password').focus();
            valid = false;
            errorMsg = 'At least 6 digit required';
        }
        if ($('#conPassword').val() != "" && $('#conPassword').val().length < 6) {
            $('#conPassword').focus();
            valid = false;
            errorMsg = 'At least 6 digit required';
        }
        if($('#password').val() != $('#conPassword').val()){
            $('#conPassword').focus();
            valid = false;
            errorMsg = 'password mismatch   ';
        }
        if (!valid) {
            $('#msg').html(errorMsg);
            return false;
        }

        var firstName = $('#name').val();
        var email = $('#email').val();
        var password = $('#password').val();
        var conPassword = $('#conPassword').val();


        $('#msg').html("");
        $.ajax({
            url: "?a=addAdminUser",
            method: "POST",
            data: {
                "name": firstName,
                "email": email,
                "password": password
            },
            success: function (data) {
                var resp = jQuery.parseJSON(data);
                $('#msg').html(resp.msg);
                if (resp.createStatus) {
                    $('#msg').delay(1000).fadeOut(500, function () {
                        window.location.href = "AdminDashboard.php";
                    });
                }


            }
        });
        return false;
    }
</script>
</html>