<?php
//implement session to keep login status
session_start();

$username = $_POST['username'];
$passwd = $_POST['passwd'];

//hash inout password
$passwd = md5($passwd);

require_once('connect.php');
$q="select * from user where disable = 0
and username='".$username."' and passwd='".$passwd."'" ;
$result = $mysqli->query($q);
if (!$result) {
 die('Error: '.$q." ". $mysqli->error);
}
$count = $result->num_rows;
// If result matches, there must be one row returned
if($count==1){

while($row = $result->fetch_array()){
	$_SESSION['username'] = $row['username'];
	$_SESSION['email'] = $row['email'];
}

echo "Login Sucessfully";
} else {
echo "Wrong Username or Password";
}
?>
