<?php
$db = new mysqli(
'10.10.19.181',   	//DB Server
'testdb',			//Username
'testdbpassword',	//Password
'sec1_intro_db'		//DB
);

if($db->connect_errno) {
	echo "Connect Error!";
}
else {
	echo "Connect OK!";
}
?>