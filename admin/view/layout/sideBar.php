<script>
    function check(flag){
        var id;
        if(flag==1){
            id="whatsapp";
        }else if(flag==2){
            id="telegram";
        }else if(flag==3){
            id="wstatus";
        }else if(flag==4){
            id="tstatus"
        }
        var xhttp = new XMLHttpRequest();
        xhttp.onreadystatechange = function() {
            if (xhttp.readyState == 4 && xhttp.status == 200) {
               // document.getElementById("demo").innerHTML = xhttp.responseText;
                alert(xhttp.responseText);
            }
        };
        xhttp.open("GET", "ServerScriptController.php?r="+id, true);
        xhttp.send();
    }


</script>

<aside class="main-sidebar">
    <section class="sidebar">
        <ul class="sidebar-menu">
           <li class="treeview">
                <a href="AdminDashboard.php">
                    <i class="fa fa-dashboard"></i> <span>Dashboard</span>
                </a>
            </li>

            <li class="treeview" style="display: none">
                <a href="{{ url("app/user") }}">
                    <i class="fa fa-picture-o"></i> <span>User Pictures</span>
                </a>
            </li>

            <li class="treeview">
                <a href="#">
                    <i class="fa fa-users"></i>
                    <span>Users</span>
                    <i class="fa fa-angle-left pull-right"></i>
                </a>
                <ul class="treeview-menu">
                    <li><a href="UserController.php"><i class="fa fa-users"></i> App Users</a></li>
                    <li><a href="Admin.php"><i class="fa fa-users"></i> App Admins</a></li>
                    <li><a href="Admin.php?a=getAdminUserForm"><i class="fa fa-users"></i> New Admin</a></li>
                </ul>
            </li>

            <li class="treeview">
                <a href="#">
                    <i class="fa fa-users"></i>
                    <span>Reset Server</span>
                    <i class="fa fa-angle-left pull-right">

                    </i>
                </a>
                <ul class="treeview-menu">
                    <li><a onclick="check(1);" href="#"><i class="fa fa-users"></i>Reset WhatsApp</a></li>

                    <li><a onclick="check(3);" href="#"><i class="fa fa-users"></i>Whats-app Status </a></li>

                </ul>
            </li>
            <li class="treeview">
                <a href="AdminDashboard.php?r=logout">
                    <i class="fa fa-power-off"></i> <span> Logout</span>
                </a>
            </li>
        </ul>
    </section>

</aside>
