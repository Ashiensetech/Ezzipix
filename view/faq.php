<!--
 * Project  : ezeepix
 * File     : about.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 11/3/15 - 12:28 PM
-->
<!DOCTYPE html>
<html class="frontend">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
    <link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
    <?php include_once 'partial/head.php' ?>
    <body>
        <?php include_once 'partial/menu.php'; ?>

        <section id="main" role="main">
            <div class="all-bg">

            </div>
            <section class="section bgcolor-white cstm-padding-top" style="margin-top:-280px;background: rgba(255,255,255,0.6) !important;">
                <div class="container">
                    <div class="row">
                        <div class="col-md-11 col-md-offset-5 my-photo-header photo-header no-padding">
                            <h3>FAQ</h3>
                        </div>
                    </div>
                    <div class="row all-grid" id="shuffle-grid">                      
                        <div class="col-md-12 no-padding cstm-marg-top">
                            <div class="col-md-8 no-padding">
                                <div class="col-md-12 search-dv text-center" style="display: none">
                                    <input type="text">
                                    <button class="btn btn-success srch-bttn"><i class="fa fa-search"></i></button>
                                </div>
                                <h1 class="help-text">What can we help you with?</h1>
<!--                                <div class="col-md-12">
                                    <div class="col-md-3 no-padding category-faq">
                                        <li>
                                            <a href="" class="active">All</a>
                                        </li>
                                        <li>
                                            <a href="" class="">Billing </a>
                                        </li>
                                        <li>
                                            <a href="" class="">Care and Use</a>
                                        </li>

                                    </div>
                                    <div class="col-md-4 no-padding category-faq">
                                        <li>
                                            <a href="" class="">Image and file support</a>
                                        </li>
                                        <li>
                                            <a href="" class="">Instagram Prints</a>
                                        </li>
                                        <li>
                                            <a href="" class="">Ordering</a>
                                        </li>

                                    </div>
                                    <div class="col-md-5 no-padding category-faq">
                                        <li>
                                            <a href="" class="">Product</a>
                                        </li>
                                        <li>
                                            <a href="" class="">Request a Reprint or Refund</a>
                                        </li>
                                        <li>
                                            <a href="" class="">Shipping</a>
                                        </li>

                                    </div>
                                </div>-->
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo1" class="collapse-button block-normal">How do I change the shipping or billing address on my order?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo1" class="collapse collapse-data-div">

                                        Please email us and if you caught it in time we will do our best to fix it for you! Usually this time period is within 24 hours of when you placed your order.
                                    </div>
                                </div>
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo2" class="collapse-button block-normal">I'm not happy with the product I received, how do I go about returning it?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo2" class="collapse collapse-data-div">


                                        This makes us sad! We always want our customer to be happy. Please email us with the reason you are not happy and any pictures you feel are necessary to show us what might be wrong with your product and we will do our absolute best to make you happy again! 
                                    </div>
                                </div>
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo3" class="collapse-button block-normal">I need my order by a certain date, what do I do?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo3" class="collapse collapse-data-div">


                                        Please email us with your address, and requested item for us to confirm if the request is possible. <a href="https://www.ezeepix.com/home.php">www.ezeepix.com</a>
                                    </div>
                                </div>   
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo4" class="collapse-button block-normal">Do you offer products in sizes or options different than the options on your website?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo4" class="collapse collapse-data-div">


                                        We are doing new things every day and always trying to satisfy our customers.  Therefore if you do not see the size you want, please email us and we will see what we can do for you! 
                                    </div>
                                </div>
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo5" class="collapse-button block-normal">If I would like my order shipped to a different address than my home is that possible?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo5" class="collapse collapse-data-div">


                                        We can ship to any address you want as long as it is not a P.O Box. If you have questions about the address you want to ship it to, please don't hesitate to email us at 
                                    </div>
                                </div>
                                <div class="col-md-12 collapse-full">
                                    <button data-toggle="collapse" data-target="#demo6" class="collapse-button block-normal">What image file types does EzeePix accept through it's site?<i class="fa fa-chevron-circle-down"></i></button>

                                    <div id="demo6" class="collapse collapse-data-div">


                                        We accept gif, jpg, and png images.

                                    </div>
                                </div>   
                            </div>
                            <div class="col-md-4 no-padding faq-image">
                                <img src="<?php echo $this->baseUrl . 'html_template/dist/image/faq.png'; ?>">
                            </div>
                        </div>
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
        <?php include_once 'partial/footer.php' ?>
        <?php include_once 'partial/core_script.php' ?>

        <!-- Plugins and page level script : optional -->
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
        <script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
        <script type="text/javascript">
            $(function () {
                $(".block-normal").click(function () {

                    if (!$(this).hasClass("skydiv")) {
                        $(this).addClass("skydiv");
                    } else {
                        $(this).removeClass("skydiv");
                    }
                });
            });
        </script>

    </body>
</html>