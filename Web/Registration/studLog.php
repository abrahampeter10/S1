<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Form</title>
    <style>
        /* body {
            font-family: Arial, sans-serif;
            background-color: #f4f7fc;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        } */

        .form-container {
            background-color: white;
            padding: 40px;
            border-radius: 10px;
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
            width: 100%;
            max-width: 400px;
        }

        h1 {
            text-align: center;
            color: #333;
            margin-bottom: 20px;
        }

        label {
            font-size: 14px;
            color: #555;
            margin-bottom: 5px;
            display: block;
        }

        input[type="text"], input[type="password"] {
            width: 100%;
            padding: 12px;
            margin: 10px 0 20px;
            border: 1px solid #ccc;
            border-radius: 5px;
            font-size: 14px;
        }

        input[type="submit"] {
            width: 100%;
            padding: 12px;
            background-color: #007bff;
            color: white;
            font-size: 16px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }

        input[type="submit"]:hover {
            background-color: #0056b3;
        }

        .form-container p {
            text-align: center;
            font-size: 14px;
            color: #777;
        }
    </style>
</head>
<body>

    <div class="form-container">
        <h1>Login</h1>
        <form action="#" method="POST">
            <label for="id">ID</label>
            <input type="text" name="id" id="id" placeholder="Enter your ID" required><br>

            <label for="pass">Password</label>
            <input type="password" name="pass" id="pass" placeholder="Enter your password" required><br>

            <input type="submit" name="submit" value="Login">
        </form>
    </div>

</body>
</html>

<?php

if(isset($_POST['id'])){
    $id=$_POST['id'];
    $pass=$_POST['pass'];

    $conn=mysqli_connect('localhost','root','','login');
    if(!$conn){
        echo "Not able to connect";
    }
    else{
        $query="select * from student where id = '$id'";
        $res=$conn->query($query);
        if($res->num_rows>0){
            $row=$res->fetch_assoc();
            
            echo "
            <h3>Grade Card</h3>
            Name: " .$row['name']. 
            "<br>ID: " .$row['id']
            "<br>Course: " .$row['course']
            "<br>"
        }
    else{
        echo "Login failed";
    }

}}
?>
</html>