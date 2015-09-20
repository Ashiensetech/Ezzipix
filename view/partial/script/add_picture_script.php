<script>
var socialPhoto = {"instagram":[],"facebook":[],"dropbox":[]};
function addPictureToSave(SocialMediaId,elem){
    $('#processMsg').html("");
    var url = $(elem).attr("url");
    var parent = $(elem).parents(".photoParent").first();
    var check = $(parent).find(".checkIcon").first();
    var styleStr = $(check).attr('style');
    var disPlayAction ="";
    if(styleStr!=""){
        var displyStr = styleStr.split(":")
        disPlayAction = displyStr[1].trim();
    }
    console.log(disPlayAction);
    if(disPlayAction=="none;"){
        socialPhoto[SocialMediaId].push(url);
        $(check).show();
    }else{
        var index = socialPhoto[SocialMediaId].indexOf(url);
        if(index>-1){
            socialPhoto[SocialMediaId].splice(index, 1);
        }
        $(check).hide();
    }
    console.log(socialPhoto);
    $(elem).parents(".photoParent").first().find("checkIcon").show();

    if(socialPhoto[SocialMediaId].length > 0){
        $('#saveBtnDiv').css("visibility","visible");
    }else{
        $('#saveBtnDiv').css("visibility","hidden");
    }
}
//var imgJobjArray = JSON.parse($("#allImg").val())
//var images = [];
//for (var key in imgJobjArray) {
//    images.push(BaseUrl + "upload/img/" + imgJobjArray[key].media_file_path);
//}
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
    function uploadPictures(socialMediaId){
        $("#loadingImg").show();
        $('#processMsg').html("Processing....");
        if(socialPhoto[socialMediaId].length==0){
            $("#loadingImg").hide();
            $('#processMsg').html("No image selected");
            return;
        }

        $.ajax({
            url: BaseUrl+"social_media.php?r=submitdata",
            type: "POST",
            data: {
                "service_provider":socialMediaId,
                "images": JSON.stringify(socialPhoto[socialMediaId])
            },
            success: function (data) {
                $("#loadingImg").hide();
               var response = JSON.parse(data);
                if(response.status){
                    $('#processMsg').html(response.msg+" <a href='"+BaseUrl+"media.php?r=all' >Go to image gallery</a>");
                }else{
                    $('#processMsg').html(response.msg);
                }

            }
        });
    }
</script>
<style>
    .checkIconDiv{
        display: inline-block;
        position: absolute;
        top: 0px;
        z-index: 45;
    }
    .submitBtnDiv{
        visibility: hidden;
        float: left;
        padding: 0px 0px 13px 0px;
    }
</style>