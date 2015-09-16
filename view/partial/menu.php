<script>
    var BaseUrl = "<?php echo $this->baseUrl;?>";
    var phpSuffix=".php";
</script>
<header id="header" class="navbar">
    <div class="container">
        <!-- START navbar header -->
        <div class="navbar-header navbar-header-transparent">
            <!-- Brand -->
            <a class="navbar-brand" href="javascript:void(0);">
                <span class="logo-text"></span>
            </a>
            <!--/ Brand -->
        </div>
        <!--/ END navbar header -->

        <!-- START Toolbar -->
        <div class="navbar-toolbar clearfix">
            <!-- START Left nav -->
            <ul class="nav navbar-nav">
                <!-- Navbar collapse: This menu will take position at the top of template header (mobile only). Make sure that only #header have the `position: relative`, or it may cause unwanted behavior -->
                <li class="navbar-main navbar-toggle">
                    <a href="javascript:void(0);" data-toggle="collapse" data-target="#navbar-collapse">
                                <span class="meta">
                                    <span class="icon"><i class="ico-paragraph-justify3"></i></span>
                                </span>
                    </a>
                </li>
                <!--/ Navbar collapse -->
            </ul>
            <!--/ END Left nav -->

            <!-- START navbar form -->
            <div class="navbar-form navbar-left dropdown" id="dropdown-form">
                <form action="" role="search">
                    <div class="has-icon">
                        <input type="text" class="form-control input-lg" placeholder="Search this site...">
                        <i class="ico-search form-control-icon"></i>
                    </div>
                </form>
            </div>
            <!-- START navbar form -->

            <!-- START Right nav -->
            <ul class="nav navbar-nav navbar-right">
                <!-- Search form toggler -->
                <li>
                    <a href="javascript:void(0);" data-toggle="dropdown" data-target="#dropdown-form">
                                <span class="meta">
                                    <span class="icon"><i class="ico-search"></i></span>
                                </span>
                    </a>
                </li>
                <!--/ Search form toggler -->

                <!-- Shopping cart dropdown -->

                <!--/ Shopping cart dropdown -->
            </ul>
            <!--/ END Right nav -->

            <!-- START nav collapse -->
            <div class="collapse navbar-collapse navbar-collapse-alt" id="navbar-collapse">
                <ul class="nav navbar-nav navbar-right">
                    <li class="dropdown ">
                        <a href="#" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                                    <span class="meta">
                                        <span class="text">Home</span>
                                        <span class="caret"></span>
                                    </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt">
                            <li><a href="<?php echo $this->baseUrl;?>login.php">Default</a></li>
                        </ul>
                    </li>
                    <li class="dropdown">
                        <a href="#" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                                    <span class="meta">
                                        <span class="text">Profile</span>
                                        <span class="caret"></span>
                                    </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt">
                            <li><a href="<?php echo $this->baseUrl;?>login.php">Sign In</a></li>
                            <li><a href="<?php echo $this->baseUrl;?>signup.php">Sign up</a></li>
                        </ul>
                    </li>

                    <li class="dropdown ">
                        <a href="#" class="dropdown-toggle dropdown-hover" data-toggle="dropdown">
                                    <span class="meta">
                                        <span class="text">Gallery</span>
                                        <span class="caret"></span>
                                    </span>
                        </a>
                        <ul class="dropdown-menu dropdown-menu-alt">
                            <li><a href="<?php echo $this->baseUrl;?>media.php?r=all">Images</a></li>
                            <li><a href="<?php echo $this->baseUrl;?>social_media.php">Upload Images</a></li>
                        </ul>
                    </li>
                    <li class="dropdown ">
                        <a href="<?php echo $this->baseUrl;?>dashboard.php?r=logout" class="dropdown-toggle dropdown-hover" >
                                    <span class="meta">
                                        <span class="text">Logout</span>
                                        <span class="caret"></span>
                                    </span>
                        </a>
                    </li>

                </ul>
            </div>
            <!--/ END nav collapse -->
        </div>
        <!--/ END Toolbar -->
    </div>
</header>