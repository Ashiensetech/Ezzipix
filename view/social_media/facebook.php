<script src="jquery-1.11.0.min.js" ></script>
<script>
    window.fbAsyncInit = function() {
        FB.init({
            appId      : '463781567135228',
            xfbml      : true,
            version    : 'v2.4'
        });
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
    function fbLogin(){
      //  FB.login(function(){}, {scope: 'publish_actions'});
        FB.getLoginStatus(function(response) {
            if (response.status === 'connected') {
                console.log('Logged in.');
                if (response.authResponse) {
                    console.log(response.authResponse.accessToken);
                    getData(response.authResponse.accessToken);

                }

            }else {
                FB.login(function(response){
                    if (response.authResponse) {

                    }
                }, {scope: 'email,user_likes,user_posts,user_photos'});
            }
        });
    }

    function getData(access_token){
        FB.api('/me', function(response)
        {
            console.log ("Welcome " + response.name + ": Your UID is " + response.id);
            getPhoto(response.id,access_token);
        });
    }

    function getPhoto(user_id,access_token) {
        console.log (": Your UID is " + user_id);
        FB.api(
            "/"+user_id+"/photos/uploaded?access_token="+access_token,
            function (response) {
                if (response && !response.error) {
                    for(var i=0;i<response.data.length;i++){
                        console.log (response.data[i].id);
                        var picId = response.data[i].id;
                        getSinglePicture(picId);
                    }


                }
            }
        );
    }
    function getSinglePicture(picId){
        FB.api(
            "/"+picId+"/picture",
            function (response) {
                if (response && !response.error) {
                    console.log("Image Url :"+response.data.url);
                    $("#imgHolder").append("<img src='"+response.data.url+"' />");
                  console.log(response);
                }
            }
        );
    }
</script>
<input type="button" onclick="fbLogin()" value="Initiate" />
<div id="imgHolder">

</div>