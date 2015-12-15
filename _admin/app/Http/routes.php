<?php

Route::get('/', function () {
    return redirect('dashboard');
});

Route::get('dashboard', 'HomeController@getUser');

Route::group(['prefix' => 'app'], function () {
});

Route::controller('app', 'HomeController');
Route::get('login', 'Auth\AuthController@getLogin');
Route::post('login', 'Auth\AuthController@postLogin');
Route::get('logout', 'Auth\AuthController@getLogout');
