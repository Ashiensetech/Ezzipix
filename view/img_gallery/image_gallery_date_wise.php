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
    <?php include_once dirname(__FILE__) . '/../partial/head.php' ?>
    <script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
    <!--/ END Head -->

    <!-- START Body -->
    <body>
        <!-- START Template Header -->
        <?php include_once dirname(__FILE__) . '/../partial/menu.php'; ?>

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
            <!--/ END page header -->

            <!-- START Portfolio Content -->
            <div class="my-photo-bg">

            </div>
            <section class="section bgcolor-white cstm-padding-top" style="margin-top:-280px;background: rgba(255,255,255,0.6) !important;">
                <div class="container">
                    <!-- START Section Header -->
                    <div class="row">
                        <div class="col-md-11 col-md-offset-5 my-photo-header photo-header no-padding">
                            <h3>My Photo Collection</h3>

                            <!--<div class="print">
                                <a href="javascript:void(0);" onclick="openPIO()">Print /</a>
                                <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                            </div>-->
                            <!--                            <ol class="breadcrumb breadcrumb-transparent nm print-div">
                                                            <li><a href="javascript:void(0);" onclick="openPIO()">Print</a></li>
                                                            <li class="active">
                                                                <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                                                            </li>
                                                        </ol>-->
                        </div>
                        <!--<div class="col-md-5">
                            <div class="toolbar">
                                <ol class="breadcrumb breadcrumb-transparent nm">
                                    <li><a href="javascript:void(0);" onclick="openPIO()">Print</a></li>
                                    <li class="active">
                                        <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                                    </li>
                                </ol>
                            </div>
                        </div>-->
                        <ul class="filter-tab">

                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew' ?>" class="<?php echo ($platform == 'all') ? 'active' : '' ?>">All</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=desktop' ?>" class="<?php echo ($platform == 'desktop') ? 'active' : '' ?>">My device</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=facebook' ?>" class="<?php echo ($platform == 'facebook') ? 'active' : '' ?>">Facebook</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=instagram' ?>" class="<?php echo ($platform == 'instagram') ? 'active' : '' ?>">Instagram</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=whatsapp' ?>" class="<?php echo ($platform == 'whatsapp') ? 'active' : '' ?>">Whats App</a></li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=dropbox' ?>" class="<?php echo ($platform == 'dropbox') ? 'active' : '' ?>">Dropbox</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=telegram' ?>" class="<?php echo ($platform == 'telegram') ? 'active' : '' ?>">Telegram</a>
                            </li>
                        </ul>
                    </div>
                    <!--/ END Section Header -->

                    <!-- START row -->
                    <div class="row" id="shuffle-grid">
                        <?php
                        $j = 1;
                        $i = 0;
                        $count = 0;
                        $date = $_GET['d'];

                        $page = ! empty( $_GET['page'] ) ? (int) $_GET['page'] : 1;
                        $total = count( $imgGallery ); //total items in array
                        $limit = 10; //per page
                        $totalPages = ceil( $total/ $limit ); //calculate total pages
                        $page = max($page, 1); //get 1 page when $_GET['page'] <= 0
                        $page = min($page, $totalPages); //get last page when $_GET['page'] > $totalPages
                        $offset = ($page - 1) * $limit;
                        if( $offset < 0 ) $offset = 0;
                        //  echo "<pre>";
                        //  var_dump($offset.$page.$limit.$total);
                        $partialImageGallery = [];
                        $up = $limit + $offset;
                        for($k=$offset;$k<$up;$k++)
                        {
                            array_push($partialImageGallery,$imgGallery[$k]);

                        }

                        foreach ($partialImageGallery as $img) {
                            if(empty($img))
                                continue;
                            ?>
                                <!--<img style="" src=""/>-->
                            <div class="col-sm-2 cstm-col-div-5 shuffle image-data" data-groups='["creative", "people"]'>

                                <div class="panel photo-fix no-border overflow-hidden">
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
    <?php $class = explode('/', $img['media_file_path'])[1] ?>
                                                    <a href="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                                    <a href="javascript:void(0);" data-value="<?php echo $img["id"] ?>" class="delete-img btn btn-default" title=""><i class="ico-trash"></i></a>
                                                </div>
                                            </div>

                                            <!--/ toolbar overlay -->
                                            <img style="max-width:100%;transform: scale(2);" onerror="loadCount('Error')" onload="loadCount('Load')" data-toggle="unveil" src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" data-src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" alt="Photo"/>
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
                    <?php
                    $link = 'photo.php?r=date&p=' . $platform . '&d=' .$date.'&page=%d';
                    $pagerContainer = '<div style="width: 300px;" class="pagination">';
                    if( $totalPages != 0 )
                    {
                        if( $page == 1 )
                        {
                            $pagerContainer .= '';
                        }
                        else
                        {
                            $pagerContainer .= sprintf( '<a href="' . $link . '" style="color: #c00"> &#171; prev page</a>', $page - 1 );
                        }
                        $pagerContainer .= ' <span> page <strong>' . $page . '</strong> from ' . $totalPages . '</span>';
                        if( $page == $totalPages )
                        {
                            $pagerContainer .= '';
                        }
                        else
                        {
                            $pagerContainer .= sprintf( '<a href="' . $link . '" style="color: #c00"> next page &#187; </a>', $page + 1 );
                        }
                    }
                    $pagerContainer .= '</div>';

                    echo $pagerContainer;?>
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
        <?php include_once dirname(__FILE__) . '/../partial/footer.php' ?>
        <!-- End Template Footer -->
<?php include_once dirname(__FILE__) . '/../partial/core_script.php' ?>
        <!--/ END Template Footer -->


        <!-- Plugins and page level script : optional -->
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
        <!--<script type="text/javascript" src="-->
<?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js';  ?><!--"></script>-->
        <!--/ Plugins and page level script : optional -->
        <!--/ END JAVASCRIPT SECTION -->
        <input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
        <input id="printPhoto" type="hidden" value='<?php echo (isset($_GET['print'])) ? $_GET['print'] : "false"; ?>'/>
        <script type="text/javascript">
                                                var imgJobjArray = JSON.parse($("#allImg").val());
                                                var images = [];
                                                for (var key in imgJobjArray) {
                                                    images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                                                }

                                                $(document).ready(function () {
                                                    if ($("#printPhoto").val() == "true") {
                                                        openPIO();
                                                    }

                                                });
                                                function openPIO() {
                                                    PIO.config({
                                                        url: "https://widget.print.io/widget/",
        //            recipeId: "d672c387-aa6a-480f-8908-782843978773" // Staging recipeId
                                                        recipeId: "11ebd314-7bbc-4c92-bafb-cad6dd6622f9" //live
                                                    });
                                                    PIO.open({
                                                        photosources: {
        //                local: {
        //                    enabled: false,
        //                    sortOrder: 1,
        //                    isInitiallyOpen: false
        //                },
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
                                                                sortOrder: 1,
                                                                enabled: true,
                                                                isInitiallyOpen: true,
                                                                // an icon for the tab, should be 48x48 px
                                                                iconUrl: BaseUrl + 'img/ezeepix-48.png'
                                                            }
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
                                                                    picture = {picture: images[i]};
                                                                    pictureArray.push(picture);
                                                                }
                                                                replyFn({
                                                                    id: "",
                                                                    page: 1,
                                                                    totalPages: 1,
                                                                    items: pictureArray
                                                                            /*items: [
                                                                             // pass in that there is a folder
                                                                             {id: "f1", isFolder: true, name: "fave pics"},
                                                                     
                                                                             // pass in three images
                                                                             {picture: "http://img.ffffound.com/static-data/assets/6/8fc3b482de5086f5f6bb64b75805b3413936c49a_m.png"},
                                                                             {picture: "http://img.ffffound.com/static-data/assets/6/c9c55336befdeae882e2d1794fc13888053e7f66_m.png"},
                                                                             {picture: "http://img.ffffound.com/static-data/assets/6/6dc8a64f665183d97a37e44cac72410531ec0978_m.png"}
                                                                             ]*/
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


                                                    // Shuffle
                                                    // ================================
                                                    var $grid = $('#shuffle-grid'),
                                                            $filter = $('#shuffle-filter'),
                                                            $sort = $('#shuffle-sort'),
                                                            $sizer = $grid.find('shuffle-sizer');
                                                    console.log("$sizer " + $sizer);
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
                                //alert("Image Deleted Successfully")
                            } else {
                                alert("Image Delete Failed")
                            }
                        }
                    });
                });
            });
        </script>

    </body>
    <!--/ END Body -->
</html>
