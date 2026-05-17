install node
node -v
npm -v
create folder staticwebsite
open this folder in vs code
in vs code terminal:
npm init -y
npm install express


create this structure:
StaticWebsite
│
├── public
│   ├── index.html
│   └── style.css
│
├── server.js
├── package.json

index.html:

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Static Website</title>

    <link rel="stylesheet" href="style.css">
</head>

<body>

    <div class="container">

        <h1>Welcome to Node.js Static Website</h1>

        <p>
            This website is served using Node.js and Express.js
        </p>

        <button>
            Learn More
        </button>

    </div>

</body>
</html>

style.css:

body {

    margin: 0;
    padding: 0;

    font-family: Arial, sans-serif;

    background-color: #f2f2f2;
}

.container {

    text-align: center;

    margin-top: 100px;
}

h1 {

    color: blue;
}

p {

    font-size: 20px;
}

button {

    padding: 10px 20px;

    background-color: green;

    color: white;

    border: none;

    border-radius: 5px;

    cursor: pointer;
}

button:hover {

    background-color: darkgreen;
}

server.js:

const express = require('express');

const path = require('path');

const app = express();

const PORT = 3000;

// Serve static files
app.use(express.static(path.join(__dirname, 'public')));

// Start server
app.listen(PORT, () => {

    console.log(`Server running at http://localhost:${PORT}`);
});

in vs code terminal run:
node server.js