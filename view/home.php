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
<!--/ END Head -->
<style>
    iframe{
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
        <div id="photo-plugin"  class="container text-center ">
            <img src="<?php echo $this->baseUrl . "html_template/dist/image/loading/spinner@2x.gif"; ?>" id="photo-plugin-loder"/>
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
    $(document).ready(function () {


    });
    function openPIO() {
        PIO.config({
            recipeId: "d672c387-aa6a-480f-8908-782843978773"
        });
        PIO.open();
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

<script type="text/javascript">
    jQuery(document).ready(function () {
        var el = document.getElementById('photo-plugin');

        PIO.open({
            recipeId: "6cfb4f30-34c7-4cf6-9490-f51925650811",
            url: "https://widget.print.io/widget/",
            embedInElement: el,
            style: {
                showHeader: false,


            },
            iframeStyles: {
                width: "100%",
                height: "1470px"
            },
            fns: {
                //callback for when the widget cart/order changes
                onCartChange: function (cart) {

                },
                //callback on widget close
                onClose: function () {

                },
                //callback on widget open
                onOpen: function () {
                    $("#photo-plugin-loder").css("display", "none");
                }
            }
        });

        //$("#photo-plugin-loder").css("display", "none");

        //$("iframe").css({"max-width": "100%", "width": "100%"});
    });
</script>

</body>
<!--/ END Body -->
</html>