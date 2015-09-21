<!DOCTYPE html>
<!-- 
TEMPLATE NAME : Adminre - frontend
VERSION : 1.3.0
AUTHOR : JohnPozy
AUTHOR URL : http://themeforest.net/user/JohnPozy
EMAIL : pampersdry@gmail.com
LAST UPDATE: 2015/01/05

** A license must be purchased in order to legally use this template for your project **
** PLEASE SUPPORT ME. YOUR SUPPORT ENSURE THE CONTINUITY OF THIS PROJECT **
-->
<html class="frontend">
    <!-- START Head -->
    <?php include_once 'partial/head.php' ?>
    <!--/ END Head -->

    <!-- START Body -->
    <body>
        <!-- START Template Header -->
        <?php include_once 'partial/menu.php'; ?>
        <!--/ END Template Header -->

        <!-- START Template Main -->
        <section id="main" role="main">
            <!-- START jumbotron -->
            <section class="jumbotron jumbotron-bg7 nm" data-stellar-background-ratio="0.4" style="min-height:486px;">
                <!-- pattern + overlay -->
                <div class="overlay pattern pattern2"></div>
                <!--/ pattern + overlay -->
                <div class="container" style="padding-top:8%;padding-bottom:8%;">
                    <div class="row">
                        <div class="content" style="background: #444444;">
                            <table align="center" class="table table-responsive">
                                <?php /*<tr>
                                    <td>Action :</td>
                                    <td><a href="dashboard.php?r=logout">Logout</a></td>
                                </tr> */ ?>
                                <tr>
                                    <td>Full name :</td>
                                    <td><?php echo @$user['full_name'] ?></td>
                                </tr>
                                <tr>
                                    <td>Email :</td>
                                    <td><?php echo @$user['email'] ?></td>
                                </tr>
                                <tr>
                                    <td>Gender :</td>
                                    <td><?php echo @$user['gender'] ?></td>
                                </tr>
                                <?php /* ?>
                                <tr>
                                    <td>Add Service :</td>
                                    <td><a href="service.php?r=new">Add New Service</a></td>
                                </tr>
                                <?php if (@$services && @$services != NULL) { ?>
                                    <tr>
                                        <td>Added Service :</td>
                                        <td>
                                            <?php foreach ($services as $service) { ?>
                                                <?php if ($service['active'] == 1) { ?>
                                                    <div style="width: 100%; border-bottom: 1px solid #222; overflow: hidden; padding: 3px 5px; margin: 0 -5px;">
                                                        <p style="padding: 0; margin: 0; float: left; "><?php echo $service['name'] . '(' . $service['service_user_id'] . ')'; ?></p>

                                                        <div style="width: 70px; float: right; ">
                                                            <input class="btn btn-success btn-block"  type="button" value="Cancel" onclick="cancelService('<?php echo $service['spId']; ?>','<?php echo $service['service_user_id']; ?>',this)"/>
                                                        </div>
                                                    </div>
                                                <?php } ?>
                                            <?php } ?>
                                        </td>
                                    </tr>
                                <?php } */ ?>
                                <tr>
                                    <td></td>
                                    <td><a href="<?php echo $this->baseUrl . 'media.php?r=all'; ?>">Image Gallery</a></td>
                                </tr>
                                <tr>
                                    <td>&nbsp;</td>
                                    <td>
                                        <div id="msg"></div>
                                    </td>
                                </tr>
                            </table>
                        </div>
                    </div>
                </div>
            </section>
            <!--/ END jumbotron -->



            <!-- START To Top Scroller -->
            <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
            <!--/ END To Top Scroller -->
        </section>
        <!--/ END Template Main -->

        <!-- START Template Footer -->
        <?php include_once 'partial/footer.php' ?>
        <!-- End Template Footer -->
        <?php include_once 'partial/core_script.php' ?>

    </body>
    <!--/ END Body -->
    <script>
        function cancelService(serviceProviderId, userServiceId, elem) {

            $("#verification_code_msg").css({'display': 'none'});

            var url = BaseUrl + "service" + phpSuffix;

            $.ajax({
                url: url + "?r=deactiveUserService",
                method: "POST",
                data: {
                    "service_provider_id": serviceProviderId,
                    "service_user_id": userServiceId
                },
                success: function (data) {
                    var data = JSON.parse(data);
                    if (data.status) {
                        $(elem).parents("tr").first().hide();

                    }

                    $("#msg").html(data.msg);
                    $("#verification_code_msg").css({'display': ''});
                }
            });
        }
    </script>
</html>