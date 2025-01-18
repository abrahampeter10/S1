<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<?php
if(isset($_POST['name'])){
        $name=$_POST['name'];
        $age=$_POST['age'];
        $secuirity=$_POST['sec'];
        $sec_ans=$_POST['sec-ans'];
        $email=$_POST['email'];
        $lang=implode(",",$_POST['lang']);
        $home=$_POST['home'];
        $office=$_POST['office'];
    }
    ?>
    
        <center>
            <h2>YOUR DETAILS</h2>
            <table border=2>
            <tr>
            <td>Name</td>
            <td>
                <?php
               echo  $name;
                ?></td>  
            </table>
        </center>



</body>

</html>