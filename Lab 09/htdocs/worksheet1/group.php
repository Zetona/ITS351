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
			if (isset($_POST['groupcode']) && isset($_POST['groupname'])){
				$groupcode = $_POST['groupcode'];
				$groupname = $_POST['groupname'];
				$remark = $_POST['remark'];
				$url = $_POST['url'];
				require_once('connect.php'); 
				$q="INSERT INTO USERGROUP(USERGROUP_CODE,USERGROUP_NAME,USERGROUP_REMARK,USERGROUP_URL) VALUES ('".$groupcode."','".$groupname."','".$remark."','".$url."');";
				$result=$mysqli->query($q);
				if(!$result){
					echo "INSERT failed. Error: ".$mysqli->error ;
					break;
				}
			}
			?>
			<h2>User Group</h2>			
			<table>
                <col width="10%">
                <col width="20%">
                <col width="30%">
                <col width="30%">
                <col width="5%">
                <col width="5%">

                <tr>
                    <th>Group ID</th> 
                    <th>Group Code</th>
                    <th>Group Name</th>
                    <th>URL</th>
                    <th>Edit</th>
                    <th>Del</th>
                </tr>
                 <tr>
				 
<?php
//get column size, allowing the table to be shown properly
require_once('connect.php');
$q = "SELECT * FROM usergroup";
$result=$mysqli->query($q);
$col_size = $result->field_count; 
$row_size=$result->num_rows;

//Show the table
while ($row = $result->fetch_array()){
	echo "<tr>";
	for ($i=0;$i<$col_size-1;$i++){
		echo "<td>".$row[$i]."</td>";
	}
	echo '<td><a href ="'.$row[$col_size-1].'"><img src="images/Modify.png" width="24" height="24"></a></td>';
	echo '<td><a href ="delete.php?groupcode='.$row[0].'"><img src="images/Delete.png" width="24" height="24"></a></td>';
	echo "</tr>";

}
echo "<td> Total ".$row_size." records.</td>";
echo "</table>";
?>
		<!--
                    <td>Data 1</td> 
                    <td>Data 2</td>
                    <td>Data 3</td>
                    <td>Data 4</td>
                    <td><img src="images/Modify.png" width="24" height="24"></td>
                    <td><img src="images/Delete.png" width="24" height="24"></td>
                </tr>                               
            </table>	
		-->
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>


