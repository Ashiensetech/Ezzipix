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
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
<?php include_once 'partial/head.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
<!--/ END Head -->

<!-- START Body -->
<body>
<!-- START Template Header -->
<?php include_once 'partial/menu.php'; ?>

<input type="hidden" id="imgSize" value="<?php echo sizeof($imgGallery); ?>" ?>
<script>
    var imgSize = JSON.parse(document.getElementById("imgSize").value);
    var picLoadCount = 0;
    var isTrigger = false;
    function loadCount(l) {
        picLoadCount++;
        console.log(l);
        console.log(picLoadCount + " " + imgSize);
        if (picLoadCount >= imgSize && !isTrigger) {
            console.log("triggerImageEffect Fired");
            triggerImageEffect();
        }

    }
</script>
<!-- START Template Header -->

<section id="main" role="main">
    <!-- START page header -->
    <section class="page-header page-header-block nm">
        <!-- pattern -->
        <div class="pattern pattern9"></div>
        <!--/ pattern -->
        <div class="container pt15 pb15">
            <div class="page-header-section">
            </div>
            <div class="page-header-section">
                <!-- Toolbar -->
                <div class="toolbar">
                    <ol class="breadcrumb breadcrumb-transparent nm">
                        <li><a href="javascript:void(0);" onclick="openPIO()">Print</a></li>
                        <li class="active">
                            <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                        </li>
                    </ol>
                </div>
                <!--/ Toolbar -->
            </div>
        </div>
    </section>
    <div class="clearfix"></div>
    <!--/ END page header -->

    <!-- START Portfolio Content -->
    <section class="section bgcolor-white">
        <div class="container">
            <!-- START Section Header -->
            <div class="row">
                <div class="col-md-12">

                </div>
            </div>
            <!--/ END Section Header -->

            <!-- START row -->
            <div class="row" id="shuffle-grid">
                <?php
                $j     = 1;
                $i     = 0;
                $count = 0;
                foreach ($imgGallery as $img) {

                    ?>
                    <img style="" src=""/>
                    <div class="image-data col-sm-3 shuffle" data-groups='["creative", "people"]'>

                        <div class="panel no-border overflow-hidden">
                            <!-- thumbnail -->
                            <div class="thumbnail nm">
                                <!-- media -->
                                <div class="media">
                                    <!-- indicator -->
                                    <div class="indicator"><span class="spinner"></span></div>
                                    <!--/ indicator -->
                                    <!-- toolbar overlay -->
                                    <div class="overlay">
                                        <div class="toolbar">
                                            <a href="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                            <a href="javascript:void(0);" data-value="<?php echo $img["id"] ?>" class="delete-img btn btn-default" title=""><i class="ico-trash"></i></a>
                                        </div>
                                    </div>
                                    <!--/ toolbar overlay -->
                                    <img onerror="loadCount('Error')" onload="loadCount('Load')" data-toggle="unveil" src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" data-src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" alt="Photo" width="100%"/>
                                </div>
                                <!--/ media -->
                            </div>
                            <!--/ thumbnail -->
                            <!-- Meta -->

                            <!--/ Meta -->
                        </div>
                    </div>
                <?php }


                ?>

            </div>
            <!--/ END row -->
        </div>
    </section>
    <!--/ END Portfolio Content -->

    <!-- START Featured Portfolio -->

    <!--/ END Featured Portfolio -->

    <!-- START To Top Scroller -->
    <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
    <!--/ END To Top Scroller -->
</section>
<!--/ END Template Main -->

<!-- START Template Footer -->
<!-- START Template Footer -->
<?php include_once 'partial/footer.php' ?>
<!-- End Template Footer -->
<?php include_once 'partial/core_script.php' ?>
<!--/ END Template Footer -->


<!-- Plugins and page level script : optional -->
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?>"></script>
<!--/ Plugins and page level script : optional -->
<!--/ END JAVASCRIPT SECTION -->
<input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
<script type="text/javascript">
    var imgJobjArray = JSON.parse($("#allImg").val());
    var images = [];
    for (var key in imgJobjArray) {
        images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
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

    function triggerImageEffect() {
        isTrigger = true;
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

<script type="text/javascript">
    jQuery(document).ready(function () {
        $(".delete-img").click(function () {
            var imgId = $(this).data("value");
            var img = $(this).parents(".image-data").first();

            $.ajax({
                url: "media.php?r=deleteImage",
                method: "POST",
                data: {
                    imageId: imgId
                },
                success: function (data) {
                    data = JSON.parse(data);
                    if (data.status) {
                        img.remove();
                    }
                }
            });
        });
    });
</script>

</body>
<!--/ END Body -->
</html>