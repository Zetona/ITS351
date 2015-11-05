<?php

session_start();

unset($_SESSION['username']);
unset($_SESSION['email']);

//Alternative
session_destroy();
//return home.
header("Location: login.html");

?>