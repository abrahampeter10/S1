<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method =POST>
        Name:<input type=text name= name><br>
        Password:<input type=password name=password><br>
        <input type = submit name = submit>
</form>
</body>

<?php
if(isset($_POST['name'])){
    $name=$_POST['name'];
    $password=$_POST['password'];

    $conn=mysqli_connect('localhost', 'root', '', 'login');
    if(!$conn){
        echo "Connection failed";
    }else{
        $query = "SELECT * FROM loginpage";
        
        $res=$conn->query($query);
        if($res->num_rows>0){
            $row=$res->fetch_assoc();
            echo "Welcome " .$row['name']."<br>
        Password: " .$row['password'];
        }else{
            echo "Error";
        }

    }
}

?>
</html>