<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method=POST action="">
    Subject: <input type="text" name="subject"><br>
    Faculty Name: <input type="text" name="faculty"><br>
    Students present: <input type="text" name="students"><br>
    <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST['subject'])){
    $subject=$_POST['subject'];
    $faculty=$_POST['faculty'];
    $students=$_POST['students'];

    $conn=mysqli_connect('localhost','root','','login');
    if(!$conn){
        echo "Can't able to connect";
    } 
    else{
        $query="insert into submit(subject,faculty,students) VALUES ('$subject','$faculty','$students')";
        if($conn->query($query)){
            echo "Insertion to the database succesfull";
        }else{
            echo "Not able to insert";
        }
    }
}
?>
</html>