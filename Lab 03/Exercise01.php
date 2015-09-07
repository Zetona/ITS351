<html>
<body>

<?php

	if ($_POST['submit'] == 'Reset'){
		$v = '';
	}
	
	else{
		$v = $_POST['data'];
		if (isset($_POST['t1']) ){
		$v = $v.$_POST['t1'];}
	}

?>

<form action = 'Exercise01.php' method = 'POST'>
<input type = "radio" name = "t1" value = "0"><font color="FF0000">Red</font>
<input type = "radio" name = "t1" value = "1"><font color="00FF00">Green</font>
<input type = "submit" name = "submit" value = 'Add'>
<input type = "submit" name = "submit" value = 'Reset'>

<input type="hidden" name="data" value="<?=$v?>">


</form>


<?php
if (isset($_POST['data']) ){
	echo '<table>';
	for ($i=0;$i<strlen($v);$i++){
		$char = substr( $v, $i, 1 );
		if ($char == '0'){
			$color = 'Red';}
		else{
			$color = 'Green';}
		echo "<tr><td bgcolor=$color>$i<td></tr>";
	}
	echo '</table>';



}

?>




</body>
</html>