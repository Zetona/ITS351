<?php require_once('connect.php'); ?>
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
		<div id="div_content" class="form">
			<!--%%%%% Main block %%%%-->
			<!--Form -->
			<?php 
				$edit = 0;
			
				require_once('connect.php'); 
				
						$user_title ="";
						$user_fname ="";
						$user_lname ="";
						$user_gender ="";
						$user_email ="";
						$user_username ="";
						$user_passwd ="";
						$user_usergroup ="";
						$user_disable ="";
						
				if (isset($_GET['id'])){
					$edit = 1;
					echo $_GET['id'];
					$q="select * from USER WHERE USER_ID = ".$_GET['id'];
					$result=$mysqli->query($q);
					if(!$result){
							echo "Select failed. Error: ".$mysqli->error ;
							break;
						}
					 while($row=$result->fetch_array()){ 
						$user_title = $row['USER_TITLE'];
						$user_fname = $row['USER_FNAME'];
						$user_lname = $row['USER_LNAME'];
						$user_gender = $row['USER_GENDER'];
						$user_email = $row['USER_EMAIL'];
						$user_username = $row['USER_NAME'];
						$user_passwd = $row['USER_PASSWD'];
						$user_usergroup = $row['USER_GROUPID'];
						$user_disable = $row['DISABLE'];
					}
				}
			
			
			
			?>
			<form action="user.php" method="post">
			
				<input type="hidden" name="userid" value="<?php echo $_GET['id']?>">
				
				<input type="hidden" name="edit" value="<?php echo $edit ?>">
					<h2>User Profile</h2>
					<label>Title</label>
					<select name="title" value="<?php echo $user_title;?>">
					<?php
						$q='select TITLE_ID, TITLE_NAME from TITLE;';
						if($result=$mysqli->query($q)){
							while($row=$result->fetch_array()){
								if($row[0] == $user_title)
									echo '<option value="'.$row[0].'" selected>'.$row[1].'</option>';
								else
									echo '<option value="'.$row[0].'">'.$row[1].'</option>';
							}
						}else{
							echo 'Query error: '.$mysqli->error;
						}
					?>
					</select>					
					<label>First name</label>
					<input type="text" name="firstname" value="<?php echo $user_fname;?>">
						
					<label>Last name</label>
					<input type="text" name="lastname" value="<?php echo $user_lname;?>">

					<label>Gender</label>
					<?php
						$q='select GENDER_ID, GENDER_NAME from GENDER;';
						if($result=$mysqli->query($q)){
							while($row=$result->fetch_array()){
								if($row[0] == $user_gender)
									echo '<input type="radio" name="gender" value="'.$row[0].'" checked>'.$row[1];
								else
									echo '<input type="radio" name="gender" value="'.$row[0].'">'.$row[1];
							}
						}else{
							echo 'Query error: '.$mysqli->error;
						}
					?>
					<div></div>
					
					<label>Email</label>
					<input type="text" name="email" value="<?php echo $user_email;?>">
					
					<h2> Account Profile</h2>
					<label>Username</label>
					<input type="text" name="username" value="<?php echo $user_username;?>">
					
					<label>Password</label>
					<input type="password" name="passwd" value="<?php echo $user_passwd;?>">
					
					<label>Confirmed password</label>
					<input type="password" name="cpasswd" value="<?php echo $user_passwd;?>">
					
					<label>User group</label>
					<select name="usergroup" value="<?php echo $user_usergroup;?>">
					<?php
						$q='select USERGROUP_ID, USERGROUP_NAME from USERGROUP;';
						if($result=$mysqli->query($q)){
							while($row=$result->fetch_array()){
								echo '<option value="'.$row[0].'">'.$row[1].'</option>';
							}
						}else{
							echo 'Query error: '.$mysqli->error;
						}
					?>
					</select>				
					<label>Disabled</label>
					<?php
						if($user_disable == 1)
							echo '<input type="checkbox" name="disabled" value="1" checked>';
						else 
							echo '<input type="checkbox" name="disabled" value="0">';
					?>
					<input type="hidden" name="page" value="adduser" >
					<div class="center">
						<input type="submit" value="Submit" >			
					</div>
				</form>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>


