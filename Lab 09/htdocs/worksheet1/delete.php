<?php
//Make connection
$mysqli = new mysqli('localhost','root','','sec1_lab9');

if($mysqli->connect_errno){
	echo "Connect Error!!";
}
else{
	echo "Connect OK!";
}
?>

<?php
echo $_GET['groupcode'];
$q = "DELETE FROM usergroup WHERE USERGROUP_ID = ".$_GET['groupcode'];
$res = $mysqli->query($q);
?>

<?php
//Redirect back
	header('Location: group.php');
?>