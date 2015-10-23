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
                        <div class="col-md-6 col-md-offset-3">
                            <div class="content data-profile site-border">
                                <div class="form-group">
                                    <div class="col-md-12 cstm-head-profile">
                                        <p>PROFILE INFORMATION</p>
                                    </div>
                                </div>
                                <div class="form-group">
                                    <div class="col-md-6 cstm-label-profile">
                                        <label>Full name :</label>
                                    </div>
                                    <div class="col-md-6 cstm-p-profile padding-left-o">
                                        <p><?php echo @$user['full_name'] ?></p>
                                    </div>
                                </div>
                                <div class="form-group">
                                    <div class="col-md-6 cstm-label-profile">
                                        <label>Email :</label>
                                    </div>
                                    <div class="col-md-6 cstm-p-profile padding-left-o">
                                        <p><?php echo @$user['email'] ?></p>
                                    </div>
                                </div>
                                <div class="form-group">
                                    <div class="col-md-6 cstm-label-profile">
                                        <label>Gender :</label>
                                    </div>
                                    <div class="col-md-6 cstm-p-profile padding-left-o">
                                        <p><?php echo @$user['gender'] ?></p>
                                    </div>
                                </div>
                                <div class="form-group">
                                    <div class="col-md-6 cstm-image-profile">
                                        <a href="<?php echo $this->baseUrl . 'media.php?r=all'; ?>" class="btn btn-default btn-cstm">View Image Gallery</a>
                                    </div>
                                    <div class="col-md-6 cstm-image-profile">
                                        <a href="<?php echo $this->baseUrl . 'dashboard.php?r=updateAccount'; ?>" class="btn btn-default btn-cstm">Update Account</a>
                                    </div>
                                </div>
                                <table align="center" class="table table-responsive profile-table">
                                    <?php /* <tr>
                                      <td>Action :</td>
                                      <td><a href="dashboard.php?r=logout">Logout</a></td>
                                      </tr> */ ?>                        
                                </table>
                            </div>
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