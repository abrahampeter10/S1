<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method = POST>
        Consumer No:<input type = text name= cons_no><br>
        Name: <input type = text name = name><br>
        Units consumed: <input type = number name = units><br>
        <input type = submit name = submit>
</form>
</body>
<?php

if(isset($_POST['name'])){
    $cons_no = $_POST['cons_no'];
    $name = $_POST['name'];
    $units = $_POST['units'];

    $conn = mysqli_connect('localhost', 'root', '', 'login');
    if(!$conn){
        echo "Not connected";

    }
    else {
        $query = "insert into electricity(cons_no,name,units) VALUES ('$cons_no', '$name', '$units')";
        if($conn->query($query)){
            header("location:userlogin.php");
        }else{
            echo "Registration failed";
        }
    }
}
?>
</html>