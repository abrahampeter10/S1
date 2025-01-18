<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method=POST action="">
    Consumer No:<input type = text name= cons_no><br>
    Name: <input type = text name = name><br>
    <input type=submit name="submit">
</form>
</body>
<?php
 if(isset($_POST['name'])){
    $cons_no = $_POST['cons_no'];
    $name = $_POST['name'];
    $conn=mysqli_connect('localhost','root','','login');
    if(!$conn){
        echo "Not able to connect";
    }
    else{
        $query="select * from electricity where cons_no = '$cons_no' and name = '$name'";
        $res=$conn->query($query);
        if($res->num_rows>0){
            $row=$res->fetch_assoc();
            $bill_amount=$row['units']*10;
            echo "Total bill amount is: " .$bill_amount. "<br>"  ;
            echo "Cons_No : " .$row['cons_no'];
            echo "Name: " .$row['name'];
        }else{
            echo "No data to print";
        }
    }
}
?>
</html>