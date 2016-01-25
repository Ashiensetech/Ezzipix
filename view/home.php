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
    <!-- START Head -->
    <?php include_once 'partial/head.php' ?>
    <!--    <script type="text/javascript">
            $(function () {
                var f = $('#__pio');
                f.load(function () {
                    f.contents().find('.pt-featured').hide();
                });
            });
        </script>-->
    <!--/ END Head -->
    <style>
        iframe {
            height: 1470px;

        }
    </style>

    <!-- START Body -->
    <body>
        <!-- START Template Header -->
        <?php include_once 'partial/menu.php' ?>

        <!--/ END Template Header -->

        <!-- START Template Main -->
        <div class="home-design animatedParent" data-sequence='500'>
            <div class="container-fluid upper-banner text-center" >
                <div class="welcome-txt-container text-center">
                    <h2 class="animated bounceInDown" data-id='1'>We love to print</h2>
                    <p class="animated bounceInRight" data-id='2'>Simply, the best printed products for the best prices anywhere</p>
                </div>

                <button class="btn btn-default see-products-btn animated bounceInUp" data-id='3' onclick="location.href='<?php echo $this->baseUrl.'product.php';?>'">See Our Products   &nbsp;&nbsp;&nbsp;<i class="fa fa-cart-arrow-down"></i></button>

            </div>
            <div class="container text-center steps-container">
                <div class="row clearfix">
                    <h2 class="home-head animated bounceInDown" data-id="4"><span>3 Easy Steps</span></h2>
                    <div class="col-md-4 step-single animated fadeInLeftShort" data-id="5">
                        <div class="img-div ">
                            <img width="100" height="100" src="<?php echo $this->baseUrl.'html_template/dist/image/heart.gif';?>">
                        </div>
                        <h3 class="animated fadeIn">Pick your favourite Photos</h3>
                        <p class="animated fadeIn">Prints look great from your
                            camera, Facebook, Instagram,
                            or favorite photo App.</p>
                    </div>
                    <div class="col-md-4 step-single animated fadeInUpShort" data-id="6">
                        <div class="img-div ">
                            <img src="<?php echo $this->baseUrl.'html_template/dist/image/phone.gif';?>">
                        </div>
                        <h3 class="animated fadeIn">Browse Stylish Products</h3>
                        <p class="animated fadeIn">Our product team makes sure we carry the hottest items on the market.</p>
                    </div>
                    <div class="col-md-4 step-single animated fadeInRightShort" data-id="7">
                        <div class="img-div ">
                            <img src="<?php echo $this->baseUrl.'html_template/dist/image/tick.gif';?>">
                        </div>
                        <h3>Customize and Check-Out</h3>
                        <p >Our web and mobile apps are clean
                            and simple. We ship risk-free and
                            quality guaranteed.</p>
                    </div>

                </div>
            </div>
            <div class="container-fluid feature-container text-center">
                <h2 class="home-head animated animated bounceInDown" data-id="8"><span>Our top features</span></h2>
                <div class="container">
                    <div class="col-md-4">
                        <div class="row clearfix no-margin">
                            <div class="col-md-12 feature-single animated growIn" data-id="9">
                                <div class="row clearfix">
                                    <img class="img-responsive" src="<?php echo $this->baseUrl.'html_template/dist/image/feature-1.gif';?>">
                                </div>
                                <h3><span>Quality</span></h3>
                                <p>Our products are made from the highest quality materials in the industry.</p>
                            </div>
                        </div>
                    </div>
                    <div class="col-md-4">
                        <div class="row clearfix no-margin">
                            <div class="col-md-12 feature-single animated growIn" data-id="10" >
                                <div class="row clearfix">
                                    <img class="img-responsive" src="<?php echo $this->baseUrl.'html_template/dist/image/feature-2.gif';?>">
                                </div>
                                <h3><span>Love Guarantee</span></h3>
                                <p>If you don't love it, we'll fix it. Happiness like your first love, every time.</p>
                            </div>
                        </div>
                    </div>
                    <div class="col-md-4">
                        <div class="row clearfix no-margin">
                            <div class="col-md-12 feature-single animated growIn" data-id="11">
                                <div class="row clearfix">
                                    <img class="img-responsive" src="<?php echo $this->baseUrl.'html_template/dist/image/feature-3.gif';?>">
                                </div>
                                <h3><span>Picture Perfect</span></h3>
                                <p>Our experts have perfected the artistic process, guaranteeing beautiful prints every time.</p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="container-fluid img-src-container text-center">
                <div class="row clearfix">
                    <h2 class="home-head"><span>Photos from your favorite sources</span></h2>
                    <div class="container icon-div">
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-mobile-phone"></i>
                            <p>Device</p>
                        </div>
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-facebook"></i>
                            <p>Facebook</p>
                        </div>
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-dropbox"></i>
                            <p>Dropbox</p>
                        </div>
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-instagram"></i>
                            <p>Instagram</p>
                        </div>
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-whatsapp"></i>
                            <p>Whatsapp</p>
                        </div>
                        <div class="col-md-2">
                            <i class="fa fa-3x fa-send"></i>
                            <p>Telegram</p>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <!--/ END Template Main -->

        <!-- START Template Footer -->
        <?php include_once 'partial/footer.php' ?>
        <!--/ END Template Footer -->

        <!-- START JAVASCRIPT SECTION (Load javascripts at bottom to reduce load time) -->
        <!-- Application and vendor script : mandatory -->
        <?php include_once 'partial/core_script.php' ?>
        <!--/ Application and vendor script : mandatory -->

        <script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>
        <script type="text/javascript">

            var imgJobjArray = JSON.parse($("#allImg").val())
            var images = [];
            for (var key in imgJobjArray) {
                images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
            }



        </script>
        <!-- Plugins and page level script : optional -->
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/greensock.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/layerslider.transitions.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/layerslider/js/layerslider.kreaturamedia.jquery.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/javascript/frontend/home/home-v1.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl.'html_template/dist/javascript/frontend/css3-animate-it.js';?>"></script>
        <!--/ Plugins and page level script : optional -->
        <!--/ END JAVASCRIPT SECTION -->
        <input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
