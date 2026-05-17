create a folder jquery:
create a file index.html
index.html:

<!DOCTYPE html>
<html lang="en">
<head>

    <meta charset="UTF-8">

    <meta name="viewport"
          content="width=device-width, initial-scale=1.0">

    <title>jQuery Mobile Website</title>

    <!-- jQuery Mobile CSS -->
    <link rel="stylesheet"
          href="https://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.css">

    <!-- jQuery -->
    <script src="https://code.jquery.com/jquery-1.11.1.min.js"></script>

    <!-- jQuery Mobile JS -->
    <script src="https://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.js"></script>

</head>

<body>

<!-- HOME PAGE -->

<div data-role="page" id="home">

    <div data-role="header">

        <h1>My Mobile Website</h1>

    </div>

    <div role="main" class="ui-content">

        <h2>Welcome</h2>

        <p>
            This is a simple mobile website using jQuery Mobile.
        </p>

        <a href="#about"
           class="ui-btn ui-btn-b ui-corner-all">
           About Page
        </a>

        <a href="#contact"
           class="ui-btn ui-btn-a ui-corner-all">
           Contact Page
        </a>

    </div>

    <div data-role="footer">

        <h4>SPPU WAD Practical</h4>

    </div>

</div>


<!-- ABOUT PAGE -->

<div data-role="page" id="about">

    <div data-role="header">

        <a href="#home"
           data-icon="back">
           Back
        </a>

        <h1>About</h1>

    </div>

    <div role="main" class="ui-content">

        <h2>About Us</h2>

        <p>
            This page is created using jQuery Mobile framework.
        </p>

    </div>

    <div data-role="footer">

        <h4>About Footer</h4>

    </div>

</div>


<!-- CONTACT PAGE -->

<div data-role="page" id="contact">

    <div data-role="header">

        <a href="#home"
           data-icon="back">
           Back
        </a>

        <h1>Contact</h1>

    </div>

    <div role="main" class="ui-content">

        <h2>Contact Information</h2>

        <p>Email: admin@gmail.com</p>

        <p>Phone: 9876543210</p>

    </div>

    <div data-role="footer">

        <h4>Contact Footer</h4>

    </div>

</div>

</body>
</html>

go live