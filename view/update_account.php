<!DOCTYPE html>
<html class="frontend">
<?php include_once 'partial/head.php' ?>
<body>
<?php include_once 'partial/menu.php' ?>
<section id="main" role="main">
    <section class="jumbotron jumbotron-bg7 nm" data-stellar-background-ratio="0.4" style="min-height:486px;">
        <div class="overlay pattern pattern2"></div>
        <div class="container" style="padding-top:8%;padding-bottom:8%;">

            <div class="row">
                <div class="col-md-6 col-md-offset-3">
                    <div class="content data-profile site-border">
                        <form method="post" name="form-login" action="<?php echo $this->baseUrl ?>dashboard.php?r=updateAccount">
                            <div class="form-group">
                                <div class="col-md-12 cstm-head-profile">
                                    <p class="text-uppercase">Update Account</p>
                                </div>
                            </div>
                            <div class="panel-body">
                                <?php $message = @$_GET['message']; ?>
                                <?php if ($message) { ?>
                                    <div class="alert alert-danger">
                                        <?php echo $message; ?>
                                    </div>
                                <?php } ?>

                                <div class="form-group">
                                    <div class="form-stack has-icon pull-left old">
                                        <input name="full_name" type="text" value="<?php echo ($user) ? $user['full_name'] : ''; ?>"
                                               class="form-control input-lg"
                                               placeholder="Full Name" data-parsley-errors-container="#error-container"
                                               data-parsley-error-message="Please fill in your Full Name"
                                               data-parsley-required="">
                                    </div>
                                </div>

                                <div class="form-group">
                                    <div class="form-stack has-icon pull-left new">
                                        <select name="gender" class="form-control input-lg">
                                            <option value="">Select Gender</option>
                                            <option value="male" <?php echo (strtolower(@$user['gender']) == 'male') ? 'selected' : ''; ?>>
                                                Male
                                            </option>
                                            <option value="female" <?php echo (strtolower(@$user['gender']) == 'female') ? 'selected' : ''; ?>>
                                                Female
                                            </option>
                                        </select>
                                    </div>
                                </div>

                                <div class="form-group nm">
                                    <div class="col-md-4 col-md-offset-4 no-padding cstm-margin-top update-pass">
                                        <button type="submit" class="btn btn-block btn-cstm-green">
                                            Update Account
                                        </button>
                                    </div>
                                </div>
                            </div>
                        </form>
                    </div>
                </div>
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