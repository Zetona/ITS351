<!DOCTYPE html>
<html>
<head>
<title>ITS331 Sample</title>
<link rel="stylesheet" href="default.css">
</head>

<body>

<div id="wrapper"> 
	<div id="div_header">
		ITS331 System 
	</div>
	<div id="div_subhead">
		<ul id="menu">
			<li><a href="user.php">User Profile</a></li>
			<li><a href="add_user.php">Add User</a></li>
			<li><a href="group.php">User Group</a></li>
			<li><a href="add_group.html">Add User Group</a></li>
		</ul>		
	</div>
	<div id="div_main">
		<div id="div_left">
				
		</div>
		<div id="div_content" class="usergroup">
			<!--%%%%% Main block %%%%-->
			<?php
			if (isset($_POST['title']) && isset($_POST['firstname'])){
				$title = $_POST["title"];
				$firstname = $_POST["firstname"];
				$lastname = $_POST["lastname"];
				$gender = $_POST["gender"];
				$email = $_POST["email"];
				$username = $_POST["username"];
				$passwd = $_POST["passwd"];
				$cpasswd = $_POST["cpasswd"];
				$usergroup = $_POST["usergroup"];
				$disabled = $_POST["disabled"];
			
				require_once('connect.php');
				$q="INSERT INTO USER (USER_TITLE,USER_FNAME,USER_LNAME,USER_GENDER,USER_EMAIL,USER_NAME,USER_PASSWD,USER_GROUPID,DISABLE) 
				VALUES ('$title','$firstname','$lastname','$gender','$email','$username','$passwd','$usergroup','$disabled')";
				$result=$mysqli->query($q);
				if(!$result){
					echo "INSERT failed. Error: ".$mysqli->error ;
					break;
				}
			}
			?>
			<h2>User Profile</h2>
			<table>
                <col width="15%">
                <col width="30%">
                <col width="30%">
                <col width="20%">
                <col width="5%">

                <tr>
                    <th>Title</th> 
                    <th>Name</th>
                    <th>Email</th>
                    <th>User Group</th>
                    <th>Disabled</th>
                    <th>Edit</th>
                    <th>Del</th>
                </tr>
                 <tr>
<?php
//get column size, allowing the table to be shown properly
require_once('connect.php');
$q = "SELECT * FROM user,title,usergroup WHERE user.user_title = title.title_id AND user.user_groupid = usergroup.usergroup_id" ;
$result=$mysqli->query($q);

$col_size = $result->field_count; 
$row_size=$result->num_rows;

//Show the table
while ($row = $result->fetch_array()){
	echo "<tr>";
	echo '<td>'.$row['TITLE_NAME'].'</td>';

	echo '<td>'.$row[2].' '.$row[3].'</td>';
	echo '<td>'.$row[5].'</td>';	
	echo '<td>'.$row["USERGROUP_NAME"].'</td>';
	
	if ($row["DISABLE"] == 1)
	{
		echo '<td><input type="checkbox" checked disabled></td>';
	}
	else{
		echo '<td><input type="checkbox" disabled></td>';
	}
	echo '<td><img src="images/Modify.png" width="24" height="24"></td>';
	echo '<td><a href ="delete.php?user_id='.$row[0].'"><img src="images/Delete.png" width="24" height="24"></a></td>';
	echo "</tr>";

}
echo "<td> Total ".$row_size." records.</td>";
echo "</table>";
?>
<!---
                    <td>Data1</td> 
                    <td>Data2</td>
                    <td>Data3</td>
                    <td>Data4</td>

                    <td><input type='checkbox'></td>
                    <td><img src="images/Modify.png" width="24" height="24"></td>
                    <td><img src="images/Delete.png" width="24" height="24"></td>
					--->
                </tr>      
            </table>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>

