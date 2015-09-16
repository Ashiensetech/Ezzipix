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
                if (!@$isDropBoxLogin) { ?>
                    <div class="row shuffle clearfix">
                        <div class="col-lg-12"><a href="<?= @$link ?>">Login with Drop Box</a></div>
                    </div>
                <?php } else {
                    foreach ($pictureList as $img) { ?>
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
                                                <a href="<?php echo  $img["auto"]; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                                <a href="javascript:void(0)" url="<?php echo $img["auto"]; ?>" onclick="addPictureToSave('instagram',this)" class="btn btn-success"><i class="ico-plus"></i></a>
                                            </div>
                                        </div>
                                        <img onerror="loadCount()" onload="loadCount()" data-toggle="unveil" src="<?php echo  $img["thumb"]; ?>" data-src="<?php echo  $img["thumb"]; ?>" alt="Photo" width="100%"/>
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
<!--<script type="text/javascript" src="--><?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?><!--"></script>-->
<input id="picListSize" type="hidden" value="<?php echo sizeof($pictureList); ?>" />
<script>
    var picLoadCount = 0;
    function loadCount(){
        var picturelistSize = parseInt($('#picListSize').val());
        picLoadCount++;

        console.log(picLoadCount+" "+picturelistSize);
        if(picLoadCount>=picturelistSize){
            triggerImageEffect();
        }
    }

    function triggerImageEffect(){
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
            autoHeight : true,
            pagination : true
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
        var $grid   = $('#shuffle-grid'),
            $filter = $('#shuffle-filter'),
            $sort   = $('#shuffle-sort'),
            $sizer  = $grid.find('shuffle-sizer');

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

<?php include_once dirname(__FILE__).'/../partial/script/add_picture_script.php' ?>

</body>
<!--/ END Body -->
</html>