<!--        <script type="text/javascript">
            function changePhotoPluginDivHeight() {
                var ifrmParentH = screen.height;
                if (ifrmParentH <= 800) {
                    ifrmParentH = 2140;
                } else {
                    ifrmParentH = 1600;
                }

                var iframeParentHeight = ifrmParentH + "px";
                $('#photo-plugin').height(iframeParentHeight);
            }
            function srinkPhotPluginDivHeight() {
                var ifrmH = (screen.height * 70) / 100;
                var iframeHeight = ifrmH + "px";
                $('#photo-plugin').height(iframeHeight);
            }
            jQuery(document).ready(function () {
<?php if (@$this->userInfo['uId'] > 0) { ?>
                    var imgJobjArray = JSON.parse($("#allImg").val());
                    var images = [];
                    for (var key in imgJobjArray) {
                        images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                    }
<?php } ?>

                var el = document.getElementById('photo-plugin');
                changePhotoPluginDivHeight();
                var clickCount = 0;
                PIO.config({
                    // url:"https://widget.print.io/widget/",
                    recipeId: "d672c387-aa6a-480f-8908-782843978773", // Staging recipeId
                    //  recipeId:"11ebd314-7bbc-4c92-bafb-cad6dd6622f9", //live
                    countryCode: "US",
                    currencyCode: "USD",
                    languageCode: "en",
                    embedInElement: el,
                    iframeStyles: {
                        width: "100%",
                        height: "100%"
                    },
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
                            sortOrder: 3,
                            isInitiallyOpen: false
                        },
                        photobucket: {
                            enabled: false,
                            sortOrder: 4,
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
                            iconUrl: BaseUrl + 'img/ezeepix-48.png'
                        }
                    }
                });
                PIO.open({
                    fns: {
<?php if (@$this->userInfo['uId'] > 0) { ?>
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
                            },
<?php } else { ?>
                            onPhotoSourceReq: function (request, replyFn) {
                                if (clickCount > 0) {
                                    window.location = "<?php echo $this->baseUrl . "login.php" ?>";

                                }
                                clickCount++;
                                replyFn({
                                id: "",
                                        page: 0,
                                        totalPages: 0,
                                        items: []
                                        /*items: [
                                         // pass in that there is a folder
                                         {id: "f1", isFolder: true, name: "fave pics"},
                                         
                                         // pass in three images
                                         {picture: "http://img.ffffound.com/static-data/assets/6/8fc3b482de5086f5f6bb64b75805b3413936c49a_m.png"},
                                         {picture: "http://img.ffffound.com/static-data/assets/6/c9c55336befdeae882e2d1794fc13888053e7f66_m.png"},
                                         {picture: "http://img.ffffound.com/static-data/assets/6/6dc8a64f665183d97a37e44cac72410531ec0978_m.png"}
                                         ]*/
                                });
                                },
<?php } ?>
                            //callback for when the widget cart/order changes
                            onCartChange: function (cart) {
                            console.log("HOGA");
                        },
                                //callback on widget close
                                onClose: function () {

                                },
                        //callback on widget open
                        onOpen: function () {
                            console.log("After Open");
                            $('iframe').click(function () {
                                console.log("Iframe Clicked");
                            });

                        },
                        onEvent: function (key, val) {
                            if (key === "section-init") {
                                // when a user navigates to a new page/section in the widget
                                // you can later use val.tplName as the 'goTo' param in .open()
                                // to direct the user back to that step
                                console.log('the user is now looking at the ' + val.tplName + ' template');
                                if (val.tplName.trim() == "tpl-product-a") {
                                    changePhotoPluginDivHeight();
                                    console.log('At Home');
                                }

                            } else if (key === "address-change") {
                                // val contains firstName, lastName, line1, line2, city,
                                //  state, postalCode, email, countryCode
                                console.log("the user's shipto address:", val);
                            } else if (key === "image-added") {
                                // when a user adds an image to their gallery
                                // to potential buy it on a product
                                // val is the url of the image
                                console.log("the user is considering printing the image that has the url " + val);
                            } else if (key === "product-focus-change") {
                                // when a user selects a product initially
                                // val is the product name and id

                                console.log(val);
                                srinkPhotPluginDivHeight();
                                console.log("the user is looking at the product named: " + val.name + " id:" + val.id);
                            } else if (key === "onCartChange") {
                                // val has an array of items,
                                //   an item is productId, quantity, sku, template, and customizationState,
                                //   which contains the images for the product and their positioning
                                console.log("cart is", val);
                            } else if (key === "analytics-pageview") {
                                // when a user switches to another page/section
                                // similar to section-init, but makes it extra easy
                                // to publish to custom analytics engines
                                // val is page, title
                                //
                                // note that publishing this info to GA is turned on by default

                                console.log("Ezeepixxx");

                                console.log("page view occurred", val.page, val.title);
                            } else if (key === "analytics-event") {
                                // when a specific tracking event occurs in the widget
                                // feel free to suggest events if you want them added
                                // mostly we use pageviews for data currently
                                //
                                // note that publishing this info to GA is turned on by default
                            } else if (key === "analytics-addTransaction") {
                                // this and the next 2 events are for GA Ecommerce tracking
                                // the data and the flow is exactly as described here:
                                // https://developers.google.com/analytics/devguides/collection/analyticsjs/ecommerce
                                //
                                // note that publishing this info to GA is turned on by default
                            } else if (key === "analytics-send") {

                            } else if (key === "analytics-addItem") {

                            } else if (key === "onOrderSubmit") {
                                // contains data similar to analytics ecommerce events
                                // == full order data
                            }

                        }
                    }
                });

                //$("#photo-plugin-loder").css("display", "none");

                //$("iframe").css({"max-width": "100%", "width": "100%"});
            });
        </script>-->
        <script type="text/javascript">
            $(function () {
                //     $('.pt-featured').css('display','none');
             //   $("iframe").contents().find(".pt-featured").css('display', 'none');
            });
        </script>
        <style>
/*            iframe {
                max-width: 100% !important;
            }*/
        </style>

    </body>
    <!--/ END Body -->
</html>