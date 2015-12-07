<?php namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class AppUser extends Model {

    protected $table = "user";

    public function service() {
        return $this->hasMany('App\Models\AppService', 'u_id', 'id');
    }

    public function login() {
        return $this->hasOne('App\Models\UserLogin', 'u_id', 'id');
    }

}
