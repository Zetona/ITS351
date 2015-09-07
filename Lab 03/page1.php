<html>
<body>

<?php echo "HELLO " . $_POST['page_id']; ?>
<?php echo "<hr/>"; ?>
<?php
if (isset($_POST["User"]) && isset($_POST["Pass"])){
	if ($_POST["User"] == "u1" && $_POST["Pass"] == "1234"){
		echo "Login Success!";}
	else{
		echo "Wrong Username or Password";}
	}
?>

<?php echo $_POST["User"] ?>

</body>
</html>