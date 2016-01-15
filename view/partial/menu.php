<link href="<?php echo $this->baseUrl.'html_template/dist/stylesheet/googleapis.css';?>" rel='stylesheet' type='text/css' >


<script>
    var BaseUrl = "<?php echo $this->baseUrl; ?>";
    var phpSuffix = ".php";
</script>
<div class="beta"></div>
<header id="header" class="navbar">
    <div class="container no-padding">
        <div class="navbar-header navbar-header-transparent">
            <a class="navbar-brand" href="<?php echo $this->baseUrl; ?>home.php">
                <span class="logo-text"></span>
            </a>
        </div>
        <div class="navbar-toolbar clearfix">
            <ul class="nav navbar-nav">
                <li class="navbar-main navbar-toggle">
                    <a href="javascript:void(0);" data-toggle="collapse" data-target="#navbar-collapse">
                        <span class="meta">
                            <span class="icon"><i class="ico-paragraph-justify3"></i></span>
                        </span>
                    </a>
                </li>
            </ul>
            <div class="navbar-form navbar-left dropdown" id="dropdown-form">
                <form action="" role="search">
                    <div class="has-icon">
                        <input type="text" class="form-control input-lg" placeholder="Search this site...">
                        <i class="ico-search form-control-icon"></i>
                    </div>
                </form>
            </div>
            <?php /* <ul class="nav navbar-nav navbar-right">
              <li>
              <a href="javascript:void(0);" data-toggle="dropdown" data-target="#dropdown-form">
              <span class="meta">
              <span class="icon"><i class="ico-search"></i></span>
              </span>
              </a>
              </li>
              </ul> */ ?>
            <div class="collapse navbar-collapse navbar-collapse-alt" id="navbar-collapse">
                <ul class="nav navbar-nav navbar-right cstm-menu">
                    <li class="dropdown formenu">
                        <a href="<?php echo $this->baseUrl; ?>home.php" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Home</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                        </a>
                    </li>
                    <li class="dropdown formenu">
                        <a href="<?php echo $this->baseUrl; ?>product.php" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Products</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                        </a>
                    </li>
                    <?php if (@$this->userInfo['uId'] > 0) { ?>
                        <li class="dropdown formenu">
                            <a href="#" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                                <span class="meta">
                                    <span class="text">Profile</span>
                                    <span class="caret"></span>
                                </span>
                            </a>
                            <ul class="dropdown-menu dropdown-menu-alt drop-menu">
                                <li><a href="<?php echo $this->baseUrl; ?>dashboard.php">Account Settings</a></li>
                                <li><a href="<?php echo $this->baseUrl; ?>shipping.php">Shipping Info</a></li>
                                <!--<li><a href="<?php /*echo $this->baseUrl; */?>dashboard.php?r=updatePassword">Change
                                        Password</a></li>-->
                            </ul>
                        </li>
                    <?php } ?>
                    <li class="dropdown formenu">
                        <a href="<?php echo $this->baseUrl; ?>social_media.php" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                            <span class="meta">
                                <span class="text">Add Photos</span>
                                <span class="caret"></span>
                            </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt cstm-dropdown">
                            <li><a href="<?php echo $this->baseUrl; ?>social_media.php?r=computer">My Device</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>social_media.php?r=facebook">Facebook</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>social_media.php?r=dropbox">Dropbox</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>social_media.php?r=instagram">Instagram</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>service.php?r=new&app=w">Whats App</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>service.php?r=new&app=t">Telegram</a></li>
                            <!--<li><a href="-->
                            <?php //echo $this->baseUrl;   ?><!--social_media.php">Upload Images</a></li>-->
                        </ul>
                    </li>
                    <li class="dropdown dropdown-toggle dropdown-hover formenu">
                        <a href="<?php echo $this->baseUrl ?>media.php?r=allnew" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">My Photos</span>
                            </span>
                        </a>
                    </li>
                    <li class="dropdown dropdown-toggle dropdown-hover formenu">
                        <a href="<?php echo $this->baseUrl ?>about.php" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">About Us</span>
                            </span>
                        </a>
                    </li>
                    <?php if (@$this->userInfo['uId'] > 0) { ?>
                        <li class="dropdown formenu" style="display: none;">
                            <a href="<?php echo $this->baseUrl; ?>media.php?r=all&print=true" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Print</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                            </a>
                        </li>
                        <li class="dropdown formenu">
                            <a href="<?php echo $this->baseUrl; ?>dashboard.php?r=logout" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Logout</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                            </a>
                        </li>
                    <?php } else { ?>
                        <li class="dropdown formenu">
                            <a href="<?php echo $this->baseUrl; ?>login.php" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Sign In</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                            </a>
                        </li>
                        <li class="dropdown formenu">
                            <a href="<?php echo $this->baseUrl; ?>signup.php" class="dropdown-toggle dropdown-hover">
                                <span class="meta">
                                    <span class="text">Sign up</span>
                                    <!--<span class="caret"></span>-->
                                </span>
                            </a>
                        </li>
                        <?php /* if(isset($printEnable) && $printEnable){ ?>
                          <li class="dropdown ">
                          <a href="javascript:void(0);" onclick="openPIO()">
                          <span class="meta">
                          <span class="text"><span class="icon"><i class="ico-print"></i></span></span>
                          <!--<span class="caret"></span>-->
                          </span>
                          </a>
                          <!--<a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>-->
                          </li>
                          <?php } */ ?>
                    <?php } ?>
                </ul>
            </div>
        </div>
    </div>
</header>