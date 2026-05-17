install node
install mongodb
cretae fodler crud_api
in vs code terminal:
npm init -y
npm install express mongoose cors
create this structure:
CRUD_API
│
├── models
│   └── Student.js
│
├── server.js
├── package.json

Student.js:

const mongoose = require('mongoose');

const studentSchema = new mongoose.Schema({

    name: String,

    age: Number,

    course: String
});

module.exports = mongoose.model('Student', studentSchema);

server.js:

const express = require('express');

const mongoose = require('mongoose');

const cors = require('cors');

const Student = require('./models/Student');

const app = express();

app.use(express.json());

app.use(cors());

// MongoDB Connection
mongoose.connect('mongodb://127.0.0.1:27017/studentDB')
.then(() => console.log("MongoDB Connected"))
.catch(err => console.log(err));


// ================= CREATE =================

app.post('/students', async (req, res) => {

    try {

        const student = new Student(req.body);

        await student.save();

        res.status(201).json(student);

    } catch (error) {

        res.status(500).json({ error: error.message });
    }
});


// ================= READ =================

app.get('/students', async (req, res) => {

    try {

        const students = await Student.find();

        res.json(students);

    } catch (error) {

        res.status(500).json({ error: error.message });
    }
});


// ================= UPDATE =================

app.put('/students/:id', async (req, res) => {

    try {

        const updatedStudent = await Student.findByIdAndUpdate(

            req.params.id,
            req.body,
            { new: true }

        );

        res.json(updatedStudent);

    } catch (error) {

        res.status(500).json({ error: error.message });
    }
});


// ================= DELETE =================

app.delete('/students/:id', async (req, res) => {

    try {

        await Student.findByIdAndDelete(req.params.id);

        res.json({ message: "Student Deleted" });

    } catch (error) {

        res.status(500).json({ error: error.message });
    }
});


// Server Start
app.listen(3000, () => {

    console.log("Server Running on Port 3000");
});
create data fodle rin c drive:
cretae db fodler inside data

in windows cmd run mongod

in vs code terminal run:
node server.js

now in postman
api1:
select post
http://localhost:3000/students
click body->raw->json
paste this:
{
    "name": "Kishan",
    "age": 21,
    "course": "Computer Engineering"
}
click send
copy _id

api2:
select get
http://localhost:3000/students
send

api3:
click put
http://localhost:3000/students/68293d....
click body->raw->json
{
    "name": "Rahul",
    "age": 22,
    "course": "IT"
}
click send

api4:
select delete
http://localhost:3000/students/68293d....
send



