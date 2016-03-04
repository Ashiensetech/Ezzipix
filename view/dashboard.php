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
    <?php
    include_once 'partial/head.php';

    error_reporting(E_ALL);
    ini_set('display_errors', 1);
    ?>
    <!--/ END Head -->

    <!-- START Body -->
    <body>
        <!-- START Template Header -->
        <?php include_once 'partial/menu.php'; ?>
        <!--/ END Template Header -->

        <!-- START Template Main -->
        <section id="main" role="main">
            <!-- START jumbotron -->
            <section class="jumbotron jumbotron-bg7 nm upper-margin" data-stellar-background-ratio="0.4" style="min-height:486px;">
                <!-- pattern + overlay -->
                <div class="overlay pattern pattern2"></div>
                <!--/ pattern + overlay -->
                <div class="container" style="padding-top:8%;padding-bottom:8%;">
                    <div class="row">
                        <div class="col-md-10 col-md-offset-1">
                            <div class="content data-profile site-border">
                                <div class="form-group">
                                    <div class="col-md-12 cstm-head-profile">
                                        <p>PROFILE INFORMATION</p>
                                    </div>
                                </div>
                                <div class="col-md-12">
                                    <div class="col-md-6">
                                        <div class="form-group">
                                            <div class="col-md-6 cstm-label-profile">
                                                <label>Full name :</label>
                                            </div>
                                            <div class="col-md-6 cstm-p-profile padding-left-o">
                                                <p><?php echo @$user['first_name'] ?><?php echo @$user['last_name'] ?></p>
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
                                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                                <p><?php echo @$user['gender'] ?></p>
                                            </div>
                                        </div>
                                        <div class="form-group clearfix clear">
                                            <div class="col-md-6 cstm-label-profile">
                                                <label>DOB :</label>
                                            </div>
                                            <div class="col-md-6 cstm-p-profile padding-left-o">
                                                <?php $date = strtotime(@$user['dob']); ?>
                                                <p><?php echo date('d M, Y', $date); ?></p>
                                            </div>
                                        </div>
                                    </div>
                                    <!--                                <div class="form-group clearfix clear">
                                                                        <div class="col-md-12 cstm-label-profile alert alert-warning" id="msg" style="display: none">
                                                                        </div>
                                                                    </div>-->
                                    <?php
                                    $hasWhatsApp = 0;
                                    $hasTelegram = 0;
                                    ?>
                                    <div class="col-md-6 left-border">
                                        <?php
                                        foreach ($services as $service) {
                                            if ($service['spId'] > 2)
                                                continue;
                                            if ($service['spId'] == 1) {
                                                $hasTelegram = 1;
                                            }
                                            if ($service['spId'] == 2) {
                                                $hasWhatsApp = 1;
                                            }
                                            ?>
                                            <div class="col-md-12">
                                                <div class="col-md-6 cstm-label-profile label-marg-top">
                                                    <label><?php echo @$service['name'] ?></label>
                                                </div>
                                                <?php if ($service['active'] == 1) { ?>
                                                    <div class="col-md-6 cstm-image-profile cs-mr-bt">
                                                        <a href="" class="btn btn-default btn-block btn-cstm btn-activate" onclick="cancelService(<?php echo @$service['spId']; ?>,<?php echo @$service['service_user_id']; ?>);
                                                                        return false;"><?php echo @$service['service_user_id']; ?></a>
                                                    </div>
                                                <?php } else { ?>
                                                    <div class="col-md-6 cs-mr-bt">
                                                        <a href="" class="btn btn-danger btn-block btn-cstm btn-deactivate" onclick="activeService(<?php echo @$service['spId']; ?>,<?php echo @$service['service_user_id']; ?>);
                                                                        return false;"><?php echo @$service['service_user_id']; ?></a>
                                                    </div>
                                                <?php } ?>
                                            </div>
                                            <?php
                                        }
                                        if ($hasWhatsApp == 0) {
                                            ?>

                                            <div class="col-md-12">
                                                <div class="col-md-6 cstm-label-profile label-marg-top">
                                                </div>
                                                <div class="col-md-6 cs-mr-bt">
                                                    <a href="<?php echo $this->baseUrl . 'service.php?r=new&app=w'; ?>"
                                                       class="btn btn-danger btn-block btn-cstm btn-deactivate">WhatsApp</a>
                                                </div>
                                            </div>

                                            <?php
                                        }
                                        if ($hasTelegram == 0) {
                                            ?>

                                            <div class="col-md-12">
                                                <div class="col-md-6 cstm-label-profile label-marg-top">
                                                </div>
                                                <div class="col-md-6 cs-mr-bt">
                                                    <a href="<?php echo $this->baseUrl . 'service.php?r=new&app=t'; ?>"
                                                       class="btn btn-danger btn-block btn-cstm btn-deactivate">Telegram</a>
                                                </div>
                                            </div>
                                        <?php }
                                        ?>
                                        <span id="msg" class="alert alert-success" style="display: none"></span>
                                    </div>

                                </div>

                                <div class="col-md-12 foot-btn">
                                    <div class="form-group">
                                        <div class="col-md-4 no-margin-bottom text-center">
                                            <a href="<?php echo $this->baseUrl . 'media.php?r=allnew'; ?>" class="btn btn-success btn-cstm">View
                                                Image Gallery</a>
                                        </div>
                                        <div class="col-md-4 no-margin-bottom text-center">
                                            <a href="<?php echo $this->baseUrl . 'dashboard.php?r=updateAccount'; ?>" class="btn btn-success btn-cstm">Update
                                                Account</a>
                                        </div>
                                        <div class="col-md-4 no-margin-bottom text-center">
                                            <a href="<?php echo $this->baseUrl . 'dashboard.php?r=updatePassword'; ?>" class="btn btn-success btn-cstm">Change
                                                Password</a>
                                        </div>
                                    </div>
                                </div>
                                                            <!--<table align="center" class="table table-responsive profile-table">
                                <?php /* <tr>
                                  <td>Action :</td>
                                  <td><a href="dashboard.php?r=logout">Logout</a></td>
                                  </tr> */ ?>
                                                                    </table>-->
                            </div>
                            <!-- Confirmation Button Pop Up , Do not use the button class, only work with data toggle & data target -->
                            <button type="button" class="btn btn-primary btn-lg" data-toggle="modal" data-target="#myModal">
                                Launch demo modal
                            </button>


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
        <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
            <div class="modal-dialog cstm-diag-mod" role="document">
                <div class="modal-content cstm-mod-con">
                    <div class="modal-header cstm-head-mod">
                        <button type="button" class="close csm-mod-close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                        <h4 class="modal-title" id="myModalLabel"><i class="fa fa-exclamation-circle cstm-con-i"></i><p class="cstm-mod-tl">Confirmation</p></h4>
                    </div>
                    <div class="modal-body cstm-mod-body">
                        <p>Are you sure you want to deactivate your What's App account</p>
                        <button type="button" class="btn btn-success cstm-right-mrg" data-dismiss="modal">Yes</button>
                        <button type="button" class="btn btn-danger cstm-left-mrg">No</button>
                    </div>
                </div>
            </div>
        </div>

    </body>
    <!--/ END Body -->
    <script>
        function cancelService(serviceProviderId, userServiceId) {
            if (!confirm('Are you sure?')) {
                return false;
            }

            //   $("#verification_code_msg").css({'display': 'none'});
            $("#msg").show();
            $("#msg").html("");
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
                        //  $(elem).parents("tr").first().hide();

                    }
                    $("#msg").html(data.msg);
                    $('#msg').delay(1000).fadeOut(500, function () {
                        location.reload();
                    });
                }
            });
        }
        function activeService(serviceProviderId, userServiceId) {
            if (!confirm('Are you sure?')) {
                return false;
            }
            //   $("#verification_code_msg").css({'display': 'none'});
            $("#msg").show();
            $("#msg").html("");
            var url = BaseUrl + "service" + phpSuffix;

            $.ajax({
                url: url + "?r=activateUserService",
                method: "POST",
                data: {
                    "service_provider_id": serviceProviderId,
                    "service_user_id": userServiceId
                },
                success: function (data) {
                    var data = JSON.parse(data);
                    if (data.status) {
                        //  $(elem).parents("tr").first().hide();

                    }
                    // alert(data.msg);
                    // elem.find("#msg").html("service");

                    $("#msg").html(data.msg);
                    $('#msg').delay(1000).fadeOut(500, function () {
                        location.reload();
                    });
                    //   $("#verification_code_msg").css({'display': ''});
                }
            });
        }
    </script>
</html>