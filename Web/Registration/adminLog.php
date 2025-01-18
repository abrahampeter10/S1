<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="adminHome.php" onsubmit="return check()">
        Username: <input type=text name=name id="name"><br>
        Password: <input type=password name=pass id="pass"><br>
        <input type=submit name=submit><br>

</form>
</body>

<script>
    function check(){
        let name=document.getElementById('name').value
        let pass=document.getElementById('pass').value
        if(name=="admin" && pass=="admin"){
            return true;
        }else{
        alert("Incorrect credentials")
        return false;
        }
    }
</script>
</html>