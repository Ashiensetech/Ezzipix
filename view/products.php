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
        <section id="main" role="main">

            <!-- START Layerslider -->
            <!-- <section id="layerslider"style="width:100%; height:553px;">
                        <div class="ls-slide" data-ls="transition2d:1; slidedelay:8000;">
                            <img src="<?php echo $this->baseUrl . 'html_template/dist/image/layerslider/bg3.png'; ?>" class="ls-bg">
                            <img class="ls-l" style="top:90px;left:68%;" style="height: 200px;width: 200px" src="<?php echo $this->baseUrl . 'html_template/dist/image/layerslider/layer/people2.png'; ?>" data-ls="delayin:1000; easingin:easeOutElastic;">
                            <h1 class="ls-l font-alt" style="top:110px;left:150px;" data-ls="offsetxin:0;durationin:2000;delayin:1500;easingin:easeOutElastic;rotatexin:-90;transformoriginin:50% top 0;offsetxout:-200;durationout:1000;">
                                Welcome To <span class="text-primary">Ezeepix</span>
                            </h1>
                            <h4 class="ls-l" style="top:170px;left:150px;width:550px;" data-ls="offsetxin:0; durationin:2000; delayin:2000; easingin:easeOutElastic; rotatexin:90; transformoriginin:50% top 0; offsetxout:-400;">
                                consectetur adipisicing elit, sed do eiusmod
                            </h4>
                            <p class="ls-l text-default" style="top:230px;left:150px;width:550px;" data-ls="offsetxin:0; durationin:2000; delayin:2500; easingin:easeOutElastic; rotatexin:90; transformoriginin:50% top 0; offsetxout:-400;">
                                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
                                tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
                                quis nostrud.
                            </p>
                        </div>
                        <div class="ls-slide" data-ls="transition2d:1; slidedelay:8000;">
                            <img src="<?php echo $this->baseUrl . 'html_template/dist/image/layerslider/bg2.png'; ?>" class="ls-bg" alt="Slide background">
                            <h4 class="ls-l text-default text-right" style="top:120px;left:65%;width:550px;" data-ls="easingin:easeOutElastic; delayin:0;">
                                Fully Responsive &amp; Clean Design
                            </h4>
                            <h1 class="ls-l font-alt text-right" style="top:150px;left:65%;width:550px;" data-ls="easingin:easeOutElastic; delayin:500;">
                                <span class="text-primary">Mobile</span> Devices Optimize
                            </h1>
                            <p class="ls-l text-default text-right" style="top:210px;left:65%;width:550px;" data-ls="easingin:easeOutElastic; delayin:1000;">
                                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
                                tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
                                quis nostrud exercitation.
                            </p>
                            <p class="ls-l text-default text-right" style="top:290px;left:65%;width:550px;" data-ls="easingin:easeOutElastic; delayin:1500;">
                                <a href="javascript:void(0);" class="btn btn-primary">
                                    Learn More <i class="ico-angle-right ml5"></i>
                                </a>
                            </p>
                            <img class="ls-l" style="top:80px;left:250px;" src="<?php echo $this->baseUrl . 'html_template/dist/image/layerslider/layer/iphone-5s.png'; ?>" data-ls="delayin:2000; easingin:easeOutElastic;">
                        </div>
                    </section> -->
            <!--/ END Layerslider -->

            <section class="bgcolor-white">
