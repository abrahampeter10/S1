<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $numbers=[9,2,3,4,5];
    print_r($numbers);
    asort($numbers);
    print_r($numbers);
    arsort($numbers);
    print_r($numbers);

    foreach($numbers as $num){
        echo $num.  "<br>";
    }

    ?>
</body>
</html>