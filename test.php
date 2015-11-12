<div id="photo-plugin"></div>
<script src="http://az412349.vo.msecnd.net/pio/pio.latest.v2.js"></script>
<script>

    var el = document.getElementById('photo-plugin');

    var clickCount = 0;
    PIO.open({
        recipeId: "d672c387-aa6a-480f-8908-782843978773",
        countryCode:"US",
        currencyCode:"USD",
        languageCode:"en",
        embedInElement: el,
        iframeStyles: {
            width: "100%",
            height: "100%"
        },

        photosources: {


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
                sortOrder: 4,
                isInitiallyOpen: false
            },
            google: {
                enabled: false,
                sortOrder: 5,
                isInitiallyOpen: false
            },
            dropbox: {
                enabled: false,
                sortOrder: 6,
                isInitiallyOpen: false
            }
        }


    });
</script>