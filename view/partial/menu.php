<script>
    var BaseUrl = "<?php echo $this->baseUrl;?>";
    var phpSuffix = ".php";
</script>
<header id="header" class="navbar">
    <div class="container">
        <div class="navbar-header navbar-header-transparent">
            <a class="navbar-brand" href="javascript:void(0);">
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
            <ul class="nav navbar-nav navbar-right">
                <li>
                    <a href="javascript:void(0);" data-toggle="dropdown" data-target="#dropdown-form">
                        <span class="meta">
                            <span class="icon"><i class="ico-search"></i></span>
                        </span>
                    </a>
                </li>
            </ul>
            <div class="collapse navbar-collapse navbar-collapse-alt" id="navbar-collapse">
                <ul class="nav navbar-nav navbar-right">
                    <li class="dropdown ">
                        <a href="<?php echo $this->baseUrl; ?>home.php" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">Home</span>
                                <!--<span class="caret"></span>-->
                            </span>
                        </a>
                    </li>
                    <?php if (@$this->userInfo['uId'] > 0) { ?>
                    <li class="dropdown">
                        <a href="#" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                            <span class="meta">
                                <span class="text">Profile</span>
                                <span class="caret"></span>
                            </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt">
                            <li><a href="<?php echo $this->baseUrl; ?>login.php">Default</a></li>
                        </ul>
                    </li>
                    <?php } ?>
                    <li class="dropdown ">
                        <a href="javascript:void(0);" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                            <span class="meta">
                                <span class="text">Gallery</span>
                                <span class="caret"></span>
                            </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt">
                            <li><a href="<?php echo $this->baseUrl; ?>media.php?r=all">Images</a></li>
                            <li><a href="<?php echo $this->baseUrl; ?>social_media.php">Upload Images</a></li>
                        </ul>
                    </li>
                    <?php if (@$this->userInfo['uId'] > 0) { ?>
                        <li class="dropdown ">
                            <a href="<?php echo $this->baseUrl; ?>dashboard.php?r=logout" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">Logout</span>
                                <!--<span class="caret"></span>-->
                            </span>
                            </a>
                        </li>
                    <?php } else { ?>
                        <li class="dropdown ">
                            <a href="<?php echo $this->baseUrl; ?>login.php" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">Sign In</span>
                                <!--<span class="caret"></span>-->
                            </span>
                            </a>
                        </li>
                        <li class="dropdown ">
                            <a href="<?php echo $this->baseUrl; ?>signup.php" class="dropdown-toggle dropdown-hover">
                            <span class="meta">
                                <span class="text">Sign up</span>
                                <!--<span class="caret"></span>-->
                            </span>
                            </a>
                        </li>
                        <?php if(isset($printEnable) && $printEnable){ ?>
                                <li class="dropdown ">
                                    <a href="javascript:void(0);" onclick="openPIO()">
                                    <span class="meta">
                                        <span class="text"><span class="icon"><i class="ico-print"></i></span></span>
                                        <!--<span class="caret"></span>-->
                                    </span>
                                    </a>
                                    <!--<a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>-->
                                </li>
                         <?php } ?>
                    <?php } ?>
                </ul>
            </div>
        </div>
    </div>
</header>