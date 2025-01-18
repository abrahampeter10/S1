<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method=POST>
        Number: <input type="number" name="number">
        <input type=submit>
</form>
</body>
<?php
 if(isset($_POST['number'])){
    $number=$_POST['number'];
    
    function factorial($number){
        if($number==0){
            return 1;
        }
        return $number*factorial($number-1);
    }



    echo "Factorial of number is " .factorial($number);
 }
 ?>
</html>