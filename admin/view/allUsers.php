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
        <div class="box">
    <div class="box-header">
        <h3 class="box-title">App Users List</h3>
    </div>
    <div class="box-body">
        <table id="data-table" class="table table-bordered table-striped">
            <thead>
            <tr>
                <th>SL</th>
                <th>Name</th>
                <th>Email</th>
                <th>Gender</th>
                <th>DOB</th>
                <th>Picture</th>
                <th>Action</th>
            </tr>
            </thead>
            <tbody>
            <?php
            $i=1;
            foreach($userList as $user){ ?>
            <tr>
                <td><?php echo $i;?></td>
                <td class="text-capitalize"><?php echo $user['first_name']?></td>
                <td><?php echo $user['email']?></td>
                <td class="text-capitalize"><?php echo $user['gender']?></td>
                <td><?php echo $user['dob']?></td>
                <td><a href="UserController.php?a=getPicture&u_id=<?php echo $user['u_id']?>">picture</td>
                <?php
                    if($user['activated']==1){
                ?>
                        <td><a href="UserController.php?a=deactivate&u_id=<?php echo $user['u_id']?>">Deactivate</td>
                   <?php }
                    else
                    {?>
                        <td><a href="UserController.php?a=activate&u_id=<?php echo $user['u_id']?>">Activate</td>
                    <?php
                    }

                ?>
            </tr>
            <?php
            $i++;} ?>
            </tbody>
        </table>
    </div>
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

<script>
    $(function () {
        $('#data-table').DataTable( {
            "pagingType": "full_numbers"
        } );
    });
</script>

</body>
</html>