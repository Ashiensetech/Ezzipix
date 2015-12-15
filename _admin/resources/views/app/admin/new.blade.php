<!--
 * File     : edit.blade.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 -->

@extends("layout.master")

@section("content")
    <div class="box box-info">
        <div class="box-header with-border">
            <h3 class="box-title">Add Admin</h3>
        </div>
        @if (count($errors) > 0)
            <div class="alert alert-danger">
                <strong>Whoops!</strong> There were some problems with your input.<br><br>
                <ul>
                    @foreach ($errors->all() as $error)
                        <li>{{ $error }}</li>
                    @endforeach
                </ul>
            </div>
        @endif
        {!! Form::open(['url' => url('app/admin'), 'method' => 'post', "class" => "form-horizontal"]) !!}
            @include('app.admin.form')
            <div class="box-footer">
                <button type="submit" class="btn btn-info pull-right">Add Admin</button>
            </div>
        {!! Form::close() !!}
    </div>
@endsection