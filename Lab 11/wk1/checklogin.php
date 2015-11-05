<?php
session_start();

$input_u = $_POST['username'];
$input_p = $_POST['passwd'];

//establish connection to DB
require_once('connect.php'); 

$q = "SELECT * FROM user WHERE USER_NAME ='". $input_u. "' AND USER_PASSWD = '". $input_p. "';";

$res = $mysqli->query($q);
if ($res && $res->num_rows ==1 ) // login success
{
	//keep login status in the session
	while ($row = $res->fetch_array()){
		$_SESSION['username'] = $row['USER_NAME'];
		$_SESSION['groupid'] = $row['USER_GROUPID'];

	}
	if ($_SESSION['groupid'] == 1){
	header("Location: group.php");}
	else if ($_SESSION['groupid'] == 2){
	header("Location: group.php");}
	else if ($_SESSION['groupid'] == 3){
	header("Location: user.php");}
}
else{
	echo "Login failed <br/> wrong username or password";
}
?>