<!DOCTYPE html>
<html class="frontend">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
<?php include_once 'partial/head.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
<script src="js/jquery-1.11.0.min.js"></script>
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
            <!--<input type="button" onclick="fbLogin()" value="Initiate"/>-->
            <div class="row" id="shuffle-grid">

                <div class="row shuffle clearfix">
                    <div class="col-lg-12"><a href="javascript:void(0);" id="linker" onclick="fbLogin()">Login with Facebook</a></div>
                </div>

                <div id="imgHolder" class="row shuffle clearfix"></div>
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
<!--<script type="text/javascript" src="--><?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?><!--"></script>-->
<input id="allImg" type="hidden" value='<?php //echo $allImg; ?>'/>
<script>
    var socialPhoto = {"instagram": [], "facebook": []}
    function addPictureToSave(SocialMediaId, elem) {
        var url = $(elem).attr("url");
        var parent = $(elem).parents(".photoParent").first();
        var check = $(parent).find(".checkIcon").first();
        var styleStr = $(check).attr('style');
        var disPlayAction = "";
        if (styleStr != "") {
            var displyStr = styleStr.split(":")
            disPlayAction = displyStr[1].trim();
        }

        console.log(disPlayAction);
        if (disPlayAction == "none;") {
            socialPhoto["instagram"].push(url);
            $(check).show();
        } else {
            var index = socialPhoto["instagram"].indexOf(url);
            if (index > -1) {
                socialPhoto["instagram"].splice(index, 1);
            }
            $(check).hide();
        }
        console.log(socialPhoto);
        $(elem).parents(".photoParent").first().find("checkIcon").show();

    }
    var imgJobjArray = [];//JSON.parse($("#allImg").val())
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


</script>
<style>
    .checkIconDiv {
        display: inline-block;
        position: absolute;
        top: 0px;
        right: 171px;
        z-index: 45;
    }
</style>

<script>
    var images = [];
    var picturelistSize=0;
    var picLoadCount = 0;
    window.fbAsyncInit = function () {
        FB.init({
            appId: '463781567135228',
            xfbml: true,
            version: 'v2.4'
        });
    };

    (function (d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {
            return;
        }
        js = d.createElement(s);
        js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));

    function opacityFreeMe(elem){
        $(elem).css("opacity","1");
    }
    function fbLogin() {
        //  FB.login(function(){}, {scope: 'publish_actions'});
        FB.getLoginStatus(function (response) {
            if (response.status === 'connected') {
                //console.log('Logged in.');
                if (response.authResponse) {
                    //console.log(response.authResponse.accessToken);
                    getData(response.authResponse.accessToken);
                }

            } else {
                FB.login(function (response) {
                    if (response.authResponse) {

                    }
                }, {scope: 'email,user_likes,user_posts,user_photos'});
            }
        });
    }

    function getData(access_token) {
        FB.api('/me', function (response) {
            $("#linker").html("Get Data From Facebook");
            //console.log("Welcome " + response.name + ": Your UID is " + response.id);
            getPhoto(response.id, access_token);
        });
    }

    function getPhoto(user_id, access_token) {
        //console.log(": Your UID is " + user_id);
        FB.api(
            "/" + user_id + "/photos/uploaded?access_token=" + access_token,
            function (response) {
                if (response && !response.error) {
                    for (var i = 0; i < response.data.length; i++) {
                        //console.log(response.data[i].id);
                        var picId = response.data[i].id;
                    }

                    images = [];
                    getSinglePicture(response.data, 0, response.data.length);
                }
            }
        );
    }

    function getSinglePicture(data, i, l) {
        console.log(data);
        var picId = data[i].id;
        FB.api(
            "/" + picId + "/picture",
            function (response) {
                if (response && !response.error) {
                    ++i;
                    images.push(response.data.url);
                    if (i < l) {
                        getSinglePicture(data, i, l);
                        console.log(i + " " + l);
                    } else {
                        getHtmlData(images);
                    }
                }
            }
        );
    }

    function getHtmlData(images) {
        $.ajax({
            url: "facebook.php?r=htmlData",
            method: "POST",
            data: {
                "images": images
            },
            success: function (data) {
                $("#shuffle-grid").html(data);
                picturelistSize = images.length;

            }
        });
    }
    function loadCount(){
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
</body>
</html>