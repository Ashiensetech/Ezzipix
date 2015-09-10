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
                        <div class="col-md-8">
                            <h1 class="thin text-white font-alt mt0 mb5">Ezzipix</h1>
                            <p class="text-white mb15 fsize14">
                                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
                                tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
                                quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
                                consequat.
                            </p>
                            <h4 class="mt0"><a href="javascript:void(0);">Learn More...</a></h4>
                        </div>
                        <div class="col-md-4">
                            <form role="form" onsubmit="return signup();">
                                <div class="form-group">
                                    <input type="text" class="form-control input-lg mendatory" id="name" placeholder="Your full name">
                                </div>
                                <div class="form-group">
                                    <select   class="form-control mendatory" id="gender">
                                        <option value="">Select gender</option>
                                        <option value="female">Female</option>
                                        <option value="male">Male</option>
                                    </select>
                                </div>
                                <div class="form-group">
                                    <input type="text" class="form-control input-lg mendatory" id="email" placeholder="Your email">
                                </div>
                                <div class="form-group">
                                    <input type="password" id="password" class="form-control input-lg mendatory"  placeholder="Create a password">
                                    <span  id="msg" class="help-block text-muted"></span>
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

    </body>
    <!--/ END Body -->
    <script>
        function signup(){
            var valid = true;
            var errorMsg = "";
            $('#msg').html("");
            $('.mendatory').each(function(){
                if(valid && $(this).val() == ""){
                    if($(this).prop("tagName") == "SELECT"){
                        errorMsg = "Select "+$(this).attr("id");
                    }else{
                        errorMsg = $(this).attr("id")+" field required";
                    }

                    $(this).focus();
                    valid = false;
                    return;
                }
            });
            var re = /^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i;

            if($('#email').val()!="" && !re.test($('#email').val())){
                $('#email').focus();
                valid = false;
                errorMsg ='Email is not in valid format';
            }
            if($('#password').val()!="" && $('#password').val().length<6){
                $('#password').focus();
                valid = false;
                errorMsg ='At least 6 digit required';
            }
            if(!valid){
                $('#msg').html(errorMsg);
                return false;
            }

            var name = $('#name').val();
            var gender = $('#gender').val();

            var email = $('#email').val();
            var password = $('#password').val();


            $('#msg').html("");
            $.ajax({
                url: "?r=register",
                method: "POST",
                data: {
                    "name":name,
                    "gender":gender,
                    "email": email,
                    "password": password
                },
                success: function (data) {
                    var resp = jQuery.parseJSON(data);
                    $('#msg').html(resp.msg);
                    if(resp.regStatus){
                        $('#msg').delay(1000).fadeOut(500,function(){
                            window.location.href = BaseUrl+'login'+phpSuffix;
                        });
                    }


                }
            });
            return false;
        }
    </script>
</html>