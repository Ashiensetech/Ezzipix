<?php 
    include_once 'head.php';
?>
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
    <form action="" onsubmit="return doLogin();">
        <table align="center" >

            <tr>
                <td>Email</td>
                <td><input type="text" id="email" /></td>
            </tr> 
            <tr>
                <td>Password :</td>
                <td> <input type="password" id="password" /></td>
            </tr>
             <tr>
                <td></td>
                <td><div id='msg'></div></td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td><input type="submit" value="Submit" /></td>
            </tr>
           
        </table>
    </form>
</div>
</body>
</html>
<script>
    function doLogin(){
        var email = $('#email').val();
        var password = $('#password').val();
        $('#msg').html("");
          $.ajax({
            url: "?r=authinticate",
            method: "POST",
            data: {"email": email, "password": password},
            success: function (data) {
                var resp = jQuery.parseJSON(data);
                $('#msg').html(resp.msg);
                if(resp.loginStatus){
                    window.location.href = 'dashboard'+phpSuffix+'?r=index';
                }                
            }
        });
        return false;
    }
</script>