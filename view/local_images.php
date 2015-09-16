<!--
 * Project  : ezzipix
 * File     : local_images.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/16/15 - 4:08 PM
-->
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>Upload Image from Local Computer</title>

    <!--Stylesheets-->
    <link href="filer/css/jquery.filer.css" type="text/css" rel="stylesheet"/>
    <link href="filer/css/themes/jquery.filer-dragdropbox-theme.css" type="text/css" rel="stylesheet"/>

    <!--jQuery-->
    <script type="text/javascript" src="http://code.jquery.com/jquery-latest.min.js"></script>
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
                    url: "./lmedia.php?r=upload",
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

    <!--[if IE]>
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js" type="text/javascript"></script>
    <![endif]-->
</head>

<body>

<div>
    <input type="file" multiple="multiple" name="files[]" id="input2">
</div>
</body>
</html>