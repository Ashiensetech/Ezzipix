<aside class="main-sidebar">
    <section class="sidebar">
        <ul class="sidebar-menu">
           <li class="treeview">
                <a href="AdminDashboard.php">
                    <i class="fa fa-dashboard"></i> <span>Dashboard</span>
                </a>
            </li>

            <li class="treeview">
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
                <a href="{{ url("logout") }}">
                    <i class="fa fa-power-off"></i> <span> Logout</span>
                </a>
            </li>
        </ul>
    </section>
</aside>