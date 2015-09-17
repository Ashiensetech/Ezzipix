<!DOCTYPE html>
<html class="frontend">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/css/magnific.css'; ?>">
<link rel="stylesheet" href="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/css/owl-carousel.css'; ?>">
<?php include_once 'partial/head.php' ?>
<script src="<?php echo $this->baseUrl . "js/printio/pio.latest.v2.js"; ?>"></script>

<link href="filer/css/jquery.filer.css" type="text/css" rel="stylesheet"/>
<link href="filer/css/themes/jquery.filer-dragdropbox-theme.css" type="text/css" rel="stylesheet"/>

<body>
<?php include_once 'partial/menu.php'; ?>
<section id="main" role="main">
    <section class="page-header page-header-block nm">
        <div class="pattern pattern9"></div>
        <div class="container pt15 pb15">
            <div class="page-header-section">
            </div>
            <div class="page-header-section">
                <div class="toolbar">
                    <ol class="breadcrumb breadcrumb-transparent nm">
                        <li><a href="javascript:void(0);" onclick="openPIO()">Print</a></li>
                        <li class="active">
                            <a href="javascript:void(0);" onclick="openPIO()"><span class="icon"><i class="ico-print"></i></span></a>
                        </li>
                    </ol>
                </div>
            </div>
        </div>
    </section>
    <div class="clearfix"></div>
    <section class="section bgcolor-white">
        <div class="container">
            <div class="row">
                <div class="row shuffle clearfix">
                    <div class="col-lg-12"><input type="file" multiple="multiple" name="files[]" id="input2"></div>
                </div>
            </div>
        </div>
    </section>
    <a href="#" class="totop animation" data-toggle="waypoints totop" data-showanim="bounceIn" data-hideanim="bounceOut" data-offset="50%"><i class="ico-angle-up"></i></a>
</section>
<?php include_once 'partial/footer.php' ?>
<?php include_once 'partial/core_script.php' ?>

