<?php
$mysqli  = new mysqli(
'10.10.18.147',   	//DB Server
'testdb',			//Username
'testdbpassword',	//Password
'hr'		//DB
);

if($mysqli ->connect_errno) {
	echo "Connect Error!";
}
else {
	//echo "Connect OK!";
}
?>