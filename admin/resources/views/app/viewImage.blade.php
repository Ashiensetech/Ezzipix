@extends("layout.master")

@section("content")
    <div class="box">
        <div class="box-header">
            <h3 class="box-title">Images of {{ $data->full_name }}</h3>
        </div>
        <div class="box-body">
            <div class="nav clearfix">
                <ul class="filter-tab">
                    <li>
                        <a href="{{ url('app/user/'.$data->id) }}" class="{{ ($data->class)? '' : 'active' }}">All</a>
                    </li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/desktop') }}" class="{{ ($data->class == 'desktop')? 'active' : '' }}">My Device</a>
                    </li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/facebook') }}" class="{{ ($data->class == 'facebook')? 'active' : '' }}">Facebook</a>
                    </li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/instagram') }}" class="{{ ($data->class == 'instagram')? 'active' : '' }}">Instagram</a>
                    </li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/whats app') }}" class="{{ ($data->class == 'whats app')? 'active' : '' }}">Whats App</a></li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/dropbox') }}" class="{{ ($data->class == 'dropbox')? 'active' : '' }}">Dropbox</a>
                    </li>
                    <li>
                        <a href="{{ url('app/user/'.$data->id.'/telegram') }}" class="{{ ($data->class == 'telegram')? 'active' : '' }}">Telegram</a>
                    </li>
                </ul>
            </div>
            <div class="imagepreviewbox">
                @foreach($data->service as $service)
                    @foreach($service->data as $serviceData)
                        <div class="clearfix cke_float user-image" style="background: url('{{ url('../../upload/img/').'/'.@$serviceData->media_file_path }}') no-repeat">{{--<img src="{{ url('../../upload/img/').'/'.@$serviceData->media_file_path }}">--}}</div>
                    @endforeach
                @endforeach
            </div>
        </div>
    </div>
@endsection

@section("css")
    @parent
    <style type="text/css">
        .user-image {
            width: 32.5%;
            height: 400px;
            float: left;
            margin: 0 5px 5px 0;
            background-size: cover !important;
            background: no-repeat;
        }

        .user-image img{
            width: 100%;
        }

        .filter-tab{
            border-top: 4px solid #3C8DBC;
            /*margin: 15px;*/
            padding: 0px;
            /*margin-bottom: 15px;*/
            font-size: 0;
            clear: both;
            /* overflow: hidden; */
        }
        .filter-tab li{
            margin: 0px;
            padding: 0px;
            list-style: none;
            display: inline-block;
            /* margin-right: 7px; */
            position: relative;
            margin: 0 0 7px 0;
        }
        .filter-tab li:after{
            position: absolute;
            width: 13px;
            display: none;
            height: 2px;
            content: " ";
            background: #3C8DBC;
            right: -12px;
            top: 14px;
        }
        .filter-tab li:last-child:after{
            display: none;
        }
        .filter-tab li a{
            color: #444;
            /* font-size: 15px; */
            border: 0;
            display: block;
            padding: 10px 13px;
            line-height: 20px;
            text-decoration: none;
            font-size: 15px;
        }
        .filter-tab li a:hover{
            background: #3C8DBC;
            color: #fff;
        }
        .filter-tab li a.active{
            background: #3C8DBC;
            color: #fff;
        }
    </style>
@endsection

@section("script-bottom")
    @parent
@endsection

@section("raw-script")
    @parent
@endsection