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
    <form action="" onsubmit="return signup();">
        <table align="center">
            <tr>
                <td>Name :</td>
                <td><input class='mendatory' type="text" id="name" /></td>
            </tr> 
            <tr>
                <td>Gender</td>
                <td>
                    <select class='mendatory' type="text" id="gender" >
                        <option value='' >Select a gender </option>
                        <option value='female'>Female</option>    
                        <option vlaue='male'>Male</option>
                    </select>
                </td>
            </tr> 
            
            <tr>
                <td>Email</td>
                <td><input class='mendatory' type="text" id="email" /></td>
            </tr> 
            <tr>
                <td>Password :</td>
                <td> <input class='mendatory' type="password" id="password" /></td>
            </tr>
             <tr>
                <td></td>
                <td><div id='msg'></div></td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td><input class='mendatory' type="submit" value="Submit" /></td>
            </tr>
           
        </table>
    </form>
</div>
</body>
</html>
<script>
    function signup(){
        var valid = true;
        var errorMsg = "";
        $('#msg').html("");
        $('.mendatory').each(function(){
            if(valid && $(this).val() == ""){
                if($(this).prop("tagName") == "SELECT"){
                     errorMsg = "Select "+$(this).attr("id"); 
                }else{
                     errorMsg = $(this).attr("id")+" field requred"; 
                }
               
                $(this).focus();
                valid = false;
                return;                 
            }           
        });
         var re = /^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i;
     
        if($('#email').val()!="" && !re.test($('#email').val())){
            $('#email').focus();
             valid = false;
             errorMsg ='Email is not in valid format';            
        } 
        if($('#password').val()!="" && $('#password').val().length<6){
            $('#password').focus();
             valid = false;
             errorMsg ='At leat 6 digit required';            
        } 
        if(!valid){
            $('#msg').html(errorMsg);
            return false;
        }
        
        var name = $('#name').val();
        var gender = $('#gender').val();
        
        var email = $('#email').val();
        var password = $('#password').val();
       
        
        $('#msg').html("");
          $.ajax({
            url: "?r=register",
            method: "POST",
            data: {
                "name":name,
                "gender":gender,
                "email": email,
                "password": password
            },
            success: function (data) {
                var resp = jQuery.parseJSON(data);
                $('#msg').html(resp.msg);
                $('#msg').delay(3000).fadeOut(500,function(){
                    if(resp.regStatus){
                        window.location.href = BaseUrl+'login'+phpSuffix;
                    } 
                });
                               
            }
        });
        return false;
    }
</script>