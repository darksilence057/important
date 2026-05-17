create a folder
>>index.html file
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Admin Dashboard</title>

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">

    <!-- Bootstrap Icons -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.3/font/bootstrap-icons.min.css">

    <!-- Custom CSS -->
    <link rel="stylesheet" href="style.css">
</head>
<body>

<div class="container-fluid">
    <div class="row">

        <!-- Sidebar -->
        <div class="col-md-2 sidebar p-3">
            <h3 class="text-white text-center mb-4">Dashboard</h3>

            <ul class="nav flex-column">
                <li class="nav-item">
                    <a class="nav-link active" href="#">
                        <i class="bi bi-speedometer2"></i> Home
                    </a>
                </li>

                <li class="nav-item">
                    <a class="nav-link" href="#">
                        <i class="bi bi-cart"></i> Orders
                    </a>
                </li>

                <li class="nav-item">
                    <a class="nav-link" href="#">
                        <i class="bi bi-people"></i> Users
                    </a>
                </li>

                <li class="nav-item">
                    <a class="nav-link" href="#">
                        <i class="bi bi-book"></i> Courses
                    </a>
                </li>

                <li class="nav-item">
                    <a class="nav-link" href="#">
                        <i class="bi bi-bar-chart"></i> Reports
                    </a>
                </li>

                <li class="nav-item">
                    <a class="nav-link" href="#">
                        <i class="bi bi-gear"></i> Settings
                    </a>
                </li>
            </ul>
        </div>

        <!-- Main Content -->
        <div class="col-md-10 main-content p-4">

            <h2 class="mb-4">Admin Dashboard</h2>

            <div class="row g-4">

                <!-- Card 1 -->
                <div class="col-md-3">
                    <div class="card dashboard-card bg-primary text-white">
                        <div class="card-body">
                            <h5>Total Students</h5>
                            <h2>1200</h2>
                        </div>
                    </div>
                </div>

                <!-- Card 2 -->
                <div class="col-md-3">
                    <div class="card dashboard-card bg-success text-white">
                        <div class="card-body">
                            <h5>Total Courses</h5>
                            <h2>85</h2>
                        </div>
                    </div>
                </div>

                <!-- Card 3 -->
                <div class="col-md-3">
                    <div class="card dashboard-card bg-warning text-dark">
                        <div class="card-body">
                            <h5>Pending Exams</h5>
                            <h2>12</h2>
                        </div>
                    </div>
                </div>

                <!-- Card 4 -->
                <div class="col-md-3">
                    <div class="card dashboard-card bg-danger text-white">
                        <div class="card-body">
                            <h5>Revenue</h5>
                            <h2>₹50K</h2>
                        </div>
                    </div>
                </div>

            </div>

            <!-- Table Section -->
            <div class="mt-5">
                <h4>Recent Activities</h4>

                <table class="table table-striped table-bordered mt-3">
                    <thead class="table-dark">
                        <tr>
                            <th>ID</th>
                            <th>Name</th>
                            <th>Status</th>
                            <th>Date</th>
                        </tr>
                    </thead>

                    <tbody>
                        <tr>
                            <td>101</td>
                            <td>Kishan</td>
                            <td>Completed</td>
                            <td>16 May 2026</td>
                        </tr>

                        <tr>
                            <td>102</td>
                            <td>Rahul</td>
                            <td>Pending</td>
                            <td>15 May 2026</td>
                        </tr>

                        <tr>
                            <td>103</td>
                            <td>Sneha</td>
                            <td>Completed</td>
                            <td>14 May 2026</td>
                        </tr>
                    </tbody>
                </table>
            </div>

        </div>

    </div>
</div>

</body>
</html>

>>style.css
body {
    margin: 0;
    padding: 0;
    font-family: Arial, sans-serif;
    background-color: #f4f6f9;
}

/* Sidebar */
.sidebar {
    background-color: #212529;
    min-height: 100vh;
}

.sidebar .nav-link {
    color: white;
    margin: 10px 0;
    font-size: 18px;
}

.sidebar .nav-link:hover {
    background-color: #495057;
    border-radius: 5px;
}

.sidebar .active {
    background-color: #0d6efd;
    border-radius: 5px;
}

/* Main Content */
.main-content {
    background-color: #f8f9fa;
}

/* Cards */
.dashboard-card {
    border: none;
    border-radius: 10px;
    transition: transform 0.3s;
}

.dashboard-card:hover {
    transform: scale(1.05);
}