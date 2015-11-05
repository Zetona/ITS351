<?php
//Make connection
$mysqli = new mysqli('localhost','root','','sec1_lab9');

if($db->connect_errno){
	echo "Connect Error!!";
}
else{
	echo "Connect OK!";
}
?>

<?php
echo $_GET['USERGROUP_ID'];
$q = "DELETE FROM usergroup WHERE USERGROUP_ID = ".$_GET['USERGROUP_ID'];
$res = $mysqli->query($q);
?>

<?php
//Redirect back
	header('Location: group.php');
?>