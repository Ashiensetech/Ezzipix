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
    <?php include_once 'partial/head.php'; ?>
    <!--/ END Head -->

    <!-- START Body -->
    <body>
        <!-- START Template Header -->
        <?php include_once 'partial/menu.php'; ?>
        <!--/ END Template Header -->

        <!-- START Template Main -->
        <section id="main" role="main">
            <!-- START page header -->
            <section class="page-header page-header-block nm" style="display: none;">
                <!-- pattern -->
                <div class="pattern pattern9"></div>
                <!--/ pattern -->
                <div class="container pt15 pb15">
                    <div class="page-header-section">
                        <h4 class="title">Login</h4>
                    </div>
                    <div class="page-header-section">
                        <!-- Toolbar -->
                        <div class="toolbar">
                            <ol class="breadcrumb breadcrumb-transparent nm">
                                <li><a href="javascript:void(0);">Pages</a></li>
                                <li class="active">Login</li>
                            </ol>
                        </div>
                        <!--/ Toolbar -->
                    </div>
                </div>
            </section>
            <div class="clearfix"></div>
            <!--/ END page header -->

            <!-- START Register Content -->
            <section class="section jumbotron jumbotron-bg7">
                <div class="overlay pattern pattern2"></div>
                <div class="container">
                    <!-- START Section Header -->
                    <div class="row">
                        <div class="col-md-12">
                            <div class="section-header text-center">
                                <h1 class="section-title font-alt mb25">Login to your Account</h1>
                            </div>
                        </div>
                    </div>
                    <!--/ END Section Header -->

                    <!-- START Row -->
                    <div class="row">
                        <div class="col-md-6 col-md-offset-3">

                            <!-- Login form -->
                            <form class="panel no-border mb0" name="form-login" onsubmit="return doLogin()">
                                <div class="panel-body">
                                    <!-- Alert message -->
                                    <div class="alert alert-warning" id="msg" style="display: none;">

                                    </div>

                                    <div class="form-group">
                                        <div class="form-stack has-icon pull-left">
                                            <input id="email" name="username" type="text" class="form-control input-lg" placeholder="Email" data-parsley-errors-container="#error-container" data-parsley-error-message="Please fill in your username / email" data-parsley-required>
                                            <i class="ico-user2 form-control-icon"></i>
                                        </div>
                                        <div class="form-stack has-icon pull-left">
                                            <input id="password" name="password" type="password" class="form-control input-lg" placeholder="Password" data-parsley-errors-container="#error-container" data-parsley-error-message="Please fill in your password" data-parsley-required>
                                            <i class="ico-lock2 form-control-icon"></i>
                                        </div>
                                    </div>

                                    <!-- Error container -->
                                    <div id="error-container"class="mb15"></div>
                                    <!--/ Error container -->

<!--                                    <div class="form-group">-->
<!--                                        <div class="row">-->
<!--                                            <div class="col-xs-6">-->
<!--                                                <div class="checkbox custom-checkbox">  -->
<!--                                                    <input type="checkbox" name="remember" id="remember" value="1">  -->
<!--                                                    <label for="remember">&nbsp;&nbsp;Remember me</label>   -->
<!--                                                </div>-->
<!--                                            </div>-->
<!--                                            <div class="col-xs-6 text-right">-->
<!--                                                <a href="javascript:void(0);">Lost password?</a>-->
<!--                                            </div>-->
<!--                                        </div>-->
<!--                                    </div>-->
                                    <div class="form-group nm">
                                        <button type="submit" class="btn btn-block btn-primary"><span class="semibold">Login</span></button>
                                    </div>
                                </div>
                            </form>
                            <!-- Login form -->
                        </div>
                    </div>
                    <!--/ END Row -->
                </div>
            </section>
            <!--/ END Register Content -->

            <!-- START To Top Scroller -->

            <!--/ END To Top Scroller -->
        </section>
        <!--/ END Template Main -->

        <!-- START Template Footer -->
        <?php include_once 'partial/footer.php' ?>
        <!-- End Template Footer -->
        <?php include_once 'partial/core_script.php' ?>

        <!-- Plugins and page level script : optional -->
        <script type="text/javascript" src="<?php echo $this->baseUrl.'html_template/dist/plugins/smoothscroll/js/smoothscroll.js';?>"></script>


        <script>
            function doLogin(){
                var email = $('#email').val();
                var password = $('#password').val();
                $('#msg').html("");
                $.ajax({
                    url: "?r=authinticate",
                    method: "POST",
                    data: {"email": email, "password": password},
                    success: function (data) {
                        var resp = jQuery.parseJSON(data);
                        $('#msg').html(resp.msg);
                        $('#msg').fadeIn(500);

                        if(resp.loginStatus){
                            window.location.href = 'dashboard'+phpSuffix+'?r=index';
                        }
                    }
                });
                return false;
            }
        </script>
        <!--/ Plugins and page level script : optional -->
        <!--/ END JAVASCRIPT SECTION -->
    </body>
    <!--/ END Body -->
</html>