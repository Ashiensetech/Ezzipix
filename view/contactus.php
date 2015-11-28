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
                        <p class="text-justify">
                            Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus nec eleifend arcu. Suspendisse sagittis, lorem non sollicitudin feugiat, lorem risus congue nulla, sed ornare nulla velit eget libero. Maecenas at velit eu justo ullamcorper gravida. Duis quis tellus arcu. Proin non dignissim augue. Pellentesque luctus varius gravida. Curabitur efficitur tortor nec magna bibendum, quis lobortis sapien ornare. Suspendisse sed metus dapibus, bibendum odio eu, rhoncus risus. Vestibulum tortor enim, molestie et porttitor ut, lobortis eget nisl. Aenean vel ligula ac enim elementum finibus sit amet ut mauris.
                        </p>
                        <hr></hr>

                        <div class="col-md-6">
                            <form onsubmit="return sendEmail()">
                                <div class="alert alert-warning" id="msg" style="display: none;">
                                </div>
                                <div class="form-group">
                                    <label>Email address</label>
                                    <input type="email" class="form-control" id="email" >
                                </div>
                                <div class="form-group">
                                    <label for="exampleInputPassword1">Name</label>
                                    <input type="text" class="form-control" id="name">
                                </div>
                                <div class="form-group">
                                    <label for="exampleInputPassword1">Subject</label>
                                    <input type="text" class="form-control" id="subject">
                                </div>
                                <div class="form-group">
                                    <label for="exampleInputPassword1">Message</label>
                                    <textarea class="form-control" id="message"></textarea>
                                </div>
                                <button type="submit" class="btn btn-success pull-right">Send</button>
                            </form>
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