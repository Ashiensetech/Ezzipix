<!DOCTYPE html>
<html class="frontend">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
<?php include_once 'partial/head.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
<body>
<?php include_once 'partial/menu.php'; ?>
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

                            <div class="panel no-border overflow-hidden">
                                <div class="thumbnail nm">
                                    <div class="media">
                                        <div class="indicator"><span class="spinner"></span></div>
                                        <div class="overlay">
                                            <div class="toolbar">
                                                <a href="<?php echo $img->images->standard_resolution->url; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                            </div>
                                        </div>
                                        <img data-toggle="unveil" src="<?php echo $img->images->standard_resolution->url; ?>" data-src="<?php echo $img->images->standard_resolution->url; ?>" alt="Photo" width="100%"/>
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
<?php include_once 'partial/footer.php' ?>
<?php include_once 'partial/core_script.php' ?>

<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?>"></script>
<input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
<script>

    var imgJobjArray = JSON.parse($("#allImg").val())
    var images = [];
    for (var key in imgJobjArray) {
        images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
    }
    console.log(images);
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


</script>
</body>
<!--/ END Body -->
</html>