<!DOCTYPE html>
<html class="frontend">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
    <?php include_once dirname(__FILE__) . '/../partial/head.php' ?>
    <script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
    <body>
        <?php include_once dirname(__FILE__) . '/../partial/menu.php'; ?>
        <section id="main" role="main">
            <!-- START jumbotron -->
            <section class="jumbotron jumbotron-bg7 nm" data-stellar-background-ratio="0.4" style="min-height:486px;">
                <!-- pattern + overlay -->
                <div class="overlay pattern pattern2"></div>
                <!--/ pattern + overlay -->
                <div class="container" style="padding-top:8%;padding-bottom:8%;" style="background: #444444;">
                    <div class="clearfix"></div>
                    <div class="submitBtnDiv"  onclick="" id="saveBtnDiv" style="visibility:hidden;">
                        <div style="float:left">
                            <input class="btn btn-success btn-block" type="button" value="Upload Image" onclick="uploadPictures('dropbox')" />
                        </div>
                        <div  style="float:left;padding:4px 0px 0px 6px;">
                            <img  id="loadingImg" src="<?php echo $this->baseUrl . 'html_template/dist/image/loading/spinner.gif'; ?>" style="display: none;"/>
                            <span id="processMsg" > </span>
                        </div>
                    </div>
                    <div class="clearfix"></div>
                    <div class="row" id="shuffle-grid">

                        <?php
                        $j = 1;
                        $i = 0;
                        if (!@$isDropBoxLogin) {
                            ?>
                            <div class="row shuffle clearfix">
                                <div class="col-md-6 col-md-offset-3 telegram-back site-border">
                                    <div class="form-group">
                                        <div class="col-md-12 cstm-head-profile">
                                            <p>Add Photo With Dropbox</p> 
                                        </div>
                                        <div class="col-md-12 login-with-btn cstm-right-i"> 
                                            <a href="<?= @$link ?>">
                                                <button class="btn btn-block btn-dropbox-m">| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Sign in With Dropbox</button>
                                                <i class="fa fa-instagram"></i>
                                            </a>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <?php
                        } else {
                            foreach ($pictureList as $img) {
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
                                                        <a href="<?php echo $img["auto"]; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                                        <a href="javascript:void(0)" url="<?php echo $img["auto"]; ?>" onclick="addPictureToSave('dropbox', this)" class="btn btn-success"><i class="ico-plus"></i></a>
                                                    </div>
                                                </div>
                                                <img onerror="loadCount()" onload="loadCount()" data-toggle="unveil" src="<?php echo $img["thumb"]; ?>" data-src="<?php echo $img["thumb"]; ?>" alt="Photo" width="100%" height="350px"/>
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
        <!--<script type="text/javascript" src="--><?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js';    ?><!--"></script>-->
        <input id="picListSize" type="hidden" value="<?php echo sizeof($pictureList); ?>" />
        <script>
                                                    var picLoadCount = 0;
                                                    function loadCount() {
                                                        var picturelistSize = parseInt($('#picListSize').val());
                                                        picLoadCount++;

                                                        console.log(picLoadCount + " " + picturelistSize);
                                                        if (picLoadCount >= picturelistSize) {
                                                            triggerImageEffect();
                                                        }
                                                    }

                                                    function triggerImageEffect() {
                                                        $('#shuffle-grid').magnificPopup({
                                                            delegate: '.magnific',
                                                            type: 'image',
                                                            gallery: {
                                                                enabled: true
                                                            }
                                                        });

                                                        // Carousel
                                                        // ================================
                                                        $('#lovely-client').owlCarousel({
                                                            autoPlay: true,
                                                            autoHeight: true,
                                                            pagination: true
                                                        });

                                                        // Owl carousel
                                                        // ================================
                                                        $('#gallery-post').owlCarousel({
                                                            lazyLoad: true,
                                                            slideSpeed: 300,
                                                            paginationSpeed: 400,
                                                            singleItem: true,
                                                            autoPlay: true,
                                                            stopOnHover: true,
                                                            navigation: true,
                                                            pagination: false
                                                        });

                                                        // Shuffle
                                                        // ================================
                                                        var $grid = $('#shuffle-grid'),
                                                                $filter = $('#shuffle-filter'),
                                                                $sort = $('#shuffle-sort'),
                                                                $sizer = $grid.find('shuffle-sizer');

                                                        // instatiate shuffle
                                                        $grid.shuffle({
                                                            itemSelector: '.shuffle',
                                                            sizer: $sizer
                                                        });

                                                        // Filter options
                                                        $filter.on('click', '.btn', function () {
                                                            var $this = $(this),
                                                                    isActive = $this.hasClass('active'),
                                                                    group = isActive ? 'all' : $this.data('group');

                                                            // Hide current label, show current label in title
                                                            if (!isActive) {
                                                                $('#shuffle-filter .active').removeClass('active');
                                                            }

                                                            $this.toggleClass('active');

                                                            // Filter elements
                                                            $grid.shuffle('shuffle', group);
                                                        });

                                                        // Sorting options
                                                        $sort.on('change', function () {
                                                            var sort = this.value,
                                                                    opts = {};

                                                            // We're given the element wrapped in jQuery
                                                            if (sort === 'date-created') {
                                                                opts = {
                                                                    reverse: true,
                                                                    by: function ($el) {
                                                                        return $el.data('date-created');
                                                                    }
                                                                };
                                                            } else if (sort === 'title') {
                                                                opts = {
                                                                    by: function ($el) {
                                                                        return $el.data('title').toLowerCase();
                                                                    }
                                                                };
                                                            }

                                                            // Filter elements
                                                            $grid.shuffle('sort', opts);
                                                        });

                                                    }

        </script>

        <?php include_once dirname(__FILE__) . '/../partial/script/add_picture_script.php' ?>

    </body>
    <!--/ END Body -->
</html>