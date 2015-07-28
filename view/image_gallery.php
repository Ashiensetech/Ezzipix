<?php require_once 'head.php' ?>
<style>
    body {
        margin: 10px auto 0;
        width: 980px;
    }

    .content {
        text-align: center;
    }

    .content table, td {
        border: 1px solid #000000;
    }

    .content td {
        padding: 2px 5px;
    }

    .form {
        width: 100%;
    }

    .error {
        color: #FF0000;
    }

    #img-gallery {
        width: 100%;
    }
    #img-gallery img{
        width: 31%;
        float: left;
        border: 1px solid #fff;
        padding: 4px;
        margin: 0 5px 10px 5px;
        box-shadow: 0px 0px 3px #000;
    }
</style>
<body>
<div class="content">
    <span><a href="<?php echo $this->baseUrl . 'dashboard.php'; ?>">Go Back</a></span>

    <div id="img-gallery">
    <?php
    $j = 1;
    $i = 0;
    foreach ($imgGallery as $img) { ?>
        <img style="" src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>"/>
    <?php } ?>
</div>

</div>
</body>
</html>