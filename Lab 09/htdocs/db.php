<html>
<head><title>LAB9 : DB</title></head>
<body>
GOOD MORNING
<hr/>

<?php
//Make connection

$db = new mysqli(
'10.10.17.49',		//DB Server
'testdb',			//Username
'testdbpassword',	//Password
'sec1_intro_db'		//DB
);

if($db->connect_errno){
	echo "Connect Error!!";
}
else{
	echo "Connect OK!";
}
?>

<hr/>

<?php
$q = "show tables";
$res = $db->query($q);
while($row = $res->fetch_array()){
	echo "TABLE = ".$row[0];
}
?>

<hr/>


<!-- Query for inserting data -->
<?php
if (isset($_POST['productname']) && isset($_POST['productprice'])){
	$q = "INSERT INTO product(p_name,p_price) value('".$_POST['productname']."','".$POST['productprice']."')";
	$res = $db->query($q);
	}
?>
<!-- Create field & button for inserting data -->
<form action="db.php" method="post">
	NAME : <input type = "text" name = "productname">
	<br/> PRICE : <input type = "text" name = "productprice">
	<br/> <input type="submit" />
<hr/>

<?php
//Query
$q = "SELECT * FROM product ORDER BY P_ID DESC";

//Show table header
echo "<table border = '1'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>NAME</th>";
echo "<th>PRICE</th>";
echo "</tr>";

$res = $db->query($q);

//get column size, allowing the table to be shown properly
$col_size = $res->field_count; 

//Show the table
while ($row = $res->fetch_array()){
	echo "<tr>";
	for ($i=0;$i<$col_size;$i++){
		echo "<td>".$row[$i]."</td>";
	}
	
	echo '<td><a href ="delete.php"?p_id='.$row[0].'>Delete</a></td>';
	echo "</tr>";

}
echo "</table>";
?>
