<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
   <form method=POST>
    Name:<input type = text name = name id=name><br>
    Password:<input type=password name=pass id=pass><br>
    <select name = age id=age>
        <option value = Minor>0-17</option>

        <option value = Major>18-59</option>
<option value = small>60+</option>

</select><br>
    <label><input type = "checkbox" name="lang[]" value=Malayalam>Malayalam</label>
    <label><input type = "checkbox" name="lang[]" value=English>English</label>
    <label><input type = "checkbox" name="lang[]" value=Hindi>Hindi</label><br>
   
     <input type = submit>
</form>
</body>

<?php
if(isset($_POST['name'])){
    $name=$_POST['name'];
    $pass=$_POST['pass'];
    $age=$_POST['age'];
    $lang = implode(", ", $_POST['lang']); 
   


    $conn=mysqli_connect('localhost','root','','login');
    if(!$conn){
        echo "Not connected";
    }

    else {

    $query="insert into language(username,password,language,age) VALUES ('$name', '$pass','$lang','$age')";
    if($conn->query($query))
        echo "Connection Succesfull";
    else
        echo "Connection failed";
}
$query="select * from language";
$result=$conn->query($query);

if($result->num_rows>0){
    echo "<table border =1 
        <tr>
        <th>Name</th>
        <th>Pass</th>
        <th>Language</th>
        <th>Age</th>
    ";
    while($rows=$result->fetch_assoc()){
        echo "<tr>
        <td>" .$rows['username'] ."</td>
        <td>" .$rows['password'] . "</td>
        <td>".$rows['language'] . "</td>
        <td>" .$rows['age'] ."</td>
        </tr>";
    }
    echo "</table>";
}}
?>
</html>