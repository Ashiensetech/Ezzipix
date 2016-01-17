<!DOCTYPE html>
<html class="frontend">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
    <?php include_once dirname(__FILE__) . '/../partial/head.php' ?>
    <script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
    <body>
        <?php include_once dirname(__FILE__) . '/../partial/menu.php'; ?>
        <section id="main" role="main">
            <section class="jumbotron jumbotron-bg7 nm upper-margin" data-stellar-background-ratio="0.4" style="min-height:486px;">
                <div class="overlay pattern pattern2"></div>
                <div class="container" style="padding-top:8%;padding-bottom:8%;" style="background: #444444;">
                    <div class="submitBtnDiv"  onclick="" id="saveBtnDiv" style="visibility:hidden;">
                        <div style="float:left">
                            <input class="btn btn-success btn-block" type="button" value="Upload Image" onclick="uploadPictures('instagram')" />
                        </div>
                        <div  style="float:left;padding:4px 0px 0px 6px;">
                            <img  id="loadingImg" src="<?php echo $this->baseUrl . 'html_template/dist/image/loading/spinner.gif'; ?>" style="display: none;"/>
                            <span id="processMsg" > </span>
                        </div>
                    </div>
                    <div class="row cstm-width-intagram" id="shuffle-grid">

                        <?php
                        $j = 1;
                        $i = 0;
                        if (!@$dataSubmitted) {
                            ?>
                            <div class="row shuffle clearfix cstm-padding-top-it">
                                <div class="col-md-11 col-md-offset-2 telegram-back site-border">
                                    <div class="form-group">
                                        <div class="col-md-12 cstm-head-profile">
                                            <p>Add Photo With Instagram</p> 
                                        </div>
                                        <div class="col-md-12 login-with-btn"> 
                                            <a class="social-btn" href="<?php echo @$link ?>">
                                                <button class="btn btn-block btn-instagram-m"><i style="left: 20px;" class="fa fa-instagram"></i> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Sign in With Instagram</button>

                                            </a>
                                        </div>
                                    </div>
                                </div>

                            </div>
                            <?php
                        } else {
                            foreach ($images as $img) {
                                ?>
                                <img style="" src=""/>
                                <div class="col-sm-3 shuffle" data-groups='["creative", "people"]'>

                                    <div class="panel no-border overflow-hidden photoParent">

                                        <div class="thumbnail nm">
                                            <div class="checkIconDiv">
                                                <a href="javascript:void(0)" class="btn btn-success checkIcon" style="display:none;"><i class="ico-check"></i></a>
                                            </div>


                                            <div class="media">

                                                <div class="indicator"><span class="spinner"></span></div>
                                                <div class="overlay">
                                                    <div class="toolbar">
                                                        <a href="<?php echo $img->images->standard_resolution->url; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                                        <a href="javascript:void(0)" url="<?php echo $img->images->standard_resolution->url; ?>" onclick="addPictureToSave('instagram', this)" class="btn btn-success"><i class="ico-plus"></i></a>
                                                    </div>
                                                </div>
                                                <img data-toggle="unveil" src="<?php echo $img->images->standard_resolution->url; ?>" data-src="<?php echo $img->images->standard_resolution->url; ?>" alt="Photo" width="100%" height="350px"/>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            <?php } ?>
                        <?php } ?>
                    </div>
                </div>
            </section>
            <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
        </section>
        <?php include_once dirname(__FILE__) . '/../partial/footer.php' ?>
        <?php include_once dirname(__FILE__) . '/../partial/core_script.php' ?>

        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?>"></script>
        <input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>

        <?php include_once dirname(__FILE__) . '/../partial/script/add_picture_script.php' ?>


    </body>
    <!--/ END Body -->
</html>