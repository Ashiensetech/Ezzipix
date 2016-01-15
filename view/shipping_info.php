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

<!-- START Body -->
<body>
<!-- START Template Header -->
<?php include_once 'partial/menu.php'; ?>
<!--/ END Template Header -->

<!-- START Template Main -->
<section id="main" role="main">
    <!-- START jumbotron -->
    <section class="jumbotron jumbotron-bg7 nm upper-margin" data-stellar-background-ratio="0.4" style="min-height:486px;">
        <!-- pattern + overlay -->
        <div class="overlay pattern pattern2"></div>
        <!--/ pattern + overlay -->
        <div class="container" style="padding-top:8%;padding-bottom:8%;">
            <div class="row">
                <div class="col-md-6 col-md-offset-3">
                    <div class="content data-profile site-border">
                        <div class="form-group">
                            <div class="col-md-12 cstm-head-profile">
                                <p>SHIPPING INFORMATION</p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Full name :</label>
                            </div>
                            <?php foreach($user as $u){?>
                            <div class="col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$u['first_name']; ?><?php echo " ".@$u['last_name']; ?></p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Email :</label>
                            </div>
                            <div class="col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$u['email']; break;}?></p>
                            </div>
                        </div>
                        <?php foreach($shipping as $s){ ?>
                        <div class="form-group clearfix clear">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Address 1 :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['address1'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clearfix clear">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Address 2 :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['address2'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>City :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['city'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>State/Province :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['state'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Post Code :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['postcode'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clear clearfix">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Country :</label>
                            </div>
                            <div class="text-capitalize col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['country'] ?></p>
                            </div>
                        </div>
                        <div class="form-group clearfix clear">
                            <div class="col-md-6 cstm-label-profile">
                                <label>Shipping Phone :</label>
                            </div>
                            <div class="col-md-6 cstm-p-profile padding-left-o">
                                <p><?php echo @$s['phone'] ?></p>
                            </div>
                        </div>
                        <?php if($s['id']>0){
                            $shippingFound=1;
                            }
                            else
                            {
                                $shippingFound=0;
                            }
                        }?>
                        <?php if($shippingFound==0){
                            ?>
                        <div class="form-group clearfix clear">
                            <div class="col-md-6 cstm-label-profile alert-danger">
                                <label>No Shipping Address</label>
                            </div>
                        </div>
                        <?php } ?>
                        <div class="form-group">
                            <?php if($shippingFound==0){?>
                            <div class="col-md-3 cstm-image-profile no-margin-bottom">
                                <a href="<?php echo $this->baseUrl . 'shipping.php?r=getAddShippingView'; ?>" class="btn btn-default btn-cstm">Add Shipping</a>
                            </div>
                            <?php } else
                            {?>
                                <div class="col-md-3 cstm-image-profile no-margin-bottom">
                                    <a href="<?php echo $this->baseUrl . 'shipping.php?r=getUpdateShippingView'; ?>" class="btn btn-default btn-cstm">Update Shipping</a>
                                </div>
                           <?php }?>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>
    <!--/ END jumbotron -->


    <!-- START To Top Scroller -->
    <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
    <!--/ END To Top Scroller -->
</section>
<!--/ END Template Main -->

<!-- START Template Footer -->
<?php include_once 'partial/footer.php' ?>
<!-- End Template Footer -->
<?php include_once 'partial/core_script.php' ?>

</body>
<!--/ END Body -->
</html>