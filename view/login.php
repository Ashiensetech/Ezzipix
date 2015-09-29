<!DOCTYPE html>
<html class="frontend">
<?php include_once 'partial/head.php'; ?>
<body>
<?php include_once 'partial/menu.php'; ?>
<section id="main" role="main">
    <section class="page-header page-header-block nm" style="display: none;">
        <div class="pattern pattern9"></div>
        <div class="container pt15 pb15">
            <div class="page-header-section">
                <h4 class="title">Login</h4>
            </div>
            <div class="page-header-section">
                <div class="toolbar">
                    <ol class="breadcrumb breadcrumb-transparent nm">
                        <li><a href="javascript:void(0);">Pages</a></li>
                        <li class="active">Login</li>
                    </ol>
                </div>
            </div>
        </div>
    </section>
    <div class="clearfix"></div>
    <section class="section jumbotron jumbotron-bg7">
        <div class="overlay pattern pattern2"></div>
        <div class="container">
            <div class="row">
                <div class="col-md-12">
                    <div class="section-header text-center">
                        <h1 class="section-title font-alt mb25">Login to your Account</h1>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-md-5 col-md-offset-1 login-back">
                    <form class="panel no-border mb0 zborder" name="form-login" onsubmit="return doLogin()">
                        <div class="panel-body">
                            <div class="alert alert-warning" id="msg" style="display: none;">
                            </div>
                            <div class="form-group">
                                <div class="form-stack has-icon pull-left logi">
                                    <input id="email" name="username" type="text" class="form-control input-lg" placeholder="Email" data-parsley-errors-container="#error-container" data-parsley-error-message="Please fill in your username / email" data-parsley-required>
                                    <i class="ico-user2 form-control-icon"></i>
                                </div>
                                <div class="form-stack has-icon pull-left logi cstm-margin-top">
                                    <input id="password" name="password" type="password" class="form-control input-lg" placeholder="Password" data-parsley-errors-container="#error-container" data-parsley-error-message="Please fill in your password" data-parsley-required>
                                    <i class="ico-lock2 form-control-icon"></i>
                                </div>
                            </div>
                            <div id="error-container" class="mb15"></div>
                            <div class="form-group">
                                <div class="row">
                                    <!--<div class="col-xs-6">
                                        <div class="checkbox custom-checkbox">
                                            <input type="checkbox" name="remember" id="remember" value="1">
                                            <label for="remember">&nbsp;&nbsp;Remember me</label>
                                        </div>
                                    </div>-->
                                    <div class="col-xs-12 fp">
                                        <a href="<?php echo $this->baseUrl ?>login.php?r=forgetPassword">Lost
                                            password?</a>
                                    </div>
                                </div>
                            </div>
                            <div class="form-group nm">
                                <button type="submit" class="btn btn-block btn-primary">
                                    <span class="semibold">Login</span></button>
                            </div>
                        </div>
                    </form>
                </div>

                <div class="col-md-5 col-md-offset-1 login-back">
                    <div class="panel-body bgcolor-white min-height transparent-b">
                        <div id="error-container" class="mb15"></div>
                        <div class="join">
                            <h3>Join Ezeepix</h3>
                            <p><b>New Customer Offer:</b> 100 Free 4x6 prints<br/>
                            Transform everyday photos into books, calendars and gifts you’ll cherish forever.</p>
                        </div>
                        <div class="form-group nm">
                            <a href="<?php echo $this->baseUrl ?>signup.php">
                                <button type="submit" class="btn btn-block btn-success">
                                    <span class="semibold">Sign Up</span></button>
                            </a>
                        </div>
                    </div>
                </div>

            </div>
        </div>
    </section>
</section>
<?php include_once 'partial/footer.php' ?>
<?php include_once 'partial/core_script.php' ?>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>

<script>
    function doLogin() {
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

                if (resp.loginStatus) {
                    window.location.href = 'dashboard' + phpSuffix + '?r=index';
                }
            }
        });
        return false;
    }
</script>
</body>
</html>