<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/smoothscroll/js/smoothscroll.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/magnific/js/jquery.magnific-popup.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/owl/js/owl.carousel.js'; ?>"></script>
<script type="text/javascript" src="<?php echo $this->baseUrl . 'html_template/dist/plugins/shuffle/js/jquery.shuffle.js'; ?>"></script>
<!--<script type="text/javascript" src="-->
<?php //echo $this->baseUrl . 'html_template/dist/javascript/frontend/pages/portfolio.js'; ?><!--"></script>-->
<!--<input id="allImg" type="hidden" value='--><?php //echo $allImg; ?><!--'/>-->
<script type="text/javascript">
    var socialPhoto = {"instagram": [], "facebook": []}
    function addPictureToSave(SocialMediaId, elem) {
        var url = $(elem).attr("url");
        var parent = $(elem).parents(".photoParent").first();
        var check = $(parent).find(".checkIcon").first();
        var styleStr = $(check).attr('style');
        var disPlayAction = "";
        if (styleStr != "") {
            var displyStr = styleStr.split(":")
            disPlayAction = displyStr[1].trim();
        }

        console.log(disPlayAction);
        if (disPlayAction == "none;") {
            socialPhoto["instagram"].push(url);
            $(check).show();
        } else {
            var index = socialPhoto["instagram"].indexOf(url);
            if (index > -1) {
                socialPhoto["instagram"].splice(index, 1);
            }
            $(check).hide();
        }
        console.log(socialPhoto);
        $(elem).parents(".photoParent").first().find("checkIcon").show();

    }
    var imgJobjArray = JSON.parse($("#allImg").val())
    var images = [];
    for (var key in imgJobjArray) {
        images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
    }
    $(document).ready(function () {

        PIO.config({
            recipeId: "d672c387-aa6a-480f-8908-782843978773"
        });
    });
    function openPIO() {
        PIO.open({
            photosources: {

                local: {
                    enabled: false,
                    sortOrder: 1,
                    isInitiallyOpen: false
                },
                facebook: {
                    enabled: false,
                    sortOrder: 2,
                    isInitiallyOpen: false
                },
                instagram: {
                    enabled: false,
                    sortOrder: 2,
                    isInitiallyOpen: false
                },
                photobucket: {
                    enabled: false,
                    sortOrder: 3,
                    isInitiallyOpen: false
                },
                flickr: {
                    enabled: false,
                    sortOrder: 5,
                    isInitiallyOpen: false
                },
                google: {
                    enabled: false,
                    sortOrder: 6,
                    isInitiallyOpen: false
                },
                dropbox: {
                    enabled: false,
                    sortOrder: 7,
                    isInitiallyOpen: false
                }, custom: {
                    sortOrder: 8,
                    enabled: true,
                    isInitiallyOpen: true,
                    // an icon for the tab, should be 48x48 px
                    iconUrl: BaseUrl + 'img/icon.jpg'
                },
            }, fns: {

                // function that handles custom photo source data
                // request is an object like { page: 1, folder: "" }
                // replyFn is a callback that takes an object like
                /// { id:"", page: 1, totalPages: 1, items: [] }
                /// where items contains objects like
                /// { picture: "http://hi.com/hi.jpg" } for images
                /// { id: "", isFolder: true, name: ""} for folders
                onPhotoSourceReq: function (request, replyFn) {
                    // if the request is for the root
                    var picture = {};
                    var pictureArray = [];
                    //pictureArray.push({id: "f1", isFolder: true, name: "fave pics"}); // Create new folder
                    for (var i = 0; i < images.length; i++) {
                        picture = {picture: images[i]}
                        pictureArray.push(picture);
                    }
                    replyFn({
                        id: "",
                        page: 1,
                        totalPages: 1,
                        items: pictureArray
//                            items: [
//                                // pass in that there is a folder
//                                {id: "f1", isFolder: true, name: "fave pics"},
//
//                                // pass in three images
//                                {picture: "http://img.ffffound.com/static-data/assets/6/8fc3b482de5086f5f6bb64b75805b3413936c49a_m.png"},
//                                {picture: "http://img.ffffound.com/static-data/assets/6/c9c55336befdeae882e2d1794fc13888053e7f66_m.png"},
//                                {picture: "http://img.ffffound.com/static-data/assets/6/6dc8a64f665183d97a37e44cac72410531ec0978_m.png"}
//                            ]
                    });
                }
            }
        });
    }


</script>
<style type="text/css">
    .checkIconDiv {
        display: inline-block;
        position: absolute;
        top: 0px;
        right: 171px;
        z-index: 45;
    }
</style>


