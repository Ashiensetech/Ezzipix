<?php require_once 'head.php' ?>
<style>
    body{
        margin: 10px auto 0;
        width: 980px;
    }
    .content{
        text-align: center;
    }
    .content table , td{
        border: 1px solid #000000;
    }
    .content td{
        padding: 2px 5px;
    }
    .form{
        width: 100%;
    }
    .error{
        color: #FF0000;
    }
</style>
    <body>
    <div class="content">
        <span><a href="<?php echo $this->baseUrl.'dashboard.php';?>">Go Back</a></span>
        <table>
            <?php for($i=0;$i<10;$i++){ ?>
                <tr>
                    <?php for($j=0;$i<10 && $j<3;$j++){ ?>
                        <td>
                            <img style="max-width:350px; max-height: 400px; min-width=100px; min-height=100px;" src="<?php echo $this->baseUrl.'upload\img\1.png';?>" />
                        </td>
                    <?php } ?>

                </tr>
            <?php } ?>
        </table>
    </div>
    </body>
</html>