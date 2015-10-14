<!DOCTYPE html>
<html class="frontend">
<?php include_once 'partial/head.php' ?>
<body>
<?php include_once 'partial/menu.php' ?>
<section id="main" role="main">
    <section class="bgcolor-white">
        <div class="row">
            <div class="col-md-6 col-md-offset-3">
                <?php if (!$sendMail) { ?>
                    <form method="post" class="panel no-border mb0" name="form-login" action="<?php echo $this->baseUrl ?>login.php?r=forgetPassword">
                        <div class="panel-body">
                            <?php if (@$message) { ?>
                                <div class="alert alert-danger">
                                    <?php echo $message; ?>
                                </div>
                            <?php } else { ?>
                                <div class="alert alert-warning">
                                    <span class="semibold">Note :</span>&nbsp;&nbsp;Just put Email and hit Send Request
                                    button.
                                </div>
                            <?php } ?>
                            <div class="form-group">
                                <div class="form-stack has-icon pull-left">
                                    <input name="email" type="text" class="form-control input-lg" placeholder="Email Address" data-parsley-errors-container="#error-container" data-parsley-error-message="Please fill in your Email" data-parsley-required="">
                                    <i class="ico-user2 form-control-icon"></i>
                                </div>
                            </div>

                            <!-- Error container -->
                            <div id="error-container" class="mb15"></div>
                            <!--/ Error container -->

                            <div class="form-group nm">
                                <div class="col-md-3">
                                    <button type="submit" class="btn btn-block btn-primary">
                                        <span class="semibold">Send Request</span>
                                    </button>
                                </div>
                            </div>
                        </div>
                    </form>
                <?php } else { ?>
                    <div class="panel-body">
                        <div class="alert alert-success">
                            Email sent successfully, check your mail inbox !
                        </div>
                    </div>
                <?php } ?>
            </div>
        </div>
    </section>
    <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
</section>
<?php include_once 'partial/footer.php' ?>
<?php include_once 'partial/core_script.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
<script type="text/javascript">

    var imgJobjArray = JSON.parse($("#allImg").val())
    var images = [];
    for (var key in imgJobjArray) {
        images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
    }
    $(document).ready(function () {


    });
    function openPIO() {
        PIO.config({
            recipeId: "d672c387-aa6a-480f-8908-782843978773"
        });
        PIO.open();
    }


</script>
<!-- Plugins and page level script : optional -->
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/greensock.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/layerslider.transitions.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/layerslider.kreaturamedia.jquery.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/home/home-v1.js'; ?>"></script>
<!--/ Plugins and page level script : optional -->
<!--/ END JAVASCRIPT SECTION -->

<script type="text/javascript">
    jQuery(document).ready(function () {

    });
</script>
</body>
</html>