<script type="text/javascript" src="filer/js/jquery.filer.min.js"></script>
<script type="text/javascript">
    $(document).ready(function () {
        $('#input2').filer({
            limit: null,
            maxSize: null,
            extensions: null,
            changeInput: '<div class="jFiler-input-dragDrop"><div class="jFiler-input-inner"><div class="jFiler-input-icon"><i class="icon-jfi-cloud-up-o"></i></div><div class="jFiler-input-text"><h3>Drag&Drop files here</h3> <span style="display:inline-block; margin: 15px 0">or</span></div><a class="jFiler-input-choose-btn blue">Browse Files</a></div></div>',
            showThumbs: true,
            appendTo: null,
            theme: "dragdropbox",
            templates: {
                box: '<ul class="jFiler-item-list"></ul>',
                item: '<li class="jFiler-item">\
                            <div class="jFiler-item-container">\
                                <div class="jFiler-item-inner">\
                                    <div class="jFiler-item-thumb">\
                                        <div class="jFiler-item-status"></div>\
                                        <div class="jFiler-item-info">\
                                            <span class="jFiler-item-title"><b title="{{fi-name}}">{{fi-name | limitTo: 25}}</b></span>\
                                        </div>\
                                        {{fi-image}}\
                                    </div>\
                                    <div class="jFiler-item-assets jFiler-row">\
                                        <ul class="list-inline pull-left">\
                                            <li>{{fi-progressBar}}</li>\
                                        </ul>\
                                        <ul class="list-inline pull-right">\
                                            <li><a class="icon-jfi-trash jFiler-item-trash-action"></a></li>\
                                        </ul>\
                                    </div>\
                                </div>\
                            </div>\
                        </li>',
                itemAppend: '<li class="jFiler-item">\
                            <div class="jFiler-item-container">\
                                <div class="jFiler-item-inner">\
                                    <div class="jFiler-item-thumb">\
                                        <div class="jFiler-item-status"></div>\
                                        <div class="jFiler-item-info">\
                                            <span class="jFiler-item-title"><b title="{{fi-name}}">{{fi-name | limitTo: 25}}</b></span>\
                                        </div>\
                                        {{fi-image}}\
                                    </div>\
                                    <div class="jFiler-item-assets jFiler-row">\
                                        <ul class="list-inline pull-left">\
                                            <span class="jFiler-item-others">{{fi-icon}} {{fi-size2}}</span>\
                                        </ul>\
                                        <ul class="list-inline pull-right">\
                                            <li><a class="icon-jfi-trash jFiler-item-trash-action"></a></li>\
                                        </ul>\
                                    </div>\
                                </div>\
                            </div>\
                        </li>',
                progressBar: '<div class="bar"></div>',
                itemAppendToEnd: false,
                removeConfirmation: false,
                _selectors: {
                    list: '.jFiler-item-list',
                    item: '.jFiler-item',
                    progressBar: '.bar',
                    remove: '.jFiler-item-trash-action',
                }
            },
            uploadFile: {
                url: "./social_media.php?r=upload",
                data: {},
                type: 'POST',
                enctype: 'multipart/form-data',
                beforeSend: function () {
                },
                success: function (data, el) {
                    var parent = el.find(".jFiler-jProgressBar").parent();
                    el.find(".jFiler-jProgressBar").fadeOut("slow", function () {
                        $("<div class=\"jFiler-item-others text-success\"><i class=\"icon-jfi-check-circle\"></i> Success</div>").hide().appendTo(parent).fadeIn("slow");
                    });
                },
                error: function (el) {
                    var parent = el.find(".jFiler-jProgressBar").parent();
                    el.find(".jFiler-jProgressBar").fadeOut("slow", function () {
                        $("<div class=\"jFiler-item-others text-error\"><i class=\"icon-jfi-minus-circle\"></i> Error</div>").hide().appendTo(parent).fadeIn("slow");
                    });
                },
                statusCode: {},
                onProgress: function () {
                },
            },
            dragDrop: {
                dragEnter: function () {
                },
                dragLeave: function () {
                },
                drop: function () {
                },
            },
            addMore: true,
            clipBoardPaste: true,
            excludeName: null,
            beforeShow: function () {
                return true
            },
            onSelect: function () {
            },
            afterShow: function () {
            },
            onRemove: function () {
                console.log("hehe");
                return false;
            },
            onEmpty: function () {
            },
            captions: {
                button: "Choose Files",
                feedback: "Choose files To Upload",
                feedback2: "files were chosen",
                drop: "Drop file here to Upload",
                removeConfirmation: "Are you sure you want to remove this file?",
                errors: {
                    filesLimit: "Only {{fi-limit}} files are allowed to be uploaded.",
                    filesType: "Only Images are allowed to be uploaded.",
                    filesSize: "{{fi-name}} is too large! Please upload file up to {{fi-maxSize}} MB.",
                    filesSizeAll: "Files you've choosed are too large! Please upload files up to {{fi-maxSize}} MB."
                }
            }
        });
    });
</script>

<style type="text/css">
    .file_input {
        display: inline-block;
        padding: 10px 16px;
        outline: none;
        cursor: pointer;
        text-decoration: none;
        text-align: center;
        white-space: nowrap;
        font-family: sans-serif;
        font-size: 11px;
        font-weight: bold;
        border-radius: 3px;
        color: #008BFF;
        border: 1px solid #008BFF;
        vertical-align: middle;
        background-color: #fff;
        margin-bottom: 10px;
        box-shadow: 0px 1px 5px rgba(0, 0, 0, 0.05);
        -webkit-transition: all 0.2s;
        -moz-transition: all 0.2s;
        transition: all 0.2s;
    }

    .file_input:hover,
    .file_input:active {
        background: #008BFF;
        color: #fff;
    }
</style>
</body>
<!--/ END Body -->
</html>