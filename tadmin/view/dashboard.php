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

    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/bootstrap/css/bootstrap.min.css';?>">
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.4.0/css/font-awesome.min.css">
    <!-- Ionicons -->
    <link rel="stylesheet" href="https://code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css">
    <!-- jvectormap -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/plugins/jvectormap/jquery-jvectormap-1.2.2.css';?>">
    <!-- Theme style -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/dist/css/AdminLTE.min.css';?>">
    <!-- AdminLTE Skins. Choose a skin from the css/skins
         folder instead of downloading all of them to reduce the load. -->
    <link rel="stylesheet" href="<?php echo $this->baseUrl.'tadmin/public/dist/css/skins/_all-skins.min.css';?>">

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
    <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
    <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
    <![endif]-->
</head>

<body class="hold-transition skin-blue sidebar-mini">
<div class="wrapper">
    <?php include_once "layout/topMenu.php"?>

    <?php include_once "layout/sideBar.php"?>
    <div class="content-wrapper">
        <div class="row">
            <div class="col-md-3 col-sm-6 col-xs-12">
                <div class="info-box">
                    <span class="info-box-icon bg-aqua"><i class="fa fa-users"></i></span>
                    <div class="info-box-content">
                        <span class="info-box-text">Total User</span>
                        <span class="info-box-number">25</span>
                    </div>
                </div>
            </div>
            <div class="col-md-3 col-sm-6 col-xs-12">
                <div class="info-box">
                    <span class="info-box-icon bg-green"><i class="fa fa-money"></i></span>
                    <div class="info-box-content">
                        <span class="info-box-text">Customer</span>
                        <span class="info-box-number">25</span>
                    </div>
                </div>
            </div>

            <div class="clearfix visible-sm-block"></div>

            <div class="col-md-3 col-sm-6 col-xs-12">
                <div class="info-box">
                    <span class="info-box-icon bg-blue"><i class="ion ion-ios-cart-outline"></i></span>
                    <div class="info-box-content">
                        <span class="info-box-text">Employee</span>
                        <span class="info-box-number">25</span>
                    </div>
                </div>
            </div>
            <div class="col-md-3 col-sm-6 col-xs-12">
                <div class="info-box">
                    <span class="info-box-icon bg-green-active"><i class="fa fa-user-secret"></i></span>
                    <div class="info-box-content">
                        <span class="info-box-text">Merchant</span>
                        <span class="info-box-number">25</span>
                    </div>
                </div>
            </div>
        </div>
  </div>

    <?php include_once "layout/footer.php"?>
</div>

<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/jQuery/jQuery-2.1.4.min.js';?>"></script>
<!-- Bootstrap 3.3.5 -->
<script src="<?php echo $this->baseUrl.'tadmin/public/bootstrap/js/bootstrap.min.js';?>"></script>
<!-- FastClick -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/fastclick/fastclick.min.js';?>"></script>
<!-- AdminLTE App -->
<script src="<?php echo $this->baseUrl.'tadmin/public/dist/js/app.min.js';?>"></script>
<!-- Sparkline -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/sparkline/jquery.sparkline.min.js';?>"></script>
<!-- jvectormap -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/jvectormap/jquery-jvectormap-1.2.2.min.js';?>"></script>
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/jvectormap/jquery-jvectormap-world-mill-en.js';?>"></script>
<!-- SlimScroll 1.3.0 -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/slimScroll/jquery.slimscroll.min.js';?>"></script>
<!-- ChartJS 1.0.1 -->
<script src="<?php echo $this->baseUrl.'tadmin/public/plugins/chartjs/Chart.min.js';?>"></script>
<!-- AdminLTE dashboard demo (This is only for demo purposes) -->
<script src="<?php echo $this->baseUrl.'tadmin/public/dist/js/pages/dashboard2.js';?>"></script>
<!-- AdminLTE for demo purposes -->
<script src="<?php echo $this->baseUrl.'tadmin/public/dist/js/demo.js';?>"></script>


</body>
</html>