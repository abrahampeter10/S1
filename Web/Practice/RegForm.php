<html>
	<head>
		<title>Form</title>
	</head>
	<body bgcolor="skyblue">
	<marquee behavior="scroll" onmouseover="stop()" onmouseout="start()"><h1><font color="red">WELCOME TO FRESHERS WORLD!!!</font></h1></marquee>
		<form method="post" action="display.php">
			<table border=1 align="center" width="60%">
				<tr>
					<th colspan="2">Registration Form</th>
				</tr>
				<tr>
					<td>Name</td>
					<td><input type="text" name="name"></td>
				</tr>
				<tr>
					<td>Age</td>
					<td>
						<select name="age" id="age">
							<option value="none" selected disabled>SELECT</option>
							<option value="18" >18</option>
							<option value="18" >19</option>
							<option value="18" >20</option>
							<option value="18" >21</option>
							<option value="18" >22</option>
							<option value="18" >23</option>
							<option value="18" >24</option>
						</select>						
					</td>
				</tr>
				<tr>
					<td>Password</td>
					<td><input type="password" name="password"></td>	
				</tr>
				<tr>
					<td>Re-enter Password</td>
					<td><input type="password" name="password-re"></td>				
				</tr>
				<tr>
					<td rowspan="5">Select your security question</td>
				</tr>
				<tr><td><input name="sec" value="What is your pet name?" type="radio">What is your pet name?</input></td></tr>
				<tr><td><input name="sec" value="Who is your best friend?" type="radio">Who is your best friend?</input></td></tr>
				<tr><td><input name="sec" value="What is your favourite color?" type="radio">What is your favourite color?</input></td></tr>
				<tr><td><input name="sec" value="Who is your favorite teacher?" type="radio">Who is your favorite teacher?</input></td></tr>
				<tr>
					<td>Answer of security question</td>
					<td><input type="password" name="sec-ans"></td>			
				</tr>
				<tr>
					<td>Email id</td>
					<td><input type="text" name="email"></td>
				</tr>
				<tr>
					<td>Languages Known</td>
					<td>
						<input type="checkbox" name="lang[]" value="Malayalam">Malayalam</input>
						<input type="checkbox" name="lang[]" value="English">English</input>
						<input type="checkbox" name="lang[]" value="Hindi">Hindi</input>
					</td>
				</tr>
				<tr>
					<td>Phone number</td>
					<td>
						<table border="1">
							<tr>
								<th>Home</th>
								<th>Office</th>
							</tr>
							<tr>
								<td><input type="text" name="home"></td>
								<td><input type="text" name="office"></td>
							</tr>		
						</table>
					</td>
				</tr>
				<tr>
					<td>Upload CV</td>
					<td>
						<input type="file">
					</td>
				</tr>
				<tr>
					<td><center><input type="reset" value="Reset"></center></td>
					<td><center><input type="submit" value="Submit"></center></td>
				</tr>
			</table>
		</form>
	</body>
</html>