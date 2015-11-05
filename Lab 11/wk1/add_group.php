<!DOCTYPE html>
<? session_start(); ?>
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
			<?
			if (isset($_SESSION['username'])){
				echo "<li><a href='logout.php'>Logout</a></li>";
			}
			else{
			echo "<li><a href='login.php'>Login</a></li>";
			}
			?>
		</ul>		
	</div>
	<div id="div_main">
		<div id="div_left">
				
		</div>
		

		
		<div id="div_content" class="form">
			<!--%%%%% Main block %%%%-->
			<!--Form -->
				<h2>Add User Group</h2>
			<?
			if (isset($_SESSION['groupid'])){
			if ($_SESSION['groupid'] == 1 || $_SESSION['groupid'] == 2 ){			
			
			?>
				<form action="group.php" method="post">
				<label>Group Code</label>
				<input type="text" name="groupcode">
				
				<label>Group Name</label>
				<input type="text" name="groupname">
				
				<label>Remark</label>
				<textarea name="remark">Description</textarea><br>
					
				<label>URL</label>
				<input type="text" name="url">
					<input type="hidden" name="page" value="addgroup" >
				<div class="center">
					<input type="submit" name="submit" value="Submit">
					<input type="reset" value="Cancel">											
				</div>
				</form>
		</div> <!-- end div_content -->

<? } 

else{
	echo "You don't have the permission";
}
}
else{
	echo "You don't have the permission";}
?>	
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
	</div>

</div>
</body>
</html>

