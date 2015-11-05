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
				
				
				
						$groupcode ="";
						$groupname ="";
						$groupremark = "";
						$groupurl = "";
						
						
				if (isset($_GET['id'])){
					$edit = 1;
					$q="select * from USERGROUP WHERE USERGROUP_ID = ".$_GET['id'];
					$result=$mysqli->query($q);
					if(!$result){
							echo "Select failed. Error: ".$mysqli->error ;
							break;
						}
					 while($row=$result->fetch_array()){ 
						$groupcode = $row['USERGROUP_CODE'];
						$groupname = $row['USERGROUP_NAME'];
						$groupremark = $row['USERGROUP_REMARK'];
						$groupurl = $row['USERGROUP_URL'];
					
					}
				}
			
			
			
			?>
			
			
				<h2>Add User Group</h2>
				<form action="group.php" method="post">
				
				<input type="hidden" name="groupid" value="<?php echo $_GET['id']?>">
				
				<input type="hidden" name="edit" value="<?php echo $edit ?>">
				
				<label>Group Code</label>
				<input type="text" name="groupcode" value="<?php echo $groupcode;?>">
				
				<label>Group Name</label>
				<input type="text" name="groupname" value="<?php echo $groupname;?>">
				
				<label>Remark</label>
				<textarea name="remark"><?php echo $groupremark;?></textarea><br>
					
				<label>URL</label>
				<input type="text" name="url" value="<?php echo $groupurl;?>">
					<input type="hidden" name="page" value="addgroup" >
				<div class="center">
					<input type="submit" name="submit" value="Submit">
					<input type="reset" value="Cancel">											
				</div>
				</form>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>

