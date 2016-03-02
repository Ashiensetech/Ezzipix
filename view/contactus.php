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
                            <h3>Contact US</h3>
                        </div>
                    </div>
                    <div class="row all-grid" id="shuffle-grid">
                        <p class="text-center contact-us-para">
                            Do you have any question? Any problem? Any request? Even if you just want to chat just give us a call!<br>
                            For general questions we encourage you to check out our handy-dandy <a href="<?php echo $this->baseUrl; ?>faq.php">FAQ</a> section first. Chances are there's an answer waiting for you there.<br>
                            Need to mail us something? We prefer baked goods.
                        </p>

                        <div class="col-md-8 col-md-offset-2 title-head for-con-lab">
                            <h2 class="contact-title"><i class="fa fa-envelope"></i> <br>Contact Us</h2>
                            <form onsubmit="return sendEmail()">
                                <div class="alert alert-warning" id="msg" style="display: none;">
                                </div>
                                <div class="form-group">
                                    <div class="col-md-12 no-margin no-padding sml-bot">
                                        <div class="col-md-6 no-padding sml-pad">
                                            <label>Email address</label>
                                            <input type="email" class="form-control" id="email" >
                                        </div>
                                        <div class="col-md-6 no-padding">
                                            <label for="exampleInputPassword1">Name</label>
                                            <input type="text" class="form-control" id="name">
                                        </div>
                                    </div>
                                </div>
                                <div class="form-group">
                                    <label for="exampleInputPassword1">Subject</label>
                                    <input type="text" class="form-control" id="subject">
                                </div>
                                <div class="form-group">
                                    <label for="exampleInputPassword1">Message</label>
                                    <textarea class="form-control cstm-t-area" id="message" rows="3"></textarea>
                                </div>
                                <button type="submit" class="btn btn-success cstm-btn-width">Send</button>
                            </form>
                        </div>
<!--                        <div class="col-md-4 title-head">
                            <h3 class="contact-title"><i class="fa fa-home"></i> Our Location</h3>
                            <p class="address">
                                <span class="loc-tlt"><i class="fa fa-map-marker"></i> California</span><br>
                                23 w 11th St<br>
                                Suite 1<br>
                                California, CN 90320<br><br>
                                
                                <span class="loc-tlt"><i class="fa fa-map-marker"></i> Bangladesh</span><br>
                                14r 16h<br>
                                Khilkhet<br>
                                Dhaka, PO-1229
                            </p>

                        </div>-->
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

    </body>

    <script>
                                function sendEmail() {
                                    var email = $('#email').val();
                                    var name = $('#name').val();
                                    var subject = $('#subject').val();
                                    var message = $('#message').val();
                                    $('#msg').html("");
                                    $.ajax({
                                        url: "contactus.php?r=contactus/sendMail",
                                        method: "POST",
                                        data: {"email": email, "name": name, "subject": subject, "message": message},
                                        success: function (data) {
                                            var resp = jQuery.parseJSON(data);
                                            $('#msg').html(resp.msg);
                                            $('#msg').fadeIn(500);

                                        }
                                    });
                                    return false;
                                }
    </script>
</html>