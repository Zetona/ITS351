<html>
<body>

<?php

	if ($_POST['t2'] == 'Clear Cart'){
		$v = '';
	}
	else{
		$v = $_POST['data'];
		if (isset($_POST['t1']) ){
		$v = $v."|".$_POST['t1'];}
	}	
?>


<form action = 'Exercise02.php' method = 'POST'>

<select name='t1' size = 3>
<option >Paper</option>
<option >Picture</option>
<option >Printer</option>
</select>

<input type = "submit" name = "t2" value = "Add to Cart">
<input type = "submit" name = "t2" value = "Clear Cart">
<input type="hidden" name="data" value="<?=$v?>">
</form>

<?php
if (isset($_POST['data']) ){
	echo '<table>';
	$list = explode("|",$v);
//	print_r ($list);
	for ($i=1;$i<count($list);$i++){
		if ($list[$i] == 'Paper'){
			$picture = 'p1.png';}
		elseif ($list[$i] == 'Picture'){
			$picture = 'p2.png';}
		elseif ($list[$i] == 'Printer'){
			$picture = 'p3.png';}
		echo "<td><img src = $picture><td>";
	}
	echo '</table>';



}

?>


</body>
</html>