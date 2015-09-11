<?php
	
	require_once 'DataCard.inc';
	$serial = $_GET['serial']; 
	$language2 = $_GET['language2'];
	
	if ($language2=='Eng')
		$language = new CardDataBaseEng();
	if ($language2=='Thai')
		$language = new CardDataBaseThai();
	
	//$language = new CardDataBaseEng();

?>
<!DOCTYPE html>
<html>
<head>
<title>Chaos TCG</title>
<link rel="stylesheet" href="default1.css">
</head>


<body>
<div id="wrapper"> 
	<div id="div_header">
		Chaos TCG - Wiki & Translate .
	</div>
	<div id="div_subhead">
	
	</div>
	
	<div id="div_main">
		<div id="div_menu">
		<h1>Series List</h1>
			<ul id="menu">
				
				<li><a href="SanobaWitch.php">サノバウィッチ (Sanoba Witch)</a></li>
				<li><a href="SanobaWitchDeck.php">Make your own deck</a></li>

			
				
			</ul>		
		</div>
<!-- Content Area -->
		<div id="div_content" class="form">
			<!--%%%%% Main block %%%%-->
			<!--Form -->
			
			<form action="user.php" method="post"> <!-- Can edit .php link here -->
				<!-- Add Content here -->
				<h2><?php $language -> text_Name($serial) ?></h2><!-- Header Style -->
				<!-- PHP here -->
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
				&nbsp;
				<a href="SanobaTran.php?serial=<?php echo $serial; ?>&language2=Eng">Eng Version</a>
				/
				<a href="SanobaTran.php?serial=<?php echo $serial; ?>&language2=Thai">Thai Version</a><p>
				<center><?php $language -> text_image($serial) ?></center>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_SerialNo($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Name($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Sex($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Attribute($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Type($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Rare($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_AtkAndDef($serial) ?>
				&nbsp;&nbsp;&nbsp;&nbsp;<?php $language -> text_Ability($serial) ?>

			</form>

		</div> <!-- end div_content -->
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>
	
</div>
</body>
</html>

