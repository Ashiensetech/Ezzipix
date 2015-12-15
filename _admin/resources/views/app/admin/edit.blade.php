<!--
 * Project  : dCard
 * File     : edit.blade.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/29/15 - 5:17 PM
 -->

@extends("layout.master")

@section("content")
    <div class="box box-info">
        <div class="box-header with-border">
            <h3 class="box-title">Update Admin Info</h3>
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
        {!! Form::model($admin, ['url' => 'app/edit/' . $admin->id, 'method' => 'post', "class" => "form-horizontal"]) !!}
        @include('app.admin.form')
        <div class="box-footer">
            <button type="submit" class="btn btn-info pull-right">Update</button>
        </div>
        {!! Form::close() !!}
    </div>
@endsection