<?php
$servername = "localhost";   // Local server
$username = "root";          // Default XAMPP username
$password = "";              // Default password is empty
$dbname = "registration_db"; // Database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = $_POST['name'];
$email = $_POST['email'];
$userid = $_POST['userid'];
$pass = $_POST['password'];
$contact = $_POST['contact'];

$country = $_POST['country'];

// Hash password for security
$hashed_pass = password_hash($pass, PASSWORD_DEFAULT);

// Insert into database
$sql = "INSERT INTO users (name, email, userid, password, contact, country) 
        VALUES ('$name', '$email', '$userid', '$hashed_pass', '$contact', '$country')";

if ($conn->query($sql) === TRUE) {
    echo "Registration successful! Data stored on local server.";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?> 