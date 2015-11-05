<?php
include_once('dbconnect.php');

//echo $_GET['p_id'];
$q = "DELETE FROM product WHERE p_id = " . $_GET['p_id'];
$res = $db->query($q);
?>

<?php
	header("Location: db.php");
?>