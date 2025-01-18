<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method=POST action="">
    Name<input type=text name="name" id="name"><br>
    Password<input type="password" name="password" id="password"><br>
    <input type=submit name="submit">
</form>
</body>
<?php
 if(isset($_POST['name'])){
    $name=$_POST['name'];
    $password=$_POST['password'];
    $conn=mysqli_connect('localhost','root','','login');
    if(!$conn){
        echo "Not able to connect";
    }
    else{
        $query="select * from login where username = '$name' and password = '$password'";
        $res=$conn->query($query);
        if($res->num_rows>0){
            header("location:submit.php");
        }else{
            echo "No data to print";
        }
    }
}
?>
</html>