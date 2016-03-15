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
        <div class="container" style="padding-top:8%;padding-bottom:8%;" style="background: #444444;">
            <div class="row">
                <div class="col-md-7 col-md-offset-2 telegram-back site-border">
                    <div class="form-group">
                        <div class="col-md-12 cstm-head-profile">
                            <?php
                                    $titleOfDiv = "";
                                    if(isset($_GET['app'])) {
                                        $appParam = $_GET['app'];
                                        if ($appParam == 't') {
                                            $titleOfDiv = "Telegram";
                                        } else if ($appParam == 'w') {
                                            $titleOfDiv = "WhatsApp";
                                        }
                                    }
                                ?>
                            <p><?php echo $titleOfDiv; ?></p>
                        </div>
                    </div>
                    <form id="addServiceForm" action="" onsubmit="return false;">
                        <table align="center" class="table table-responsive tele-table" style="padding: 15px;">
                            <tr id="verification_code_msg" style="display: none">
                                <td colspan="2">
                                    <div id='msg' style="color:red"></div>
                                </td>
                            </tr>
                            <tr>
<!--                                <td style="color:#414141; font-weight: 600;"></td>-->
                                <td >
                                    <?php
                                            $selectDisabled = (isset($_GET['app']))?"disabled='disabled'":"";
                                    ?>
                                    <select  name="service_provider_id" style="display: none" id="service_provider_id" onchange="whatsAppPhoneNumberConvention()" class="form-control" <?php echo $selectDisabled;?> >
                                        <?php

                                        $app = @$_GET['app'];
                                        $phonePlaceHolder = "Phone number";
                                        if ($app == 't') { ?>
                                            <option value="1" selected>Telegram</option>
                                        <?php } else if ($app == 'w') {
                                                $phonePlaceHolder = "Phone number without '+'";
                                        ?>
                                            <option value="2" selected>WhatsApp</option>
                                        <?php } else { ?>
                                            <option value="">Select a Service</option>
                                            <?php
                                            if (@$services) {
                                                foreach ($services as $service) {
                                                    if (!in_array($service['id'], ['3', '4', '5', '6', '7', '8'])) {
                                                        ?>
                                                        <option value="<?php echo $service['id'] ?>"><?php echo $service['name'] ?></option>
                                                        <?php
                                                    }
                                                }
                                            }
                                        }
                                        ?>
                                    </select>
                                </td>
                            </tr>
                            <tr>
<!--                                <td style="color:#414141; font-weight: 600;"></td>-->
                                <td><input  placeholder="<?php echo $phonePlaceHolder; ?>" type="service_user_id" id="service_user_id" class="form-control"/></td>
                            </tr>
                            <tr id="verification_code_tr" style="display: none">
<!--                                <td>Verification Code :</td>-->
                                <td>
                                    <input class="text-default" type="verification_code" id="verification_code"/>&nbsp;
                                    <input class="text-default" id="resendTokenBtn" type="button" onclick="beforeSendCode();" value="Resend Code"/>
                                </td>

                            </tr>
                            <tr id="verification_code_send">
<!--                                <td>&nbsp;</td>-->
                                <td>
                                    <input id="getVerifucationBtn" type="button" onclick="beforeSendCode();" value="Verify my number" class="btn btn-info btn-block btn-verify"/>
                                </td>
                            </tr>
                            <tr id="verification_code_submit" style="display: none">
<!--                                <td>&nbsp;</td>-->
                                <td>
                                    <button type="submit" class="btn btn-block btn-primary" onclick="addService();">
                                        <span class="semibold">Submit Code</span>
                                    </button>
                                </td>
                            </tr>

                        </table>
                    </form>
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
<div style="display: none" id="page_url" value="<?php echo htmlentities($_SERVER['PHP_SELF']); ?>"></div>

