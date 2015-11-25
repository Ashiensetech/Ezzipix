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
    <!--/ END page header -->

    <!-- START Portfolio Content -->
    <section class="section bgcolor-white cstm-padding-top">
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
                    <?php $class = @$_GET['p']; ?>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all' ?>" class="<?php echo ($class) ? '' : 'active' ?>">All</a>
                    </li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=desktop' ?>" class="<?php echo ($class == 'my device') ? 'active' : '' ?>">My
                            device</a>
                    </li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=facebook' ?>" class="<?php echo ($class == 'facebook') ? 'active' : '' ?>">Facebook</a>
                    </li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=instagram' ?>" class="<?php echo ($class == 'instagram') ? 'active' : '' ?>">Instagram</a>
                    </li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=whats app' ?>" class="<?php echo ($class == 'whats app') ? 'active' : '' ?>">Whats
                            App</a></li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=dropbox' ?>" class="<?php echo ($class == 'dropbox') ? 'active' : '' ?>">Dropbox</a>
                    </li>
                    <li>
                        <a href="<?php echo $this->baseUrl . 'media.php?r=all&p=telegram' ?>" class="<?php echo ($class == 'telegram') ? 'active' : '' ?>">Telegram</a>
                    </li>
                </ul>
            </div>
            <!--/ END Section Header -->

        </div>

        <div class="container new-gallery-container">
            <div class="row clearfix">
                <div class="col-md-3">
                    <div class="panel panel-default block active">
                        <div class="panel-body">
                            <a href="#">
                            <img class="img-responsive" src="./images/feature-1.png">
                            </a>
                        </div>
                        <div class="panel-footer">
                            <a href="#">Album name</a>
                        </div>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="panel panel-default block">
                        <div class="panel-body">
                            <a href="#">
                            <img class="img-responsive" src="./images/feature-1.png">
                            </a>
                        </div>
                        <div class="panel-footer">
                            <a href="#">Album name</a>
                        </div>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="panel panel-default block">
                        <div class="panel-body">
                            <a href="#">
                            <img class="img-responsive" src="./images/feature-1.png">
                            </a>
                        </div>
                        <div class="panel-footer">
                            <a href="#">Album name</a>
                        </div>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="panel panel-default block">
                        <div class="panel-body">
                            <a href="#">
                            <img class="img-responsive" src="./images/feature-1.png">
                            </a>
                        </div>
                        <div class="panel-footer">
                            <a href="#">Album name</a>
                        </div>
                    </div>
                </div>
            </div>
            <div class="row album-all">
                
            </div>
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
<!--<script type="text/javascript" src="-->
<?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?><!--"></script>-->
<!--/ Plugins and page level script : optional -->
<!--/ END JAVASCRIPT SECTION -->
<input id="allImg" type="hidden" value='<?php echo $allImg; ?>'/>
<input id="printPhoto" type="hidden" value='<?php echo (isset($_GET['print'])) ? $_GET['print'] : "false"; ?>'/>


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
