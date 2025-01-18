<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php

    $players=["Rohit(C)","Virat(VC)","Bumrah","Hardik","Surya","Shami","Sanju(WK)","Jadeja","Jaiswal","Kuldeep"];

    ?>

    <table border=2>
        <tr>
            <th>Number</th>
            <th>Player</th>
            <tr>
                <?php
                for($i=0;$i<count($players);$i++){ ?>
                    <tr>
                    <td><?php echo $i+1; ?> </td>
                    <td><?php echo $players[$i]; ?> </td>
                    </tr>
                <?php }?>
</table>
</body>
</html>