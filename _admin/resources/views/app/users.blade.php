@extends("layout.master")

@section("content")
    <div class="box">
        <div class="box-header">
            <h3 class="box-title">{{ 'App Users List' }}</h3>
        </div>
        <div class="box-body">
            <table id="data-table" class="table table-bordered table-striped">
                <thead>
                <tr>
                    <th>SL</th>
                    <th>Name</th>
                    <th>Email</th>
                    <th>Gender</th>
                    <th>DOB</th>
                    <th>Action</th>
                </tr>
                </thead>
                <tbody>
                {{-- */ $i = 1; /* --}}
                @foreach($data as $user)
                    <tr>
                        <td>{{ $i }}</td>
                        <td class="text-capitalize">{{ $user->first_name }} {{ $user->last_name }}</td>
                        <td>{{ @$user->login->email }}</td>
                        <td class="text-capitalize">{{ @$user->gender }}</td>
                        <td>{{ @$user->dob }}</td>
                        <td><a href="{{ url('app/user/'.$user->id) }}">View Image</a></td>
                    </tr>
                    {{-- */ $i++; /* --}}
                @endforeach
                </tbody>
            </table>
        </div>
    </div>
@endsection

@section("css")
    @parent
    <link rel="stylesheet" href="{{ url("plugins/datatables/dataTables.bootstrap.css") }}">
    @endsection

    @section("script-bottom")
    @parent
            <!-- DataTables -->
    <script src="{{ url("plugins/datatables/jquery.dataTables.min.js") }}"></script>
    <script src="{{ url("plugins/datatables/dataTables.bootstrap.min.js") }}"></script>
@endsection

@section("raw-script")
    @parent

    <script>
        $(function () {
            $("#data-table").DataTable();
        });
    </script>
@endsection