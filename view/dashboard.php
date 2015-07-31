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
    <table align = "center">
        <tr>
            <td>Action :</td>
            <td><a href = "dashboard.php?r=logout">Logout</a></td>
        </tr>
        <tr>
            <td>Full name :</td>
            <td><?php echo @$user['full_name'] ?></td>
        </tr>
        <tr>
            <td>Email :</td>
            <td><?php echo @$user['email'] ?></td>
        </tr>
        <tr>
            <td>Gender :</td>
            <td><?php echo @$user['gender'] ?></td>
        </tr>

        <tr>
            <td>Add Service :</td>
            <td><a href = "service.php?r=new">Add New Service</a></td>
        </tr>
        <?php if (@$services && @$services != NULL) { ?>
            <tr>
                <td>Added Service :</td>
                <td>
                    <?php
                    foreach ($services as $service) {
                        ?>
                        <div stye="float:left;">
                           <?php

                                echo $service['name'] . '(' . $service['service_user_id'] . ')<br/>';
                            ?>
                            <input style="display:none;float: right;" type="button" value="Cancel" onclick="cancelService('<?php echo $service['spId'];?>','<?php echo $service['service_user_id'];?>',this)" />
                        </div>
                    <?php
                    }
                    ?>
                </td>
            </tr>
        <?php } ?>
        <tr>
            <td></td>
            <td><a href="<?php echo $this->baseUrl.'media.php?r=all'; ?>">Image Gallery</a></td>
        </tr>
        <tr>
            <td>&nbsp;</td>
            <td><div id="msg"></div></td>
        </tr>
    </table>
</div>
<script>
    function cancelService(serviceProviderId,userServiceId,elem){

        $("#verification_code_msg").css({'display': 'none'});

        var url = BaseUrl+"service"+phpSuffix;

        $.ajax({
            url: url + "?r=deactiveUserService",
            method: "POST",
            data: {
                "service_provider_id": serviceProviderId,
                "service_user_id": userServiceId
            },
            success: function (data) {
                var data = JSON.parse(data);
                if (data.status) {
                    $(elem).parents("tr").first().hide();

                }

                $("#msg").html(data.msg);
               // $("#verification_code_msg").css({'display': ''});
            }
        });
    }
</script>
</body>
</html>