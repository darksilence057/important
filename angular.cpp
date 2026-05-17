install node and npm
npm install -g @angular/cli
ng new user-app
css
n
cd user-app
code .
open vs code terminal:
ng g c register
ng g c login
ng g c profile
in terminal: npm install bootstrap

in angular.json:
replace styles inside code with:
"node_modules/bootstrap/dist/css/bootstrap.min.css",
 "src/styles.css"

login.html:

<div class="container mt-5">

  <div class="card p-4 shadow">

    <h2 class="text-center mb-4">Login</h2>

    <form (ngSubmit)="loginUser()">

      <div class="mb-3">
        <label>Email</label>

        <input type="email"
               class="form-control"
               [(ngModel)]="email"
               name="email"
               required>
      </div>

      <div class="mb-3">
        <label>Password</label>

        <input type="password"
               class="form-control"
               [(ngModel)]="password"
               name="password"
               required>
      </div>

      <button class="btn btn-success w-100">
        Login
      </button>

    </form>

  </div>

</div>

login.ts:

import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { Router } from '@angular/router';

@Component({
  selector: 'app-login',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './login.html',
  styleUrl: './login.css'
})
export class Login {

  email = '';
  password = '';

  constructor(private router: Router) {}

  loginUser() {

    let storedUser = JSON.parse(localStorage.getItem('user') || '{}');

    if (
      this.email === storedUser.email &&
      this.password === storedUser.password
    ) {

      alert("Login Successful");

      this.router.navigate(['/profile']);

    } else {

      alert("Invalid Credentials");
    }
  }

}

profile.html:

<div class="container mt-5">

  <div class="card p-4 shadow">

    <h2 class="text-center mb-4">
      User Profile
    </h2>

    <h4>Name: {{ user.name }}</h4>

    <h4>Email: {{ user.email }}</h4>

  </div>

</div>

profile.ts:

import { Component } from '@angular/core';

@Component({
  selector: 'app-profile',
  standalone: true,
  imports: [],
  templateUrl: './profile.html',
  styleUrl: './profile.css'
})
export class Profile {

  user:any = {};

  ngOnInit() {

    this.user = JSON.parse(localStorage.getItem('user') || '{}');
  }

}

register.html:

<div class="container mt-5">

  <div class="card p-4 shadow">

    <h2 class="text-center mb-4">Register</h2>

    <form (ngSubmit)="registerUser()">

      <div class="mb-3">
        <label>Name</label>

        <input type="text"
               class="form-control"
               [(ngModel)]="user.name"
               name="name"
               required>
      </div>

      <div class="mb-3">
        <label>Email</label>

        <input type="email"
               class="form-control"
               [(ngModel)]="user.email"
               name="email"
               required>
      </div>

      <div class="mb-3">
        <label>Password</label>

        <input type="password"
               class="form-control"
               [(ngModel)]="user.password"
               name="password"
               required>
      </div>

      <button class="btn btn-primary w-100">
        Register
      </button>

    </form>

  </div>

</div>

register.ts:

import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { Router } from '@angular/router';

@Component({
  selector: 'app-register',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './register.html',
  styleUrl: './register.css'
})
export class Register {

  user = {
    name: '',
    email: '',
    password: ''
  };

  constructor(private router: Router) {}

  registerUser() {

    localStorage.setItem('user', JSON.stringify(this.user));

    alert("Registration Successful");

    this.router.navigate(['/login']);
  }

}

now in terminal write ng serve inside cd user-app