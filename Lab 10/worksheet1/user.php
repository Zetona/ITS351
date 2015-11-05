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
			<li><a href="add_group.php">Add User Group</a></li>
		</ul>		
	</div>
	<div id="div_main">
		<div id="div_left">
				
		</div>
		<div id="div_content" class="usergroup">
			<!--%%%%% Main block %%%%-->
			<?php
				require_once('connect.php');
				if (
				isset($_POST['user_title']))
				{
					if (isset($_POST['page']) && $_POST['edit'] == 1 )  {
					echo $_POST['edit'];
					$q = "update USER set ".
					" USER_TITLE = '".$_POST['title']."',".
					" USER_FNAME = '".$_POST['title']."',".
					" USER_LNAME = '".$_POST['title']."',".
					" USER_GENDER = '".$_POST['title']."',".
					" USER_EMAIL = '".$_POST['title']."',".
					" USER_NAME = '".$_POST['title']."',".
					" USER_PASSWD = '".$_POST['title']."',".
					" USER_GROUPID = '".$_POST['title']."',".
					" DISABLE = '".$_POST['disabled']."'".
					" where USER_ID = ".$_POST['userid']." ";
					
					$res = $mysqli->query($q);
					if(!$res) echo "UPDATE NOT OK!";
				}
					else{
					if (isset($_POST['page'])){
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
						$page=$_POST['page'];
						
						
						
							if($page=='adduser') {
								$q="INSERT INTO USER (USER_TITLE,USER_FNAME,USER_LNAME,USER_GENDER,USER_EMAIL,USER_NAME,USER_PASSWD,USER_GROUPID,DISABLE) 
								VALUES ('$title','$firstname','$lastname','$gender','$email','$username','$passwd','$usergroup','$disabled')";
								$result=$mysqli->query($q);
								if(!$result){
									echo "INSERT failed. Error: ".$mysqli->error ;
									break;
								}
							}
						}
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
 		 <?php 
				 	$q="select * from USER,USERGROUP,TITLE,GENDER where USER.USER_GROUPID=USERGROUP.USERGROUP_ID AND USER.USER_TITLE=TITLE.TITLE_ID AND
					GENDER.GENDER_ID=USER.USER_GENDER";
					$result=$mysqli->query($q);
					if(!$result){
						echo "Select failed. Error: ".$mysqli->error ;
						break;
					}
				 while($row=$result->fetch_array()){ ?>
                 <tr>
                    <td><?php echo $row['TITLE_NAME']?></td> 
                    <td><?php echo $row['USER_FNAME']?> <?=$row['USER_LNAME']?> (<?php echo $row['GENDER_NAME']?>)</td>
                    <td><?php echo $row['USER_EMAIL']?></td>
                    <td><?php echo $row['USERGROUP_NAME']?></td>
					<td><input type='checkbox' <?php if ($row['DISABLE'])	 echo "CHECKED"; echo " disabled></td>"; ?>>
                    <td><a href='add_user.php?id=<?php echo $row['USER_ID']?>'> <img src="images/Modify.png" width="24" height="24"></a></td>
                    <td><a href='delinfo.php?userid=<?php echo $row['USER_ID']?>'> <img src="images/Delete.png" width="24" height="24"></a></td>
                </tr>                               
				<?php } ?>

			<?php $count=$result->num_rows;
					echo "<tr><td colspan=7 align=right>Total $count records</td></tr>";
					$result->free();
			?>
            </table>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>