<!--                <div class="row steps-heading">
                    <h2><span style="color: #C22666;">Three</span> <span style="color: #3989C9">Easy</span> <span style="color: #4ABB81;">Steps</span></h2>
                    <div class="col-md-12 cstm-padding">
                        <div class="col-md-4 pick-favourite">
                            <div class="icon-div-pic">
                                <i class="fa fa-heart"></i>
                            </div>
                            <h3>Pick Your Favorite Photos</h3>
                            <p>Prints look great from your 
                                camera, Facebook, Instagram,
                                or favorite photo App.
                            </p>
                        </div>
                        <div class="col-md-4 stylish-pro">
                            <div class="icon-div-pro">
                                <i class="fa fa-mobile"></i>
                            </div>
                            <h3>Browse Stylish Products</h3>
                            <p>Our product team makes sure we carry the hottest items on the market.</p>
                        </div>
                        <div class="col-md-4 custo-check">
                            <div class="icon-div-cus">
                                <i class="fa fa-check"></i>
                            </div>
                            <h3>Customize and Check-Out</h3>
                            <p>Our web and mobile apps are clean 
                                and simple. We ship risk-free and 
                                quality guaranteed.</p>
                        </div>
                    </div>
                </div>-->
                <div id="photo-plugin" class="container text-center ifrmae-body">
                </div>
            </section>

            <!-- START To Top Scroller -->
            <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
            <!--/ END To Top Scroller -->
        </section>
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
        <!--/ Plugins and page level script : optional -->
        <!--/ END JAVASCRIPT SECTION -->
        <input id="TelegramImg" type="hidden" value='<?php echo (isset($TelegramImg))?$TelegramImg:"{}"; ?>'/>
        <input id="WhatsAppImg" type="hidden" value='<?php echo (isset($WhatsAppImg))?$WhatsAppImg:"{}"; ?>'/>
        <input id="FacebookImg" type="hidden" value='<?php echo (isset($FacebookImg))?$FacebookImg:"{}"; ?>'/>
        <input id="InstragramImg" type="hidden" value='<?php echo (isset($InstragramImg))?$InstragramImg:"{}"; ?>'/>
        <input id="DropBoxImg" type="hidden" value='<?php echo (isset($DropBoxImg))?$DropBoxImg:"{}"; ?>'/>
        <input id="PicasaImg" type="hidden" value='<?php echo (isset($PicasaImg))?$PicasaImg:"{}"; ?>'/>
        <input id="FlickerImg" type="hidden" value='<?php echo (isset($FlickerImg))?$FlickerImg:"{}"; ?>'/>
        <input id="DesktopImg" type="hidden" value='<?php echo (isset($DesktopImg))?$DesktopImg:"{}"; ?>'/>

        <input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
        <script type="text/javascript">
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

                <?php } ?>

                var el = document.getElementById('photo-plugin');
                changePhotoPluginDivHeight();
                var clickCount = 0;
                PIO.config({
                     url:"https://widget.print.io/widget/",
                    //recipeId: "d672c387-aa6a-480f-8908-782843978773", // Staging recipeId
                      recipeId:"11ebd314-7bbc-4c92-bafb-cad6dd6622f9", //live
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
                        },custom: {
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
                                console.log(request);
                                if (request.folder === "") {

                                    //pictureArray.push({id: "f1", isFolder: true, name: "fave pics"}); // Create new folder
                                    var myDeviceFolder = {id: "myDevice", isFolder: true, name: "My device"};
                                    var facebookFolder = {id: "facebook", isFolder: true, name: "Facebook"};
                                    var dropboxFolder = {id: "dropbox", isFolder: true, name: "Dropbox"};
                                    var whatsAppFolder = {id: "whatsApp", isFolder: true, name: "WhatsApp pics"};
                                    var instagramFolder = {id: "instagram", isFolder: true, name: "Instagram"};


                                    pictureArray.push(myDeviceFolder);
                                    pictureArray.push(facebookFolder);
                                    pictureArray.push(dropboxFolder);
                                    pictureArray.push(whatsAppFolder);
                                    pictureArray.push(instagramFolder);



                                    replyFn({
                                        id: "",
                                        page: 1,
                                        totalPages: 1,
                                        items: pictureArray

                                    });
                                }else{
                                    if (request.folder === "myDevice") {

                                        var imgObjArray = JSON.parse($("#DesktopImg").val());
                                        var images = [];
                                        for (var key in imgObjArray) {
                                            images.push(BaseUrl + "upload/img/" + imgObjArray[key].media_file_path);
                                        }

                                        /*=======Pagination Code (Not stable)*/
//                                        var perPageImg = 5;
//                                        var page = request.page;
//                                        var index = (page -1)*perPageImg;
//                                        var limit = images.length - (images.length - (page*perPageImg));
//
//
//                                        var totalPages =Math.ceil(images.length/perPageImg);
//                                        console.log("totalPages "+totalPages+" page "+page);

                                        for (var i = 0; i < images.length; i++) {
                                            picture = {picture: images[i]};
                                            pictureArray.push(picture);
                                        }
                                        replyFn({
                                            id: "myDevice",
                                            page: 1,
                                            totalPages:1,
                                            items: pictureArray

                                        });
                                    }else  if (request.folder === "facebook") {
                                        var imgJobjArray = JSON.parse($("#FacebookImg").val());
                                        var images = [];
                                        for (var key in imgJobjArray) {
                                            images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                                        }
                                        for (var i = 0; i < images.length; i++) {
                                            picture = {picture: images[i]};
                                            pictureArray.push(picture);
                                        }
                                        replyFn({
                                            id: "facebook",
                                            page: 1,
                                            totalPages: 1,
                                            items: pictureArray

                                        });
                                    }else  if (request.folder === "dropbox") {
                                        var imgJobjArray = JSON.parse($("#DropBoxImg").val());
                                        var images = [];
                                        for (var key in imgJobjArray) {
                                            images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                                        }
                                        for (var i = 0; i < images.length; i++) {
                                            picture = {picture: images[i]};
                                            pictureArray.push(picture);
                                        }
                                        replyFn({
                                            id: "dropbox",
                                            page: 1,
                                            totalPages: 1,
                                            items: pictureArray

                                        });
                                    }else  if (request.folder === "whatsApp") {
                                        var imgJobjArray = JSON.parse($("#WhatsAppImg").val());
                                        var images = [];
                                        for (var key in imgJobjArray) {
                                            images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                                        }
                                        for (var i = 0; i < images.length; i++) {
                                            picture = {picture: images[i]};
                                            pictureArray.push(picture);
                                        }
                                        replyFn({
                                            id: "whatsApp",
                                            page: 1,
                                            totalPages: 1,
                                            items: pictureArray

                                        });
                                    }else  if (request.folder === "instagram") {
                                        var imgJobjArray = JSON.parse($("#InstragramImg").val());
                                        var images = [];
                                        for (var key in imgJobjArray) {
                                            images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
                                        }
                                        for (var i = 0; i < images.length; i++) {
                                            picture = {picture: images[i]};
                                            pictureArray.push(picture);
                                        }
                                        replyFn({
                                            id: "instagram",
                                            page: 1,
                                            totalPages: 1,
                                            items: pictureArray

                                        });
                                    }
                                }
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
        </script>
        <script type="text/javascript">
            $(function () {
                //     $('.pt-featured').css('display','none');
                $("iframe").contents().find(".pt-featured").css('display', 'none');
            });
        </script>
        <style>
            iframe {
                max-width: 100% !important;
            }
        </style>

    </body>
    <!--/ END Body -->
</html>