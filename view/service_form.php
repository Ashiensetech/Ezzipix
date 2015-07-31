<?php
include_once 'head.php';
?>
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
</style>
<body>
<div class = "content">
    <form action = "" onsubmit = "return false;">
        <table align = "center">
            <tr id = "verification_code_msg" style = "display: none">
                <td colspan = "2">
                    <div id = 'msg'></div>
                </td>
            </tr>
            <tr>
                <td>Select Service :</td>
                <td>
                    <select name = "service_provider_id" id = "service_provider_id" onchange="whatsAppPhoneNumberConvention()">
                        <option value = "">Select a Service</option>
                        <?php
                        if (@$services) {
                            foreach ($services as $service) {
                                ?>
                                <option value = "<?php echo $service['id'] ?>"><?php echo $service['name'] ?></option>
                            <?php
                            }
                        } ?>
                    </select>
                </td>
            </tr>
            <tr>
                <td>Service ID :</td>
                <td><input type = "service_user_id" id = "service_user_id" /></td>
            </tr>
            <tr id = "verification_code_tr" style = "display: none">
                <td>Verification Code :</td>
                <td>
                    <input type = "verification_code" id = "verification_code"/>&nbsp;
                    <input type = "button" onclick = "sendCode();" value = "Resend Code"/>
                </td>

            </tr>
            <tr id = "verification_code_send">
                <td>&nbsp;</td>
                <td><input type = "button" onclick = "sendCode();" value = "Get Verification Code"/></td>
            </tr>
            <tr id = "verification_code_submit" style = "display: none">
                <td>&nbsp;</td>
                <td><input type = "button" onclick = "addService();" value = "Submit You Code"/></td>
            </tr>

        </table>
    </form>
</div>
<div style = "display: none" id = "page_url" value = "<?php echo htmlentities($_SERVER['PHP_SELF']); ?>"></div>
</body>

<script type = "text/javascript">
    function whatsAppPhoneNumberConvention(){
        if($("#service_provider_id option:selected").text() == "Whats App"){
            $("#service_user_id").attr("placeholder","Phone number without '+' ");
        }

    }
    function sendCode() {

        $("#verification_code_tr").css({'display': 'none'});
        $("#verification_code_msg").css({'display': 'none'});

        var url = $("#page_url").val();
        var service_provider_id = $("#service_provider_id").val();
        var service_user_id = $("#service_user_id").val();

        $.ajax({
            url: url + "?r=sendCode",
            method: "POST",
            data: {
                "service_provider_id": service_provider_id,
                "service_user_id": service_user_id
            },
            success: function (data) {
                data = JSON.parse(data);
                if (data.status) {
                    $("#verification_code_tr").css({'display': ''});
                    $("#verification_code_send").css({'display': 'none'});
                    $("#verification_code_submit").css({'display': ''});
                }
                $("#msg").html(data.message);
                $("#verification_code_msg").css({'display': ''});
            }
        });
    }

    function addService() {
        $("#verification_code_msg").css({'display': 'none'});

        var url = $("#page_url").val();
        var service_provider_id = $("#service_provider_id").val();
        var service_user_id = $("#service_user_id").val();
        var token = $("#verification_code").val();

        $.ajax({
            url: url + "?r=submitCode",
            method: "POST",
            data: {
                "service_provider_id": service_provider_id,
                "service_user_id": service_user_id,
                "token": token
            },
            success: function (data) {
                var data = JSON.parse(data);
                if (data.status) {
                    window.location.href = 'dashboard'+phpSuffix+'?r=index';
                }

                $("#msg").html(data.message);
                $("#verification_code_msg").css({'display': ''});
            }
        });
    }
</script>
</html>