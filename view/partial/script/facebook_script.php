<script>
    var images = [];
    var picturelistSize=0;
    var picLoadCount = 0;
    window.fbAsyncInit = function () {
        FB.init({
            appId: '463781567135228',
            xfbml: true,
            version: 'v2.4'
        });
      //  fbLogin();
    };

    (function(d){
        var js, id = 'facebook-jssdk', ref = d.getElementsByTagName('script')[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement('script'); js.id = id; js.async = true;
        js.src = "//connect.facebook.net/en_US/all.js";
        ref.parentNode.insertBefore(js, ref);
    }(document));

    function opacityFreeMe(elem){
        $(elem).css("opacity","1");
    }
    function fbLogin() {
        //  FB.login(function(){}, {scope: 'publish_actions'});
        FB.getLoginStatus(function (response) {
            if (response.status === 'connected') {
                //console.log('Logged in.');
                if (response.authResponse) {
                    $("#fb_loginBtn").attr("disabled","disabled");
                    $("#shuffle-grid").show();
                    getData(response.authResponse.accessToken);
                }

            } else {
                FB.login(function (response) {

                    if (response.authResponse) {
                        console.log("Login FB DONE");

                        fbLogin();
                    }
                }, {scope: 'email,user_likes,user_posts,user_photos'});
            }
        });
    }

    function getData(access_token) {
        FB.api('/me', function (response) {
            $("#linker").html("Get Data From Facebook");
            console.log("Welcome " + response.name + ": Your UID is " + response.id);
            getPhoto(response.id, access_token);
        });
    }

    function getPhoto(user_id, access_token) {
        //console.log(": Your UID is " + user_id);
        FB.api(
            "/" + user_id + "/photos/uploaded?access_token=" + access_token,
            function (response) {
                if (response && !response.error) {
                    for (var i = 0; i < response.data.length; i++) {
                        //console.log(response.data[i].id);
                        var picId = response.data[i].id;
                    }

                    images = [];
                    getSinglePicture(response.data, 0, response.data.length);
                }
            }
        );
    }

    function getSinglePicture(data, i, l) {
        console.log(data);
        var picId = data[i].id;
        FB.api(
            "/" + picId + "/picture",
            function (response) {
                if (response && !response.error) {
                    ++i;
                    images.push(response.data.url);
                    if (i < l) {
                        getSinglePicture(data, i, l);
                        console.log(i + " " + l);
                    } else {
                        getHtmlData(images);
                    }
                }
            }
        );
    }

    function getHtmlData(images) {
        $.ajax({
            url: "facebook.php?r=htmlData",
            method: "POST",
            data: {
                "images": images
            },
            success: function (data) {
                $("#shuffle-grid").html(data);
                picturelistSize = images.length;

            }
        });
    }
    function loadCount(){
        picLoadCount++;

        console.log(picLoadCount+" "+picturelistSize);
        if(picLoadCount>=picturelistSize){
            triggerImageEffect();
        }
    }
    function triggerImageEffect(){
        $('#shuffle-grid').magnificPopup({
            delegate: '.magnific',
            type: 'image',
            gallery: {
                enabled: true
            }
        });

        // Carousel
        // ================================
        $('#lovely-client').owlCarousel({
            autoPlay: true,
            autoHeight : true,
            pagination : true
        });

        // Owl carousel
        // ================================
        $('#gallery-post').owlCarousel({
            lazyLoad: true,
            slideSpeed: 300,
            paginationSpeed: 400,
            singleItem: true,
            autoPlay: true,
            stopOnHover: true,
            navigation: true,
            pagination: false
        });

        // Shuffle
        // ================================
        var $grid   = $('#shuffle-grid'),
            $filter = $('#shuffle-filter'),
            $sort   = $('#shuffle-sort'),
            $sizer  = $grid.find('shuffle-sizer');

        // instatiate shuffle
        $grid.shuffle({
            itemSelector: '.shuffle',
            sizer: $sizer
        });

        // Filter options
        $filter.on('click', '.btn', function () {
            var $this = $(this),
                isActive = $this.hasClass('active'),
                group = isActive ? 'all' : $this.data('group');

            // Hide current label, show current label in title
            if (!isActive) {
                $('#shuffle-filter .active').removeClass('active');
            }

            $this.toggleClass('active');

            // Filter elements
            $grid.shuffle('shuffle', group);
        });

        // Sorting options
        $sort.on('change', function () {
            var sort = this.value,
                opts = {};

            // We're given the element wrapped in jQuery
            if (sort === 'date-created') {
                opts = {
                    reverse: true,
                    by: function ($el) {
                        return $el.data('date-created');
                    }
                };
            } else if (sort === 'title') {
                opts = {
                    by: function ($el) {
                        return $el.data('title').toLowerCase();
                    }
                };
            }

            // Filter elements
            $grid.shuffle('sort', opts);
        });

    }


</script>