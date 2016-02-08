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


<html class="frontend" xmlns="http://www.w3.org/1999/html" xmlns="http://www.w3.org/1999/html">
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
                        <div class="col-md-12 col-md-offset-4 my-photo-header photo-header no-padding">
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
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=desktop' ?>" class="<?php echo ($platform == 'desktop') ? 'active' : '' ?>">My
                                    device</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=facebook' ?>" class="<?php echo ($platform == 'facebook') ? 'active' : '' ?>">Facebook</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=instagram' ?>" class="<?php echo ($platform == 'instagram') ? 'active' : '' ?>">Instagram</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=whatsapp' ?>" class="<?php echo ($platform == 'whatsapp') ? 'active' : '' ?>">Whats
                                    App</a></li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=dropbox' ?>" class="<?php echo ($platform == 'dropbox') ? 'active' : '' ?>">Dropbox</a>
                            </li>
                            <li>
                                <a href="<?php echo $this->baseUrl . 'media.php?r=allnew&p=telegram' ?>" class="<?php echo ($platform == 'telegram') ? 'active' : '' ?>">Telegram</a>
                            </li>
                        </ul>
                    </div>
                    <!--/ END Section Header -->

                </div>

                <div class="container new-gallery-container">
                    <div class="row clearfix">
                        <?php if(count($imgDateWise)==0){ ?>
                            <div class="col-md-3">
                               </label>No image available </label>
                            </div>
                        <?php } ?>
                        <?php foreach ($imgDateWise as $row) { ?>
                            <?php $date = new DateTime($row['created_date']); ?>
                            <div class="col-md-3" onclick="location.href='<?php echo $this->baseUrl . 'photo.php?r=date&p=' . $platform . '&d=' . $date->format('Y-m-d'); ?>'">
                                <div class="panel panel-default block album">
                                    <div class="panel-body" >
                                        <a href="<?php echo $this->baseUrl . 'photo.php?r=date&p=' . $platform . '&d=' . $date->format('Y-m-d'); ?>">
                                            <img class="img-responsive" src="<?php echo $this->baseUrl . 'upload/img/' . $row['media_file_path']; ?>" />
                                        </a>
                                    </div>

                                    <div class="panel-footer">
                                        <div class="date-month-year">
                                            <span class="date-me"><?php echo $date->format('D d'); ?>th</span>
                                            <br><span class="month-me" style="font-size: 20px;"><?php echo $date->format('M'); ?>,</span>
                                            <span class="years-me" style="font-size: 18px;"><?php echo $date->format('Y'); ?></span>
                                        </div>
                                        <?php
//                                        echo $date->format('D d, M  Y');                                     
                                        ?>
                                        <a href="<?php echo $this->baseUrl . 'photo.php?r=date&p=' . $platform . '&d=' . $date->format('Y-m-d'); ?>" >
                                        </a> 
                                    </div>
                                </div>
                            </div>
                            <?php } ?>

                        <!--            <div class="row album-all">-->
                        <!--                <div style="text-align: center;padding-top: 5%;">-->
                        <!--                    <img src="--><?php //echo $this->baseUrl.'img/loader/loading.GIF';       ?><!--" />-->
                        <!--                </div>-->
                        <!---->
                        <!--            </div>-->
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
