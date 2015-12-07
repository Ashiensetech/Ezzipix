<?php namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class AppService extends Model {

    protected $table = "user_service";

    public function data() {
        return $this->hasMany('App\Models\AppServiceData', 'user_service_id', 'id');
    }

}
