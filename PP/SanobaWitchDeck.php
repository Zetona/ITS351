

<!DOCTYPE html>
<html>
<head>
<title>Chaos TCG - WIKI </title>
<link rel="stylesheet" href="default1.css">
</head>


<body>

<?php
			
			if(isset($_POST['deck'])){
				 $v = $_POST['deck'];
			}
			
			if(isset($_POST['serial'])){
				 $v = $v."|".$_POST['serial'];
			}
			

			if(isset($_POST['AddOrRemove'])){
				if($_POST['AddOrRemove'] == 'Clear')
				{
					$v = '';
				}
			}
			
		
			
			
?>

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
			
			<form action="SanobaWitchDeck.php" method="post"> <!-- Can edit .php link here -->
				<!-- Add Content here -->
				<h2>Card info ( just example )</h2><!-- Header Style -->
				<!-- PHP here -->
				
				<center><select name = "serial" size = "10"></center>
				<option value="1">YZ-201 SP &nbsp;&nbsp;&nbsp; 二人で一緒に「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="2">YZ-202 SR &nbsp;&nbsp;&nbsp; 困った代償“魔女”「綾地 寧々」&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="3">YZ-203 R  &nbsp;&nbsp;&nbsp; 幼児退行?「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="4">YZ-204 U  &nbsp;&nbsp;&nbsp; 自己嫌悪“魔女”「綾地 寧々」&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="5">YZ-205 C  &nbsp;&nbsp;&nbsp; 気になる視線「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="6">YZ-206 SP &nbsp;&nbsp;&nbsp; 手作りのプレゼント「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="7">YZ-207 SR &nbsp;&nbsp;&nbsp; 学院デビュー「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="8">YZ-208 R  &nbsp;&nbsp;&nbsp; トリック・オア・トリート「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="9">YZ-209 U  &nbsp;&nbsp;&nbsp; 一緒に食べるお昼ご飯「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="10">YZ-210 C &nbsp;&nbsp;&nbsp; 不意打ちに弱い「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="11">YZ-211 SP&nbsp;&nbsp;&nbsp; ハロウィンの魔法「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="12">YZ-212 SR&nbsp;&nbsp;&nbsp; 可愛い物好きな“魔女”「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="13">YZ-213 U &nbsp;&nbsp;&nbsp; 遊園地デート「椎葉 紬」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="14">YZ-214 C &nbsp;&nbsp;&nbsp; 抗議の視線「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="15">YZ-215 C &nbsp;&nbsp;&nbsp; 体験入部「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="16">YZ-216 SP&nbsp;&nbsp;&nbsp; 取り戻した感情「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="17">YZ-217 SR&nbsp;&nbsp;&nbsp;  学生会長「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="18">YZ-218 U &nbsp;&nbsp;&nbsp;  トリック・オア・トリート「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="19">YZ-219 C &nbsp;&nbsp;&nbsp; 悪戯な笑み「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="20">YZ-220 C &nbsp;&nbsp;&nbsp; 頼れる先輩「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="21">YZ-221 SRR &nbsp;&nbsp;&nbsp;  急造バンドのギターボーカル「仮屋 和奏」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="22">YZ-222 SR  &nbsp;&nbsp;&nbsp; “SchwarzeKatze”のウェイトレス「仮屋 和奏」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="23">YZ-223 U &nbsp;&nbsp;&nbsp; 模擬デート「仮屋 和奏」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="24">YZ-224 U &nbsp;&nbsp;&nbsp; 待ちに待った日「仮屋 和奏」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="25">YZ-225 SRR &nbsp;&nbsp;&nbsp; 寧々の“アルプ”「相馬 七緒」&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="26">YZ-226 SR  &nbsp;&nbsp;&nbsp;  “SchwarzeKatze”のオーナー「相馬 七緒」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="27">YZ-227 C &nbsp;&nbsp;&nbsp;  核心をつく「相馬 七緒」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="28">YZ-228 SR&nbsp;&nbsp;&nbsp;  2年A組担任「久島 佳苗」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="29">YZ-229 U &nbsp;&nbsp;&nbsp;  “オカルト研究部”顧問「久島 佳苗」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="30">YZ-230 C &nbsp;&nbsp;&nbsp;  ゲスな笑い「久島 佳苗」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="31">YZ-231 SRR &nbsp;&nbsp;&nbsp;  心機一転「越路 美穂」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="32">YZ-232 C &nbsp;&nbsp;&nbsp;  誰にも言えない秘密「越路 美穂」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="33">YZ-233 SR &nbsp;&nbsp;&nbsp;  紬の“アルプ”「アカギ」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="34">YZ-234 C &nbsp;&nbsp;&nbsp;  怪しい取引「アカギ」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="35">YZ-235 SRR &nbsp;&nbsp;&nbsp; 人の気持ちを感じ取れる力「保科 柊史」&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				
				<option value="36">YZ-236 R &nbsp;&nbsp;&nbsp; 友人としての忠告「海道 秀明」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="37">YZ-237 C &nbsp;&nbsp;&nbsp; 急造バンドのドラム「海道 秀明」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="38">YZ-238 U &nbsp;&nbsp;&nbsp; 良き父親「保科 太一」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="39">YZ-239 R &nbsp;&nbsp;&nbsp;  心の欠片回収“魔女”「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="40">YZ-240 U &nbsp;&nbsp;&nbsp;  トリック・オア・トリート「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="41">YZ-241 C &nbsp;&nbsp;&nbsp; 思い出したら…「綾地 寧々」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="42">YZ-242 R &nbsp;&nbsp;&nbsp; ギリギリの駆け引き「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="43">YZ-243 U &nbsp;&nbsp;&nbsp;  ありのままの自分「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="44">YZ-244 C &nbsp;&nbsp;&nbsp; 意外と純情「因幡 めぐる」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="45">YZ-245 U &nbsp;&nbsp;&nbsp;  心の欠片回収“魔女”「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="46">YZ-246 C &nbsp;&nbsp;&nbsp; トリック・オア・トリート「椎葉 紬」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="47">YZ-247 C &nbsp;&nbsp;&nbsp;  シュウジくんと一緒「椎葉 紬」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="48">YZ-248 R &nbsp;&nbsp;&nbsp;  破壊力抜群「戸隠 憧子」 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="49">YZ-249 U &nbsp;&nbsp;&nbsp;  着慣れない服「戸隠 憧子」  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				<option value="50">YZ-250 C &nbsp;&nbsp;&nbsp; 朝のひととき「戸隠 憧子」&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</option>
				
				
				<input type = "submit" name = "AddOrRemove"	value = "Add" />
				<input type = "submit" name = "AddOrRemove" value = "Clear" /><br/><br/>
				
				<input type = "hidden" name="deck" value = "<?php echo $v; ?>"/>
				
				<?php 
				
				
					if(isset($v)){
						$arr1 = explode("|",$v);
					}
					if(isset($arr1)){
						for($i = 0 ; $i < count($arr1) ; $i++)
						{
							if($arr1[$i] == '1')
								echo '<img src="image/YZ-201 SP.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '2')
								echo '<img src="image/YZ-202 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '3')
								echo '<img src="image/YZ-203 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '4')
								echo '<img src="image/YZ-204 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '5')
								echo '<img src="image/YZ-205 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '6')
								echo '<img src="image/YZ-206 SP.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '7')
								echo '<img src="image/YZ-207 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '8')
								echo '<img src="image/YZ-208 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '9')
								echo '<img src="image/YZ-209 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '10')
								echo '<img src="image/YZ-210 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '11')
								echo '<img src="image/YZ-211 SP.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '12')
								echo '<img src="image/YZ-212 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '13')
								echo '<img src="image/YZ-213 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '14')
								echo '<img src="image/YZ-214 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '15')
								echo '<img src="image/YZ-215 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '16')
								echo '<img src="image/YZ-216 SP.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '17')
								echo '<img src="image/YZ-217 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '18')
								echo '<img src="image/YZ-218 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '19')
								echo '<img src="image/YZ-219 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '20')
								echo '<img src="image/YZ-220 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '21')
								echo '<img src="image/YZ-221 SRR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '22')
								echo '<img src="image/YZ-222 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '23')
								echo '<img src="image/YZ-223 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '24')
								echo '<img src="image/YZ-224 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '25')
								echo '<img src="image/YZ-225 SRR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '26')
								echo '<img src="image/YZ-226 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '27')
								echo '<img src="image/YZ-227 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '28')
								echo '<img src="image/YZ-228 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '29')
								echo '<img src="image/YZ-229 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '30')
								echo '<img src="image/YZ-230 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '31')
								echo '<img src="image/YZ-231 SRR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '32')
								echo '<img src="image/YZ-232 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '33')
								echo '<img src="image/YZ-233 SR.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '34')
								echo '<img src="image/YZ-234 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '35')
								echo '<img src="image/YZ-235 SRR.jpg" height = 160 >&nbsp;';
							
							if($arr1[$i] == '36')
								echo '<img src="image/YZ-236 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '37')
								echo '<img src="image/YZ-237 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '38')
								echo '<img src="image/YZ-238 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '39')
								echo '<img src="image/YZ-239 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '40')
								echo '<img src="image/YZ-240 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '41')
								echo '<img src="image/YZ-241 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '42')
								echo '<img src="image/YZ-242 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '43')
								echo '<img src="image/YZ-243 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '44')
								echo '<img src="image/YZ-244 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '45')
								echo '<img src="image/YZ-245 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '46')
								echo '<img src="image/YZ-246 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '47')
								echo '<img src="image/YZ-247 C.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '48')
								echo '<img src="image/YZ-248 R.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '49')
								echo '<img src="image/YZ-249 U.jpg" height = 160 >&nbsp;';
							if($arr1[$i] == '50')
								echo '<img src="image/YZ-250 C.jpg" height = 160 >&nbsp;';
							
						}
					}
				?>

			</form>

		</div> <!-- end div_content -->
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>
	
</div>
</body>
</html>
