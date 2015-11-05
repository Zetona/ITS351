<?php
//use session
session_start();

if(
isset($_session['username']) &&
isset($_session['email'])){
	echo "Username : " . $_session['username'];
	echo "<br/>Email : ". $_session['email'];
	}
else{
	echo "Not logged in";
	}
?>