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
        <div class="container upper-margin" style="padding-top:8%;padding-bottom:8%;">
            <div class="row">
                <div class="col-md-5  site-border custom-new-welcome">
                    <h1 class="thin text-white font-alt mt0 mb5">Ezeepix</h1>

                    <p class="text-white mb15 fsize14 cstm-wlcm-p">
                        Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
                        tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
                        quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
                        consequat.
                    </p>
                    <br>

                    <button type="button" class="btn btn-success btn-lg">Learn More</button>
                </div>
                <div class="col-md-2"></div>
                <div class="col-md-5 cstm-background site-border" style="padding:25px !important;">
                <form role="form" onsubmit="return signup();">
                        <div class="form-group">
                            <input titleName="First Name" type="text" class="form-control input-lg mendatory" id="first-name" placeholder="Your first name">
                        </div>
                        <div class="form-group">
                            <input titleName="Last name" type="text" class="form-control input-lg mendatory" id="last-name" placeholder="Your last name">
                        </div>
                        <div class="form-group">
                            <select titleName="Gender" name="Gender" class="form-control mendatory" id="gender">
                                <option value="">Select gender</option>
                                <option value="female">Female</option>
                                <option value="male">Male</option>
                            </select>
                        </div>
                        <div class="form-group">
                            <input titleName="Date of birth" type="text" class="form-control input-lg" id="dob" placeholder="Date of birth" autocomplete="off" readonly="readonly" style="display: none;">
                            <label style="color: #777">Date of birth</label>
                            <div id="dateOfBirth">
                            </div>
                        </div>
                        <div class="form-group">
                            <input titleName="Email" type="text" class="form-control input-lg mendatory" id="email" placeholder="Your email">
                        </div>

                        <div class="form-group">
                            <input titleName="Password" type="password" id="password" class="form-control input-lg mendatory" placeholder="Create a password" autocomplete="off" >
                        </div>
                        <div class="clear clearfix">
                            <input value="1" type="checkbox" id="tnc" class="mendatory" name="Accept terms and condition">
                            <span style="color: #777">Accept terms and condition</span>
                            <p class="help-block text-muted text-center">
                                <span id="msg" style="background:#a4a4a4;color:#fff;"></span>
                            </p>
                        </div>
                        <button type="submit" class="btn btn-success btn-block btn-lg">Signup Now</button>
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

<link rel="stylesheet" href="<?php echo $this->baseUrl.'html_template/dist/stylesheet/jquery-ui-smoothness.css';?>" />
<!--<script src="//code.jquery.com/jquery-1.10.2.js"></script>-->
<link rel="stylesheet" href="<?php echo $this->baseUrl.'html_template/dist/stylesheet/jquery-ui.js';?>" />
<script src="//code.jquery.com/ui/1.11.4/jquery-ui.js"></script>
<link rel="stylesheet" href="/resources/demos/style.css" />

<script src="<?php echo $this->baseUrl.'html_template/dist/javascript/dob_picker/jquery-birthday-picker.min.js';?>"></script>

<script>
    $(document).ready(function() {
        $("#dob").datepicker({
            dateFormat: "dd-mm-yy",
            autoSize: true
        });

        $("#dateOfBirth").birthdayPicker({
            "maxAge": 100,
            "sizeClass": "span4"

        });
        $("#dateOfBirth").find(".birthMonth").addClass("mendatory").attr("titleName","Month");
        $("#dateOfBirth").find(".birthDate").addClass("mendatory").attr("titleName","Day");
        $("#dateOfBirth").find(".birthYear").addClass("mendatory").attr("titleName","Year");

    });


</script>
<style>
    .birthMonth{
        width: 30%;
        margin-right: 5px;
    }
    .birthDate{
        width: 30%;
        margin-right: 5px;
    }
    .birthYear{
        width: 37%;
    }
</style>

</body>
<!--/ END Body -->
<script>
    function dobValidation(){
        var birthMonth = $("#dateOfBirth").find(".birthMonth").first().val();
        var birthDate = $("#dateOfBirth").find(".birthDate").first().val();
        var birthYear = $("#dateOfBirth").find(".birthYear").first().val();

        var errorMsg = "";
        if(birthMonth=="0"){
            $("#dateOfBirth").find(".birthMonth").first().focus();
            errorMsg = "Month is not selected";
        }else if(birthDate=="0"){
            $("#dateOfBirth").find(".birthDate").first().focus();
            errorMsg = "Date is not selected";
        }else if(birthYear=="0"){
            $("#dateOfBirth").find(".birthYear").first().focus();
            errorMsg = "Year is not selected";
        }

        return errorMsg;
    }
    function getDob(){
        var birthMonth = $("#dateOfBirth").find(".birthMonth").first().val();
        var birthDate = $("#dateOfBirth").find(".birthDate").first().val();
        var birthYear = $("#dateOfBirth").find(".birthYear").first().val();



        return birthYear+"-"+birthMonth+"-"+birthDate+"-";
    }
    function signup() {

        var valid = true;
        var errorMsg = "";
        $('#msg').html("");
        $('.mendatory').each(function () {
            if ((valid && $(this).val() == "") || ($(this).prop("tagName") == "SELECT" && $(this).val()==0)) {
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

        if(valid){
           var tempErrMsg =  dobValidation();
            if(tempErrMsg!=""){
                errorMsg =  tempErrMsg;
                valid = false;
            }
        }

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
        if (!valid) {
            $('#msg').html(errorMsg);
            return false;
        }

        var firstName = $('#first-name').val();
        var lastName = $('#last-name').val();
        var gender = $('#gender').val();
        var email = $('#email').val();
        var dob =getDob();// $('#dob').val();
        var password = $('#password').val();


        $('#msg').html("");
        $.ajax({
            url: "?r=register",
            method: "POST",
            data: {
                "first_name": firstName,
                "last_name": lastName,
                "gender": gender,
                "email": email,
                "password": password,
                "dob":dob
            },
            success: function (data) {
                var resp = jQuery.parseJSON(data);
                $('#msg').html(resp.msg);
                if (resp.regStatus) {
                    $('#msg').delay(1000).fadeOut(500, function () {
                        window.location.href = BaseUrl + 'login' + phpSuffix;
                    });
                }


            }
        });
        return false;
    }
</script>
</html>