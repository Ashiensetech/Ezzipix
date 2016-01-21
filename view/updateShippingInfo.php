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
            <section class="jumbotron jumbotron-bg7 nm upper-margin" data-stellar-background-ratio="0.4" style="min-height:486px;">
                <!-- pattern + overlay -->
                <div class="overlay pattern pattern2"></div>
                <!--/ pattern + overlay -->
                <div class="container" style="padding-top:8%;padding-bottom:8%;">
                    <div class="row">
                        <div class="col-md-6 col-md-offset-3">
                            <div class="content data-profile site-border">
                                <form role="form" onsubmit="return updateShipping();">
                                    <div class="form-group">
                                        <div class="col-md-12 cstm-head-profile cstm-tp-marg">
                                            <p>Shipping INFORMATION</p>
                                        </div>
                                    </div>
                                    <?php foreach ($user as $u) { ?>
                                        <div class="update-shipping-infor">
                                            <div class="form-group">
                                                <input titleName="First Name" type="text" readonly class="form-control input-lg mendatory" id="first-name" value=<?php echo @$u['first_name'] ?>>
                                            </div>
                                            <div class="form-group">
                                                <input titleName="Email" type="text" readonly class="form-control input-lg mendatory" id="email" value=<?php echo @$u['email'];
                                    break;
                                } ?>>
                                        </div>
<?php foreach ($shipping as $s) { ?>
                                            <div class="form-group clearfix clear">
                                                <input titleName="Address 1" type="text" value="<?php echo @$s['address1'] ?>" class="form-control input-lg mendatory" id="address1" placeholder="Address 1">
                                            </div>
                                            <div class="form-group clearfix clear">
                                                <input titleName="Address 2" type="text" value="<?php echo @$s['address2'] ?>" class="form-control input-lg" id="address2" placeholder="Address 2">
                                            </div>
                                            <div class="form-group clear clearfix">
                                                <input titleName="City" type="text" value="<?php echo @$s['city'] ?>" class="form-control input-lg mendatory" id="city" placeholder="City">
                                            </div>
                                            <div class="form-group clear clearfix">
                                                <input titleName="State" type="text" value="<?php echo @$s['state'] ?>" class="form-control input-lg mendatory" id="state" placeholder="State/Province">
                                            </div>
                                            <div class="form-group clear clearfix">
                                                <input titleName="postcode" type="text" value="<?php echo @$s['postcode'] ?>" class="form-control input-lg mendatory" id="postcode" placeholder="Post Code">
                                            </div>
                                            <div class="form-group clear clearfix">
                                                <input titleName="country" type="text" value="<?php echo @$s['country'] ?>" value="<?php echo @$s['address2'] ?>" class="form-control input-lg mendatory" id="country" placeholder="Country">
                                            </div>
                                            <div class="form-group clearfix clear">
                                                <input titleName="phone" type="text" value="<?php echo @$s['phone'] ?>" class="form-control input-lg mendatory" id="phone" placeholder="Shipping Phone">
                                            </div>
    <?php break;
} ?>
                                        <div class="form-group">
                                            <p class="help-block text-muted text-center">
                                                <span id="msg" style="background:#a4a4a4;color:#fff;"></span>
                                            </p>
                                            <button type="submit" class="btn btn-success btn-block btn-lg">Update Shipping</button>
                                        </div>
                                    </div>
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
        function updateShipping() {
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
                } else if (!$("#tnc").is(':checked') && $(this).attr('id') == 'tnc') {
                    errorMsg = $(this).attr("titleName");
                    $(this).focus();
                    valid = false;
                    return false;
                }
            });

            if (!valid) {
                $('#msg').html(errorMsg);
                return false;
            }

            var address1 = $('#address1').val();
            var address2 = $('#address2').val();
            var city = $('#city').val();
            var state = $('#state').val();
            var postcode = $('#postcode').val();
            var country = $('#country').val();
            var phone = $('#phone').val();


            $('#msg').html("");
            $.ajax({
                url: "?r=updateShipping",
                method: "POST",
                data: {
                    "address1": address1,
                    "address2": address2,
                    "city": city,
                    "state": state,
                    "postcode": postcode,
                    "country": country,
                    "phone": phone
                },
                success: function (data) {
                    var resp = jQuery.parseJSON(data);
                    $('#msg').html(resp.msg);
                    if (resp.regStatus) {
                        $('#msg').delay(1000).fadeOut(500, function () {
                            window.location.href = BaseUrl + 'shipping' + phpSuffix;
                        });
                    }


                }
            });
            return false;
        }
    </script>
</html>