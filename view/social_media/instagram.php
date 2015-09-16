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
            <div class="clearfix"></div>
                <div class="submitBtnDiv"  onclick="" id="saveBtnDiv" style="visibility:hidden;">
                    <input class="btn btn-success btn-block" type="button" value="Upload Image" onclick="" />
                </div>
            <div class="clearfix"></div>
            <div class="row" id="shuffle-grid">

                <?php
                $j = 1;
                $i = 0;
                if (!@$dataSubmitted) { ?>
                    <div class="row shuffle clearfix">
                        <div class="col-lg-12"><a href="<?= @$link ?>">Login with Instagram</a></div>
                    </div>
                <?php } else {
                    foreach ($images as $img) { ?>
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
                                                <a href="javascript:void(0)" url="<?php echo $img->images->standard_resolution->url; ?>" onclick="addPictureToSave('instagram',this)" class="btn btn-success"><i class="ico-plus"></i></a>
                                            </div>
                                        </div>
                                        <img data-toggle="unveil" src="<?php echo $img->images->standard_resolution->url; ?>" data-src="<?php echo $img->images->standard_resolution->url; ?>" alt="Photo" width="100%"/>
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
<?php include_once dirname(__FILE__).'/../partial/footer.php' ?>
<?php include_once dirname(__FILE__).'/../partial/core_script.php' ?>

<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?>"></script>
<input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>

<?php include_once dirname(__FILE__).'/../partial/script/add_picture_script.php' ?>


</body>
<!--/ END Body -->
</html>