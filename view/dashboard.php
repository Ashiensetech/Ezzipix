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
                        echo $service['name'] . '(' . $service['service_user_id'] . ')<br/>';
                    }
                    ?>
                </td>
            </tr>
        <?php } ?>
    </table>
</div>
</body>
</html>