<footer role="contentinfo" class="bgcolor-dark pt25 cstm-pre-footer">
    <!-- container -->
    <div class="container mb25">
        <!-- row -->
        <div class="row">
            <!-- About -->
            <div class="col-md-7 pre-foot-left">
                <h4 class="font-alt mt0"> About Us </h4>

                <p>
                    Photos are more than a file on your phone. They’re memories and tools to share ideas and inspire. A
                    picture is worth a thousand words. At Ezeepix we get that, and we don’t think you should have to pay a lot to bring those memories to life. With us you get all of the quality services that you expect from our ... <a href="about.php"> read more</a>
                </p>
            </div>
            <div class="visible-sm visible-xs" style="margin-bottom:25px;"></div>
            <!--/ About -->
            <!-- Address + Social -->
            <div class="col-md-2 pre-foot-right" style="background: url('../image/others/map-vector.png') no-repeat center center;background-size: 100%;">
<!--                <h4 class="font-alt mt0">ADDRESS</h4>
                <address class="cstm-address">
                    <strong>NY, Inc.</strong><br>
                    <i class="fa fa-home"></i> 795 Falcon Ave, Suite 600<br>
                    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;San Francisco, CA <br>
                    <i class="fa fa-phone"></i> (123) 456-7890
                </address>-->

            </div>
            <div class="col-md-3 pre-foot-right-r">
                <h4 class="font-alt mt0">Connect With Us</h4>

                <div class="icons">
                    <a href="//www.facebook.com/ezeepix" target="_blank" class="btn-social btn-outline"><i class="fa fa-fw fa-facebook"></i></a>
                    <a href="#" class="btn-social btn-outline"><i class="fa fa-instagram"></i></a>
                    <a href="#" class="btn-social btn-outline"><i class="fa fa-twitter"></i></a>
                    <a href="#" class="btn-social btn-outline"><i class="fa fa-google-plus"></i></a>
                </div>
            </div>
            <div class="visible-sm visible-xs" style="margin-bottom:25px;"></div>
            <!--/ Address + Social -->

            <?php /* <!-- Newsletter -->
              <div class="col-md-4">
              <h4 class="font-alt mt0">NEWS LETTER</h4>
              <form role="form">
              <div class="form-group">
              <p class="form-control-static">Subscribe to our newsletter and stay up to date with the latest news and deals!</p>
              </div>
              <div class="form-group">
              <input type="email" class="form-control" id="newsletter_email" placeholder="Enter email">
              </div>
              <button type="submit" class="btn btn-primary btn-block">Subscribe Now</button>
              </form>
              </div>
              <!--/ Newsletter --> */ ?>
        </div>
        <!--/ row -->
    </div>
    <!--/ container -->

    <!-- bottom footer -->
    <div class="footer-bottom pt15 pb15 cstm-footer">
        <!-- container -->
        <div class="container">
            <div class="row">
                <div class="col-sm-6 copyrights">
                    <!-- copyright -->
                    <p class="nm text-muted">&copy; Copyright <?php echo date("Y"); ?> by
                        <a href="javascript:void(0);" class="text-white">ezeepix.com</a>. All Rights Reserved.
                    </p>
                    <!--/ copyright -->
                </div>
                <div class="col-sm-6 text-right hidden-xs policy">
                    <a href="<?php echo $this->baseUrl ?>policy.php" class="text-white">Privacy Policy</a>
                    <span class="ml5 mr5">|</span>
                    <a href="<?php echo $this->baseUrl ?>terms.php" class="text-white">Terms of Service</a>
                    <span class="ml5 mr5">|</span>
                    <a href="<?php echo $this->baseUrl ?>contactus.php">Contact Us</a>
                    <span class="ml5 mr5">|</span>
                    <!--<a href="<?php echo $this->baseUrl ?>support.php">Support</a>-->
                    <span class="ml5 mr5">|</span>
                    <a href="<?php echo $this->baseUrl ?>faq.php">FAQ</a>
                </div>
            </div>
        </div>
        <!--/ container -->
    </div>
    <!--/ bottom footer -->
</footer>