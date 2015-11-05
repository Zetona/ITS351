<html>
<head><title>LAB9 : DB</title></head>
<body>
GOOD MORNING
<hr/>

<?php
include_once('dbconnect.php');
?>

<hr/>

<?php
$q = "show tables";
$res = $db->query($q);
while($row = $res->fetch_array()) {
	echo "TABLE = " . $row[0];
}
?>

<hr/>

<?php
if (isset($_POST['productname']) && isset($_POST['productprice'])) {
$q = "INSERT INTO product(p_name,p_price) " .
"value('" .$_POST['productname']. "','" .$_POST['productprice']. "')";
$res=$db->query($q);
}	
?>
<form action="db.php" method="post">
	NAME : <input type="text" name="productname">
	<br/>PRICE :  <input type="text" name="productprice">
	<br/><input type="submit" />
</form>

<hr/>

<?php
$q = "SELECT * FROM product ORDER BY p_id DESC LIMIT 10";
echo '<table border="1">';
echo '<tr>';
echo '<th>ID</th>';
echo '<th>NAME</th>';
echo '<th>PRICE</th>';
echo '<th>DELETE</th>';
echo '<th>EDIT</th>';
echo '</tr>';

$res = $db->query($q);

$col_size = $res->field_count; //GET COL SIZE

while ($row = $res->fetch_array())
{
	echo "<tr>";
	for ($i = 0 ; $i < $col_size ; $i++)
		echo "<td>".$row[$i]."</td>";
		
	echo '<td><a href="delete.php?p_id='.$row[0].'">Delete</a></td>';	
	echo '<td><a href="edit.php?p_id='.$row[0].'">Edit</a></td>';
	echo "</tr>";
}
echo '</table>';
?>


</body>
</html>