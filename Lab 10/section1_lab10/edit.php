<html>
<body>


<?php
include_once('dbconnect.php');

if (
isset($_GET['p_id']) &&
isset($_POST['productname']) &&
isset($_POST['productprice'])){
	$q='UPDATE product SET p_name = "'.$_POST['productname'].'" ,p_price = "'.$_POST['productprice'].'" WHERE  p_id = "'.$_GET['p_id'].'"';
	echo $q;
	$res = $db->query($q);
		if (!$res){
			echo 'Update NOT ok!';
		}
}

//GET p_id
$q ='SELECT * FROM product WHERE p_id = '.$_GET['p_id']; 
$res = $db->query($q);

//Initialize 3 variables
$product_id = "";
$product_name = "";
$product_price = "";

//Load the original record and save them in 3 variables
if ($res){
	$row = $res->fetch_array();
	$product_id = $row['p_id'];
	$product_name = $row['p_name'];
	$product_price = $row['p_price'];	
}
?>


<!--Show the original record and put them in the form-->
<form action="edit.php?p_id=<?php echo $product_id; ?>" method = "post">
ID : <input type = "text" name = "productid" value = <?php echo $product_id; ?> disabled>
<br/>NAME : <input type = "text" name = "productname" value = <?php echo $product_name; ?>>
<br/>PRICE : <input type = "text" name = "productprice" value = <?php echo $product_price; ?>>
<br/><input type = "submit">
</form>

<hr/>
<a href = "db.php">Go Back</a>

</body>
</html>

<font color ="pink">ФДτY_│Лω@Alσ||Σzz Žά™ ♂♂7</font>

