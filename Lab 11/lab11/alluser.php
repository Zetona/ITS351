<html>
<head><title>LAB11 : LOGIN</title></head>
<body>

<?php
include_once('connect.php');
?>

<?php
$q = "SELECT * FROM user ORDER BY id DESC";
echo '<table border="1">';
echo '<tr>';
echo '<th>ID</th>';
echo '<th>NAME</th>';
echo '<th>EMAIL</th>';
echo '<th>USERNAME</th>';
echo '<th>PASSWORD</th>';
echo '<th>DISABLE</th>';
echo '</tr>';

$res = $mysqli->query($q);

$col_size = $res->field_count; //GET COL SIZE

while ($row = $res->fetch_array())
{
	echo "<tr>";
	for ($i = 0 ; $i < $col_size ; $i++)
		echo "<td>".$row[$i]."</td>";
		
	echo "</tr>";
}
echo '</table>';
?>
















</body>
</html>