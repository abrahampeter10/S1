<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Registration</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        .form-container {
            background: white;
            padding: 40px;
            border-radius: 10px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);
            width: 300px;
        }
        h1 {
            font-size: 20px;
            color: #333;
            text-align: center;
            margin-bottom: 20px;
        }
        label {
            font-size: 14px;
            color: #666;
            margin-bottom: 5px;
            display: block;
        }
        input, select {
            width: 100%;
            padding: 10px;
            margin-bottom: 20px;
            border: 1px solid #ccc;
            border-radius: 5px;
            font-size: 14px;
        }
        button {
            width: 100%;
            padding: 10px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 5px;
            font-size: 16px;
            cursor: pointer;
        }
        button:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <div class="form-container">
        <h1>Student Registration</h1>
        <form method="POST">
            <label for="student-id">Student ID</label>
            <input type="text" id="id" name="id" placeholder="Enter Student ID" required>

            <label for="student-name">Student Name</label>
            <input type="text" id="name" name="name" placeholder="Enter Full Name" required>

            <label for="password">Password</label>
            <input type="password" id="password" name="password" placeholder="Enter Password" required>

            <label for="course">Course</label>
            <select id="course" name="course" required>
                <option value="">Select Course</option>
                <option value="BSc">BSc</option>
                <option value="BCA">BCA</option>
                <option value="MCA">MCA</option>
                <option value="BTech">BTech</option>
                <option value="MTech">MTech</option>
            </select>

            <input type="submit">
        </form>
    </div>
</body>

<?php
    if(isset($_POST['name'])){
        $name=$_POST['name'];
        $id=$_POST['id'];
        $course=$_POST['course'];
        $pass=$_POST['password'];

        $conn=mysqli_connect('localhost','root','','login');
        if(!$conn){
            echo "Not able to connect";
        }else{
            $query="insert into student(name,id,course,password) VALUES ('$name','$id','$course','$pass')"; 
            if($conn->query($query)){
                header("location:adminHome.php");
            }else{
                echo "Insertion failed";
            }
        }
    }
?>
</html>
