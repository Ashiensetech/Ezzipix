<!DOCTYPE html>
<html class="frontend">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
<?php include_once dirname(__FILE__).'/../partial/head.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
<body>
<?php include_once dirname(__FILE__).'/../partial/menu.php'; ?>
<section id="main" role="main">
    <section class="page-header page-header-block nm">
        <div class="pattern pattern9"></div>
        <div class="container pt15 pb15">
            <div class="page-header-section">
            </div>
            <div class="page-header-section">
                <div class="toolbar">
                    <ol class="breadcrumb breadcrumb-transparent nm">

                    </ol>
                </div>
            </div>
        </div>
    </section>
    <div class="clearfix"></div>
    <section class="section bgcolor-white">
        <div class="container">

            <div class="row">
                <div class="col-md-12">
                    <div class="section-header text-center">
                        <h1 class="section-title font-alt mb25">Upload image from social site</h1>
                        <div class="row">
                            <div class="col-md-8 col-md-offset-2">
                                <div class="btn-group" id="shuffle-filter">
                                    <button id="fb_loginBtn" class="btn btn-default"  onclick="fbLogin()">Facebook</button>
                                    <button class="btn btn-default"  onclick="javascript:location.href='<?php echo $dropBoxLoginLink; ?>'" >Dropbox</button>
                                    <button class="btn btn-default" onclick="javascript:location.href='<?php echo $instagramLoginLink; ?>'">Instagram</button>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
            <div class="clearfix"></div>
            <div class="submitBtnDiv"  onclick="" id="saveBtnDiv" style="visibility:hidden;">
                <div style="float:left">
                    <input class="btn btn-success btn-block" type="button" value="Upload Image" onclick="uploadPictures('facebook')" />
                </div>
                    <div  style="float:left;padding:4px 0px 0px 6px;">
                        <img  id="loadingImg" src="<?php echo $this->baseUrl .'html_template/dist/image/loading/spinner.gif';?>" style="display: none;"/>
                        <span id="processMsg" > </span>
                </div>
            </div>
            <div class="clearfix"></div>
            <div class="row" id="shuffle-grid" style="display: none;">
                <div class="col-md-12">
                    <div class="section-header text-center">
                        <spa>Loading..</spa>
                        <div class="row">
                            <div class="col-md-8 col-md-offset-2">
                                <div class="btn-group" >
                                    <img src="<?php echo $this->baseUrl.'html_template/dist/image/loading/spinner@2x.gif'; ?>" ></div>
                            </div>
                        </div>
                    </div>
                </div>

            </div>

        </div>
    </section>
    <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
</section>
<?php include_once dirname(__FILE__).'/../partial/footer.php' ?>
<?php include_once dirname(__FILE__).'/../partial/core_script.php' ?>

<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
<!--<script type="text/javascript" src="--><?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?><!--"></script>-->
<?php include_once dirname(__FILE__).'/../partial/script/add_picture_script.php' ?>
<?php include_once dirname(__FILE__).'/../partial/script/facebook_script.php' ?>

</body>
<!--/ END Body -->
</html>