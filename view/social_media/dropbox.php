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
                        <li><a href="javascript:void(0);" onclick="openPIO()">Print</a></li>
                        <li class="active">
                            <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                        </li>
                    </ol>
                </div>
            </div>
        </div>
    </section>
    <div class="clearfix"></div>
    <section class="section bgcolor-white">
        <div class="container">
            <div class="submitBtnDiv"  onclick="" id="saveBtnDiv" style="visibility:hidden;">
                <input class="btn btn-success btn-block" type="button" value="Save Image Here" onclick="" />
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
                                <div class="panel-footer" style="padding:25px;border:0;">
                                    <h4 class="text-center mt0 ellipsis"></h4>

                                    <div class="text-center">
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
    var socialPhoto = {"instagram":[],"facebook":[]};
    var picLoadCount = 0 ;
    function loadCount(){
        var picturelistSize = parseInt($('#picListSize').val());
        picLoadCount++;

        console.log(picLoadCount+" "+picturelistSize);
        if(picLoadCount>=picturelistSize){
            triggerImageEffect();
        }
    }
    function addPictureToSave(SocialMediaId,elem){
        var url = $(elem).attr("url");
        var parent = $(elem).parents(".photoParent").first();
        var check = $(parent).find(".checkIcon").first();
        var styleStr = $(check).attr('style');
        var disPlayAction ="";
        if(styleStr!=""){
            var displyStr = styleStr.split(":")
            disPlayAction = displyStr[1].trim();
        }

        console.log(disPlayAction);
        if(disPlayAction=="none;"){
            socialPhoto[SocialMediaId].push(url);
            $(check).show();
        }else{
            var index = socialPhoto[SocialMediaId].indexOf(url);
            if(index>-1){
                socialPhoto[SocialMediaId].splice(index, 1);
            }
            $(check).hide();
        }
        console.log(socialPhoto);
        $(elem).parents(".photoParent").first().find("checkIcon").show();

        if(socialPhoto[SocialMediaId].length > 0){
            $('#saveBtnDiv').css("visibility","visible");
        }else{
            $('#saveBtnDiv').css("visibility","hidden");
        }


    }

    $(document).ready(function () {

        PIO.config({
            recipeId: "d672c387-aa6a-480f-8908-782843978773"
        });
    });
    function openPIO() {
        PIO.open({
            photosources: {

                local: {
                    enabled: false,
                    sortOrder: 1,
                    isInitiallyOpen: false
                },
                facebook: {
                    enabled: false,
                    sortOrder: 2,
                    isInitiallyOpen: false
                },
                instagram: {
                    enabled: false,
                    sortOrder: 2,
                    isInitiallyOpen: false
                },
                photobucket: {
                    enabled: false,
                    sortOrder: 3,
                    isInitiallyOpen: false
                },
                flickr: {
                    enabled: false,
                    sortOrder: 5,
                    isInitiallyOpen: false
                },
                google: {
                    enabled: false,
                    sortOrder: 6,
                    isInitiallyOpen: false
                },
                dropbox: {
                    enabled: false,
                    sortOrder: 7,
                    isInitiallyOpen: false
                }, custom: {
                    sortOrder: 8,
                    enabled: true,
                    isInitiallyOpen: true,
                    // an icon for the tab, should be 48x48 px
                    iconUrl: BaseUrl + 'img/icon.jpg'
                },
            }, fns: {

                // function that handles custom photo source data
                // request is an object like { page: 1, folder: "" }
                // replyFn is a callback that takes an object like
                /// { id:"", page: 1, totalPages: 1, items: [] }
                /// where items contains objects like
                /// { picture: "http://hi.com/hi.jpg" } for images
                /// { id: "", isFolder: true, name: ""} for folders
                onPhotoSourceReq: function (request, replyFn) {
                    // if the request is for the root
                    var picture = {};
                    var pictureArray = [];
                    //pictureArray.push({id: "f1", isFolder: true, name: "fave pics"}); // Create new folder
                    for (var i = 0; i < images.length; i++) {
                        picture = {picture: images[i]}
                        pictureArray.push(picture);
                    }
                    replyFn({
                        id: "",
                        page: 1,
                        totalPages: 1,
                        items: pictureArray
//                            items: [
//                                // pass in that there is a folder
//                                {id: "f1", isFolder: true, name: "fave pics"},
//
//                                // pass in three images
//                                {picture: "http://img.ffffound.com/static-data/assets/6/8fc3b482de5086f5f6bb64b75805b3413936c49a_m.png"},
//                                {picture: "http://img.ffffound.com/static-data/assets/6/c9c55336befdeae882e2d1794fc13888053e7f66_m.png"},
//                                {picture: "http://img.ffffound.com/static-data/assets/6/6dc8a64f665183d97a37e44cac72410531ec0978_m.png"}
//                            ]
                    });
                }
            }
        });
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
<style>
    .checkIconDiv{
        display: inline-block;
        position: absolute;
        top: 0px;
        right: 171px;
        z-index: 45;
    }
    .submitBtnDiv{
        visibility: hidden;
        float: left;
        padding: 0px 0px 13px 0px;
    }
</style>
</body>
<!--/ END Body -->
</html>