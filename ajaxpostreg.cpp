>>index.html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Registration</title>

    <!-- Bootstrap -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
</head>

<body class="bg-light">

<div class="container mt-5">

    <div class="card shadow p-4">

        <h2 class="text-center mb-4">User Registration Form</h2>

        <form id="registrationForm">

            <div class="mb-3">
                <label>Name</label>
                <input type="text" id="name" class="form-control" required>
            </div>

            <div class="mb-3">
                <label>Email</label>
                <input type="email" id="email" class="form-control" required>
            </div>

            <div class="mb-3">
                <label>Password</label>
                <input type="password" id="password" class="form-control" required>
            </div>

            <button type="submit" class="btn btn-primary w-100">
                Register
            </button>

        </form>

        <a href="users.html" class="btn btn-success mt-3">
            View Registered Users
        </a>

    </div>

</div>

<script src="script.js"></script>

</body>
</html>

>>users.html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registered Users</title>

    <!-- Bootstrap -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
</head>

<body class="bg-light">

<div class="container mt-5">

    <div class="card shadow p-4">

        <h2 class="text-center mb-4">Registered Users</h2>

        <table class="table table-bordered table-striped">

            <thead class="table-dark">
                <tr>
                    <th>Name</th>
                    <th>Email</th>
                    <th>Password</th>
                </tr>
            </thead>

            <tbody id="userTableBody">

            </tbody>

        </table>

    </div>

</div>

<script>

    // Get data from localStorage
    let users = JSON.parse(localStorage.getItem("users")) || [];

    let tableBody = document.getElementById("userTableBody");

    users.forEach(user => {

        let row = `
            <tr>
                <td>${user.name}</td>
                <td>${user.email}</td>
                <td>${user.password}</td>
            </tr>
        `;

        tableBody.innerHTML += row;
    });

</script>

</body>
</html>

>>script.js
document.getElementById("registrationForm")
.addEventListener("submit", function(event) {

    event.preventDefault();

    // Get form values
    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let password = document.getElementById("password").value;

    // Create user object
    let user = {
        name: name,
        email: email,
        password: password
    };

    // Get existing users from localStorage
    let users = JSON.parse(localStorage.getItem("users")) || [];

    // Push new user
    users.push(user);

    // Store back to localStorage
    localStorage.setItem("users", JSON.stringify(users));

    // AJAX POST Request
    let xhr = new XMLHttpRequest();

    xhr.open("POST", "https://jsonplaceholder.typicode.com/posts", true);

    xhr.setRequestHeader("Content-Type", "application/json");

    xhr.onload = function() {

        if(xhr.status === 201) {
            alert("Registration Successful!");
            document.getElementById("registrationForm").reset();
        }
    };

    xhr.send(JSON.stringify(user));

});