
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Add Marks</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        .form-container {
            background: white;
            padding: 40px;
            border-radius: 10px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);
            width: 300px;
        }
        h1 {
            font-size: 20px;
            color: #333;
            text-align: center;
            margin-bottom: 20px;
        }
        label {
            font-size: 14px;
            color: #666;
            margin-bottom: 5px;
            display: block;
        }
        input, select {
            width: 100%;
            padding: 10px;
            margin-bottom: 20px;
            border: 1px solid #ccc;
            border-radius: 5px;
            font-size: 14px;
        }
        button {
            width: 100%;
            padding: 10px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 5px;
            font-size: 16px;
            cursor: pointer;
        }
        button:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <div class="form-container">
        <h1>Add Marks</h1>
        <form method="POST" action="">
            <select name=id id=id>
            <option value="">--SELECT ID---</option>
            <?php
            $conn = mysqli_connect('localhost', 'root', '', 'login');

            $query="SELECT id from student";
            $res=$conn->query($query);
            while($row=$res->fetch_assoc()){
                echo "<option value={$row['id']}>{$row['id']}</option>";
            }
            ?>
    </select>
            <label for="course-code">Course Code</label>
            <input type="text" id="course-code" name="course_code" placeholder="Enter Course Code" required>

            <label for="external-marks">External Marks</label>
            <input type="number" id="external-marks" name="external_marks" placeholder="Enter External Marks" required>

            <label for="internal-marks">Internal Marks</label>
            <input type="number" id="internal-marks" name="internal_marks" placeholder="Enter Internal Marks" required>

            <button type="submit" name="submit">Submit</button>
        </form>
    </div>

    <?php
    if (isset($_POST['submit'])) {
        $conn = mysqli_connect("localhost", "root", "", "login");

        // Collecting form data
        $student_id = $_POST['id'];
        $course_code = $_POST['course_code'];
        $external_marks = $_POST['external_marks'];
        $internal_marks = $_POST['internal_marks'];

        // Insert query
        $query = "UPDATE `student` SET `internal` = '$internal_marks',`subject` = '$course_code', `external` = '$external_marks' WHERE `id` = '$student_id'";

        if($conn->query($query)){
            echo "
            <h3>Mark added succesfuly</h3>";
        }else{
            echo "Mark added failed";
        }
    }
    ?>
</body>
</html>

</body>
</html>
