<html>
<body>
<form action = "page2.php" method = "POST">
INPUT TEXT : <input type = "text" name = "t1">
<br/>INPUT PASSWORD : <input type = "password" name = "t2">
<br/>INPUT RADIO : <br/><input type = "radio" name = "t3" value = "Good" CHECKED>Good
<br/><input type = "radio" name = "t3" value = "Normal">Normal
<br/><input type = "radio" name = "t3" value = "Bad">Bad
<br/><input type = "checkbox" name = "t4" value = "OK">OK
<br/><input type = "checkbox" name = "t5" value = "NOT OK" CHECKED>NOT OK

<br/>LIST BOX / SELECT BOX<br/>
<select name='t6' size = '4'>
<option value = 'aaa'>A = Ant</option>
<option value = 'bbb'>B = Banana</option>
<option value = 'ccc'>C = Cat</option>
<option value = 'ddd'>D = Dog</option>
</select>

<br/>TEXTAREA
<br/><TEXTAREA name = 't7' rows='10' col='100'>Default Text</TEXTAREA>

<hr/>
<input type="submit" value = "Send!">
<input type="reset" value = "Clear all data">
</form>
<br/><br/><hr/>
<?php 
echo "INPUT TEXT: ".$_POST['t1'];
echo "<br/>INPUT Password: ".$_POST['t2'];
echo "<br/>INPUT Radio: ".$_POST['t3'];
echo "<br/>INPUT checkbox: ".$_POST['t4']."|".$_POST['t5'];
echo "<br/>INPUT SELECT / LIST BOX: ".$_POST['t6'];



?>
</body>
</html>