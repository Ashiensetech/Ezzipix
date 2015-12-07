<?php namespace App\Http\Controllers;

use App\Models\AppProvider;
use App\Models\AppUser;
use App\Services\Registrar;
use App\User;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;
use Illuminate\Support\Facades\Validator;

class HomeController extends Controller {

    /*
    |--------------------------------------------------------------------------
    | Home Controller
    |--------------------------------------------------------------------------
    |
    | This controller renders your application's "dashboard" for users that
    | are authenticated. Of course, you are free to change or remove the
    | controller as you wish. It is just here to get your app started!
    |
    */

    /**
     * Create a new controller instance.
     * @return void
     */
    public function __construct() {
        $this->middleware('auth');
    }

    /**
     * Show the application dashboard to the user.
     * @return Response
     */
    public function index() {
        return view('app.dashboard');
    }

    public function getUser($id = NULL, $service = NULL) {
        $data  = NULL;
        $class = $service;

        if ($id != NULL && $service != NULL) {
            $service = ucwords($service);
            $service = AppProvider::select('id')->where('name', '=', $service)->first()->id;

            $data          = AppUser::where('id', '=', $id)
                                    ->with(['service' => function ($q) use ($service) {
                                        $q->where('service_provider_id', '=', $service);
                                        $q->with('data');
                                    }])
                                    ->first();
            $data['class'] = $class;
        } else if ($id != NULL) {
            $data          = AppUser::with('service')
                                    ->with('service.data')
                                    ->where('id', '=', $id)
                                    ->first();
            $data['class'] = $class;
        } else {
            $data = AppUser::with('login')->get();
        }

        if ($id) {
            return view('app.viewImage', compact('data'));
        }

        return view('app.users', compact('data'));
    }

    public function postAdmin(Request $request, Registrar $registrar) {
        $validator = $registrar->validator($request->input());
        if ($validator->fails()) {
            return back()->withInput()->withErrors($validator);
        }

        $registrar->create($request->input());

        return redirect('app/admin');
    }

    public function getAdmin($action = NULL, $id = NULL) {
        switch ($action) {
            case 'new':
                return $this->newAdmin();
                break;
            case 'edit':
                return $this->editAdmin($id);
                break;
            case 'delete':
                return $this->adminDelete($id);
                break;
        }

        $admin  = Auth::user();
        $admins = User::where('id', '!=', $admin->id)->get();

        return view('app.admin.admins', ['admins' => $admins]);
    }

    public function newAdmin() {
        return view('app.admin.new');
    }

    public function editAdmin($id) {
        if (gettype($id + 0) != 'integer') {
            return redirect('app/admin');
        }

        $admin = User::find($id);

        if (!$admin) {
            return redirect('app/admin');
        }

        return view('app.admin.edit', ['admin' => $admin]);
    }

    public function postEdit(Request $request, $id) {
        if (gettype($id + 0) != 'integer') {
            return redirect('app/admin');
        }

        $admin = User::find($id);

        if (!$admin) {
            return redirect('app/admin');
        }

        $data = $request->input();
        $rule = [];

        if ($data['password']) {
            $rule = [
                'name'     => 'required|max:255',
                'email'    => 'required|email|max:255|unique:admin_users,email,' . $id . ',id',
                'password' => 'required|confirmed|min:6',
            ];
        } else {
            $rule = [
                'name'  => 'required|max:255',
                'email' => 'required|email|max:255|unique:admin_users,email,' . $id . ',id',
            ];
        }

        $validator = Validator::make($data, $rule);

        if ($validator->fails()) {
            return back()->withInput()->withErrors($validator);
        }

        if ($data['password']) {
            $data['password'] = bcrypt($data['password']);
        } else {
            array_forget($data, ['password']);
        }

        $admin->update($data);

        return redirect('app/admin');
    }

    public function adminDelete($id) {
        if (gettype($id + 0) != 'integer') {
            return redirect('app/admin');
        }

        $admin = User::find($id);

        if (!$admin) {
            return redirect('app/admin');
        }

        $admin->delete();

        return redirect('app\admin');
    }
}