<script type="text/javascript">
    function whatsAppPhoneNumberConvention() {
        if ($("#service_provider_id option:selected").text() == "Whats App") {
            $("#service_user_id").attr("placeholder", "Phone number without '+' ");
        }

    }
    function disableAllInForm() {
        $('#addServiceForm').find("input,select").attr("disabled", "disabled");
    }
    function enableAllInform() {
        $('#addServiceForm').find("input").removeAttr("disabled", "disabled");
    }
    function sendCode() {
        $('#getVerifucationBtn').attr("disabled", "disabled");
        $("#verification_code_tr").css({'display': 'none'});
        $("#verification_code_msg").css({'display': 'none'});

        var url = $("#page_url").val();
        var service_provider_id = $("#service_provider_id").val();
        var service_user_id = $("#service_user_id").val();
        disableAllInForm();
        $.ajax({
            url: url + "?r=sendCode",
            method: "POST",
            data: {
                "service_provider_id": service_provider_id,
                "service_user_id": service_user_id
            },
            success: function (data) {
                data = JSON.parse(data);
                if (data.status) {
                    $("#verification_code_tr").css({'display': ''});
                    $("#verification_code_send").css({'display': 'none'});
                    $("#verification_code_submit").css({'display': ''});
                    $("#verification_code").removeAttr("disabled", "disabled");
                    $("#resendTokenBtn").removeAttr("disabled", "disabled");
                    $("#addServiceBtn").removeAttr("disabled", "disabled");
                }else{
                    enableAllInform();
                }
                $("#msg").html(data.message);
                $("#verification_code_msg").css({'display': ''});
            },
            error: function (request, status, error) {
                var serviceName = "";
                if(service_provider_id==1){
                    serviceName = "Telegram";
                }else{
                    serviceName = "Whats app";
                }
                $("#msg").html("Number not found in "+serviceName);
                $("#verification_code_msg").css({'display': ''});
            }
        });
    }
    function beforeSendCode() {


        $('#getVerifucationBtn').attr("disabled", "disabled");
        $("#verification_code_tr").css({'display': 'none'});
        $("#verification_code_msg").css({'display': 'none'});

        var url = $("#page_url").val();
        var service_provider_id = $("#service_provider_id").val();
        var service_user_id = $("#service_user_id").val();
        if(service_provider_id==1){
            sendCode();
            return;
        }


        disableAllInForm();
        $.ajax({
            url: url + "ContactSync.php",
            method: "POST",
            data: {
                "service_provider_id": service_provider_id,
                "service_user_id": service_user_id
            },
            success: function (data) {
                data = JSON.parse(data);
                if (data.status) {
                    $("#verification_code_tr").css({'display': ''});
                    $("#verification_code_send").css({'display': 'none'});
                    $("#verification_code_submit").css({'display': ''});
                    $("#verification_code").removeAttr("disabled", "disabled");
                    $("#resendTokenBtn").removeAttr("disabled", "disabled");
                    $("#addServiceBtn").removeAttr("disabled", "disabled");
                    sendCode();
                }else{
                    enableAllInform();
                }
                $("#msg").html(data.message);
                $("#verification_code_msg").css({'display': ''});
            }
        });
    }
    function addService() {
        $("#verification_code_msg").css({'display': 'none'});

        var url = $("#page_url").val();
        var service_provider_id = $("#service_provider_id").val();
        var service_user_id = $("#service_user_id").val();
        var token = $("#verification_code").val();

        $.ajax({
            url: url + "?r=submitCode",
            method: "POST",
            data: {
                "service_provider_id": service_provider_id,
                "service_user_id": service_user_id,
                "token": token
            },
            success: function (data) {
                var data = JSON.parse(data);
                if (data.status) {
                    window.location.href = 'dashboard' + phpSuffix + '?r=index';
                }

                $("#msg").html(data.message);
                $("#verification_code_msg").css({'display': ''});
            }
        });
    }
    $('#service_user_id').keypress(function (e) {
        if (e.which == 13) {
//            sendCode();
            beforeSendCode();
            return false;    //<---- Add this line
        }
    });
</script>
</html>