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
</style>
<body>
<div class="content">
    <span><a href="<?php echo $this->baseUrl . 'dashboard.php'; ?>">Go Back</a></span>
    <table>
        <tr>
            <?php
                $j=1;
                $i=0;
                foreach ($imgGallery as $img){
            ?>
                <?php echo ($i==0)?"<tr>":""; ?>
                <?php echo ($j>=3)?"<tr>":""; ?>
                    <td>
                        <img style="max-width:350px; max-height: 400px; min-width=100px; min-height=100px;" src="<?php echo $this->baseUrl . 'upload/img/' . $img['media_file_path']; ?>" />
                    </td>
                <?php echo ($j++>=3)?"</tr>":""; ?>
                <?php $j=($j>3)?0:$j+1; ?>
                <?php echo ($i++==0)?"</tr>":""; ?>
            <?php } ?>

        </tr>

    </table>

</div>
</body>
</html>