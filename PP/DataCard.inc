<?php

	class cardData01{
		
		function text_image(){
		}
		
		function text_SerialNo(){
			
		}
		function text_Name(){
			
		}
		function text_Sex(){
			
		}
		function text_Attribute(){
			
		}
		function text_Type(){
			
		}
		function text_Rare(){
			
		}
		function text_AtkAndDef(){
			
		}
		function text_Ability(){
			
		}
	}
	
	class CardDataBaseEng extends cardData01{
		function text_image($input){
			if($input == 'YZ-201 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-201 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-201 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-202 R'){echo '<img src="image/YZ-202 SR.jpg" height = 320>&nbsp;'; 	echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-203 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-204 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-205 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-206 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-206 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-206 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-207 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-207 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-208 R') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-209 U') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-210 C') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-211 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-211 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-211 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-212 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-212 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-213 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-214 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-215 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-216 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-216 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-216 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-217 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-217 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-218 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-219 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-220 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-221 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-221 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-221 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-222 SR') {echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-222 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-223 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-224 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-225 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-225 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-225 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-226 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-226 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-227 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-228 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-228 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-229 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-230 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-231 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-231 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-231 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-232 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-233 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-233 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-234 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-235 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-235 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-235 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-236 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-237 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-238 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-239 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-240 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-241 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-242 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-243 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-244 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-245 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-246 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-247 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-248 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-249 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-250 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
		}
		
		function text_SerialNo($input){
			echo 'Serial No : '.$input.'<br/><br/>';
		}
		
		function text_Name($input){
			echo 'Name : ';
			if($input == 'YZ-201 SP') echo '二人で一緒に「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-202 R') echo '困った代償“魔女”「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-203 R') echo '幼児退行?「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-204 U') echo '自己嫌悪“魔女”「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-205 C') echo '気になる視線「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-206 SP') echo '手作りのプレゼント「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-207 SR') echo '学院デビュー「因幡 めぐる」 <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'トリック・オア・トリート「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-209 U')echo '一緒に食べるお昼ご飯「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-210 C')echo '不意打ちに弱い「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-211 SP')echo 'ハロウィンの魔法「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-212 SR')echo '可愛い物好きな“魔女”「椎葉 紬」 <br/><br/>';	
			if($input == 'YZ-213 U')echo '遊園地デート「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-214 C')echo '抗議の視線「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-215 C')echo '体験入部「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-216 SP')echo '取り戻した感情「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-217 SR')echo '学生会長「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-218 U')echo 'トリック・オア・トリート「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-219 C')echo '悪戯な笑み「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-220 C')echo '頼れる先輩「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-221 SRR')echo '急造バンドのギターボーカル「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-222 SR')echo '“SchwarzeKatze”のウェイトレス「仮屋 和奏」 <br/><br/>';	
			if($input == 'YZ-223 U')echo '模擬デート「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-224 U')echo '待ちに待った日「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-225 SRR')echo '寧々の“アルプ”「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-226 SR')echo '“SchwarzeKatze”のオーナー「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-227 C')echo '核心をつく「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-228 SR')echo '2年A組担任「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-229 U')echo '“オカルト研究部”顧問「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-230 C')echo 'ゲスな笑い「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-231 SRR')echo '心機一転「越路 美穂」 <br/><br/>';
			if($input == 'YZ-232 C')echo '誰にも言えない秘密「越路 美穂」 <br/><br/>';
			if($input == 'YZ-233 SR')echo '紬の“アルプ”「アカギ」 <br/><br/>';
			if($input == 'YZ-234 C')echo '怪しい取引「アカギ」 <br/><br/>';
			if($input == 'YZ-235 SRR')echo '人の気持ちを感じ取れる力「保科 柊史」 <br/><br/>';
			if($input == 'YZ-236 R')echo '友人としての忠告「海道 秀明」 <br/><br/>';
			if($input == 'YZ-237 C')echo '急造バンドのドラム「海道 秀明」 <br/><br/>';
			if($input == 'YZ-238 U')echo '良き父親「保科 太一」 <br/><br/>';
			if($input == 'YZ-239 R')echo '心の欠片回収“魔女”「綾地 寧々」<br/><br/>';
			if($input == 'YZ-240 U')echo 'トリック・オア・トリート「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-241 C')echo '思い出したら…「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-242 R')echo 'ギリギリの駆け引き「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-243 U')echo 'ありのままの自分「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-244 C')echo '意外と純情「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-245 U')echo '心の欠片回収“魔女”「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-246 C')echo 'トリック・オア・トリート「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-247 C')echo 'シュウジくんと一緒「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-248 R')echo '破壊力抜群「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-249 U')echo '着慣れない服「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-250 C')echo '朝のひととき「戸隠 憧子」 <br/><br/>';
		}
		
		function text_Sex($input){
			 echo 'Sex : ';
			if($input == 'YZ-201 SP') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-202 R') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-203 R') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-204 U') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-205 C') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SP') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-207 SR') echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-208 R')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-209 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-210 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-211 SP')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-212 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-213 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-214 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-215 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-216 SP')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-217 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-218 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-219 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-220 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-221 SRR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-222 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-223 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-224 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-225 SRR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-226 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-227 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-228 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-229 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-230 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-231 SRR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-232 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-233 SR')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-234 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-235 SRR')echo 'Male &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-236 R')echo 'Male &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-237 C')echo 'Male &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-238 U')echo 'Male &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-239 R')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-240 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-241 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-242 R')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-243 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-244 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-245 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-246 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-247 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-248 R')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-249 U')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-250 C')echo 'Female &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
		}
		
		function text_Attribute($input){
			echo 'Attribute : ';
			if($input == 'YZ-201 SP') echo 'Dark <br/><br/>';
			if($input == 'YZ-202 R') echo 'Dark <br/><br/>';
			if($input == 'YZ-203 R') echo 'Dark <br/><br/>';
			if($input == 'YZ-204 U') echo 'Dark <br/><br/>';
			if($input == 'YZ-205 C') echo 'Dark <br/><br/>';
			if($input == 'YZ-206 SP') echo 'Fire <br/><br/>';
			if($input == 'YZ-207 SR') echo 'Fire <br/><br/>';
			if($input == 'YZ-208 R')echo 'Fire <br/><br/>';
			if($input == 'YZ-209 U')echo 'Fire <br/><br/>';
			if($input == 'YZ-210 C')echo 'Fire <br/><br/>';
			if($input == 'YZ-211 SP')echo 'Light <br/><br/>';
			if($input == 'YZ-212 SR')echo 'Light <br/><br/>';	
			if($input == 'YZ-213 U')echo 'Light <br/><br/>';
			if($input == 'YZ-214 C')echo 'Light <br/><br/>';
			if($input == 'YZ-215 C')echo 'Light <br/><br/>';
			if($input == 'YZ-216 SP')echo 'Earth <br/><br/>';
			if($input == 'YZ-217 SR')echo 'Earth <br/><br/>';
			if($input == 'YZ-218 U')echo 'Earth <br/><br/>';
			if($input == 'YZ-219 C')echo 'Earth <br/><br/>';
			if($input == 'YZ-220 C')echo 'Earth <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'Air <br/><br/>';
			if($input == 'YZ-222 SR')echo 'Air <br/><br/>';	
			if($input == 'YZ-223 U')echo 'Air <br/><br/>';
			if($input == 'YZ-224 U')echo 'Air <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'Dark <br/><br/>';
			if($input == 'YZ-226 SR')echo 'Dark <br/><br/>';
			if($input == 'YZ-227 C')echo 'Dark <br/><br/>';
			if($input == 'YZ-228 SR')echo 'Air <br/><br/>';
			if($input == 'YZ-229 U')echo 'Air <br/><br/>';
			if($input == 'YZ-230 C')echo 'Air <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'Water <br/><br/>';
			if($input == 'YZ-232 C')echo 'Water <br/><br/>';
			if($input == 'YZ-233 SR')echo 'Air And Dark <br/><br/>';
			if($input == 'YZ-234 C')echo 'Air And Dark <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'Null <br/><br/>';
			if($input == 'YZ-236 R')echo 'Water <br/><br/>';
			if($input == 'YZ-237 C')echo 'Water <br/><br/>';
			if($input == 'YZ-238 U')echo 'Null <br/><br/>';
			if($input == 'YZ-239 R')echo 'Dark <br/><br/>';
			if($input == 'YZ-240 U')echo 'Dark <br/><br/>';
			if($input == 'YZ-241 C')echo 'Dark <br/><br/>';
			if($input == 'YZ-242 R')echo 'Fire <br/><br/>';
			if($input == 'YZ-243 U')echo 'Fire <br/><br/>';
			if($input == 'YZ-244 C')echo 'Fire <br/><br/>';
			if($input == 'YZ-245 U')echo 'Light <br/><br/>';
			if($input == 'YZ-246 C')echo 'Light <br/><br/>';
			if($input == 'YZ-247 C')echo 'Light <br/><br/>';
			if($input == 'YZ-248 R')echo 'Earth <br/><br/>';
			if($input == 'YZ-249 U')echo 'Earth <br/><br/>';
			if($input == 'YZ-250 C')echo 'Earth <br/><br/>';
		}
		
		function text_Type($input){
			echo 'Type : ';
			if($input == 'YZ-201 SP') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-202 R') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-203 R') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-204 U') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-205 C') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SP') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-207 SR') echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-208 R')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-209 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-210 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-211 SP')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-212 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-213 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-214 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-215 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-216 SP')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-217 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-218 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-219 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-220 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-221 SRR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-222 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-223 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-224 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-225 SRR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-226 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-227 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-228 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-229 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-230 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-231 SRR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-232 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-233 SR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-234 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-235 SRR')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-236 R')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-237 C')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-238 U')echo 'Character &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-239 R')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-240 U')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-241 C')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-242 R')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-243 U')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-244 C')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-245 U')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-246 C')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-247 C')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-248 R')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-249 U')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-250 C')echo 'Extra &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
		}
		function text_Rare($input){
			echo 'Rarerity : ';
			if($input == 'YZ-201 SP') echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-202 R') echo 'R/SR <br/><br/>';
			if($input == 'YZ-203 R') echo 'R <br/><br/>';
			if($input == 'YZ-204 U') echo 'U <br/><br/>';
			if($input == 'YZ-205 C') echo 'C <br/><br/>';
			if($input == 'YZ-206 SP') echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-207 SR') echo 'RR/SR <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'R <br/><br/>';
			if($input == 'YZ-209 U')echo 'U <br/><br/>';
			if($input == 'YZ-210 C')echo 'C <br/><br/>';
			if($input == 'YZ-211 SP')echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-212 SR')echo 'RR/SR <br/><br/>';	
			if($input == 'YZ-213 U')echo 'U <br/><br/>';
			if($input == 'YZ-214 C')echo 'C <br/><br/>';
			if($input == 'YZ-215 C')echo 'C <br/><br/>';
			if($input == 'YZ-216 SP')echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-217 SR')echo 'RR/SR <br/><br/>';	
			if($input == 'YZ-218 U')echo 'U <br/><br/>';
			if($input == 'YZ-219 C')echo 'C <br/><br/>';
			if($input == 'YZ-220 C')echo 'C <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'RR/RRP/SRR <br/><br/>';
			if($input == 'YZ-222 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-223 U')echo 'U <br/><br/>';
			if($input == 'YZ-224 U')echo 'U <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'RR/RRP/SRR <br/><br/>';
			if($input == 'YZ-226 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-227 C')echo 'C <br/><br/>';
			if($input == 'YZ-228 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-229 U')echo 'U <br/><br/>';
			if($input == 'YZ-230 C')echo 'C <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'RR/RRP/SRR <br/><br/>';
			if($input == 'YZ-232 C')echo 'C <br/><br/>';
			if($input == 'YZ-233 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-234 C')echo 'C <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'RR/RRP/SRR <br/><br/>';
			if($input == 'YZ-236 R')echo 'R/SR <br/><br/>';
			if($input == 'YZ-237 C')echo 'C <br/><br/>';
			if($input == 'YZ-238 U')echo 'U <br/><br/>';
			if($input == 'YZ-239 R')echo 'R <br/><br/>';
			if($input == 'YZ-240 U')echo 'U <br/><br/>';
			if($input == 'YZ-241 C')echo 'C <br/><br/>';
			if($input == 'YZ-242 R')echo 'R <br/><br/>';
			if($input == 'YZ-243 U')echo 'U <br/><br/>';
			if($input == 'YZ-244 C')echo 'C <br/><br/>';
			if($input == 'YZ-245 U')echo 'U <br/><br/>';
			if($input == 'YZ-246 C')echo 'C <br/><br/>';
			if($input == 'YZ-247 C')echo 'C <br/><br/>';
			if($input == 'YZ-248 R')echo 'R <br/><br/>';
			if($input == 'YZ-249 U')echo 'U <br/><br/>';
			if($input == 'YZ-250 C')echo 'C <br/><br/>';
		}
		function text_AtkAndDef($input){
			if($input == 'YZ-201 SP') echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-202 R') echo 'Atk : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 6(+2) <br/><br/>';
			if($input == 'YZ-203 R') echo 'Atk : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+2) <br/><br/>';
			if($input == 'YZ-204 U') echo 'Atk : 0(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+2) <br/><br/>';
			if($input == 'YZ-205 C') echo 'Atk : 3(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 8(-) <br/><br/>';
			if($input == 'YZ-206 SP') echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-207 SR') echo 'Atk : 8(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(-) <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'Atk : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+1) <br/><br/>';
			if($input == 'YZ-209 U')echo 'Atk : 1(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 1(+2) <br/><br/>';
			if($input == 'YZ-210 C')echo 'Atk : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+1) <br/><br/>';
			if($input == 'YZ-211 SP')echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-212 SR')echo 'Atk : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(-) <br/><br/>';	
			if($input == 'YZ-213 U')echo 'Atk : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 6(+2) <br/><br/>';
			if($input == 'YZ-214 C')echo 'Atk : 0(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 1(+2) <br/><br/>';
			if($input == 'YZ-215 C')echo 'Atk : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-216 SP')echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-217 SR')echo 'Atk : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(-) <br/><br/>';
			if($input == 'YZ-218 U')echo 'Atk : 0(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 1(+3) <br/><br/>';
			if($input == 'YZ-219 C')echo 'Atk : 5(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+1) <br/><br/>';
			if($input == 'YZ-220 C')echo 'Atk : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+1) <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-222 SR')echo 'Atk : 6(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+2) <br/><br/>';	
			if($input == 'YZ-223 U')echo 'Atk : 8(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+1) <br/><br/>';
			if($input == 'YZ-224 U')echo 'Atk : 0(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+3) <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'Atk : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 5(+1) <br/><br/>';
			if($input == 'YZ-226 SR')echo 'Atk : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 5(+1) <br/><br/>';
			if($input == 'YZ-227 C')echo 'Atk : 6(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 5(-) <br/><br/>';
			if($input == 'YZ-228 SR')echo 'Atk : 9(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(-) <br/><br/>';
			if($input == 'YZ-229 U')echo 'Atk : 8(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(-) <br/><br/>';
			if($input == 'YZ-230 C')echo 'Atk : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
			if($input == 'YZ-232 C')echo 'Atk : 8(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+1) <br/><br/>';
			if($input == 'YZ-233 SR')echo 'Atk : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 7(+2) <br/><br/>';
			if($input == 'YZ-234 C')echo 'Atk : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(-) <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'Atk : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+1) <br/><br/>';
			if($input == 'YZ-236 R')echo 'Atk : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 5(+2) <br/><br/>';
			if($input == 'YZ-237 C')echo 'Atk : 8(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(-) <br/><br/>';
			if($input == 'YZ-238 U')echo 'Atk : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 6(-) <br/><br/>';
			if($input == 'YZ-239 R')echo 'Atk : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(-) <br/><br/>';
			if($input == 'YZ-240 U')echo 'Atk : 5(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+1) <br/><br/>';
			if($input == 'YZ-241 C')echo 'Atk : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+1) <br/><br/>';
			if($input == 'YZ-242 R')echo 'Atk : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(-) <br/><br/>';
			if($input == 'YZ-243 U')echo 'Atk : 3(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+1) <br/><br/>';
			if($input == 'YZ-244 C')echo 'Atk : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 1(-) <br/><br/>';
			if($input == 'YZ-245 U')echo 'Atk : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 2(+1) <br/><br/>';
			if($input == 'YZ-246 C')echo 'Atk : 1(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+1) <br/><br/>';
			if($input == 'YZ-247 C')echo 'Atk : 5(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 1(+1) <br/><br/>';
			if($input == 'YZ-248 R')echo 'Atk : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(+1) <br/><br/>';
			if($input == 'YZ-249 U')echo 'Atk : 5(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 3(-) <br/><br/>';
			if($input == 'YZ-250 C')echo 'Atk : 1(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       Def : 4(+2) <br/><br/>';
		}
		function text_Ability($input){
			
			echo 'Ability <br/><br/>';
			if($input == 'YZ-201 SP') echo 	'[Cost]Draw 2 cards, put 1 card from your hand to the waiting room.<br/> 
											[Maintenance] Put 1 card from your hand to the waiting room.<br/>
											[Auto][Face Down OK] If this character is put from [Face Up] to [Face Down] 
											due to not paying the cost for maintenance, until end of the turn, 
											this character cannot be put to [Face Up] by [Entry].<br/>
											[Battle][Battle OK][Partner][Turn 1](Put 1 card from your hand to the waiting room.) Draw 2 cards, 
											until the end of the turn, this character gains +3 DEF.<br/>
											[Battle][Battle OK][Turn 1](Put 2 cards from your waiting room to the backyard.) 
											Until end of the turn, 1 character other than this character gains +2/+2. 
											If the cards put to backyard as cost for this ability are all character cards, 
											additionally, until the end of the battle phase, target 1 character gains -3 DEF.<br/>';
											
			if($input == 'YZ-202 R') echo 	'[Entry](Put 1 of your [Same OS] character from [Face Down] to [Face Up])<br/>
											[Auto] When your [Same OS] partner is chosen as attack character, draw a card.<br/>
											[Auto] When this character battles a character with skill, until end of battle, battling opponent get -4 ATK.<br/>';

			
			if($input == 'YZ-203 R') echo	'[Entry](Put 1 of your [Same OS] character from [Face Down] to [Face Up])<br/>
											[Auto]When this card enter or level up or auto level up. You can put 2 card from your waiting room to backyard
											If do at the end of this turn out all or your character from [Rest] to [Stand]</br>
											[Main](Put 1 card from your hand to waiting room) Draw 2 cards.';
											
			if($input == 'YZ-204 U') echo	'[Main][Turn 1](Put 1 card from your hand to waiting room) Draw 2 cards.<br/>
											[Main][Turn 1](Put this card from [Stand] to [Reverse]) Put one of the opponent friend to [Rest]';
											
			if($input == 'YZ-205 C') echo	'[Cost] Put 1 of your friend from [Stand][Face Up] to [Face Down]</br>
											[Trespass] Put 1 card from your hand to the waiting room, put 1 of your [Face Up] friend to the waiting room.<br/>
											[Auto][Turn 1] When your partner is [Inaba Meguru], and this card is put from [Stand] to [Rest] by card costs or effects, 
											until end of the turn, your [Inaba Meguru] gains [Penetrate]. After that, you may put 1 card from your hand to the waiting room. 
											If you do so, put this card from [Rest] to [Stand].<br/>
											[Main][Turn1](Put 1 card from your hand to the waiting room.) Draw 2 cards.';
											
			if($input == 'YZ-206 SP') echo 	'[Entry](Put 1 of your [Same OS] characters from [Face Down] to [Face Up].)<br/>
											[Auto] When your partner is chosen as attack or guard character, and puts its battle opponent to [Face Down] from battle damage, you may draw 1 card.</br>
											[Battle][Battle OK][Partner][Turn 1] (Put 1 or more of your friends from [Face Up][Stand] to [Face Up][Rest].) 
											Until the end of the turn, for each character put to [Rest] for the cost of this ability, this character gains +2/+2. 
											If you put 3 or more characters to [Rest] for the cost of this ability, additionally put this character from [Rest] to [Stand].';
			
			if($input == 'YZ-207 SR') echo 	'[Entry] (Put 1 character from [Face Up][Stand] to [Face Down][Reverse])<br/>
											[Trespass] (Put 1 character card from your hand to the waiting room, put 1 [Face Up] Friend to your hand)</br>
											[Auto][Turn 1] When a card is put to the backyard from your waiting room by your own card effect or cost, until the end of the turn, this character gains 1 ATK, [First Strike].<br/>
											[Penetrate]';
											
			if($input == 'YZ-208 R') echo 	'[Entry] (Put 1 [Same OS] character from [Face Down] to [Face Up])<br/>
											[Auto] When this character Enters, Levels Up or Auto Levels Up, you may look at the top 1 card of your deck. If you do so, you may put that card to the top or bottom of your deck. After that, draw 1 card.<br/>
											[Battle] (Put 1 card and this card from your hand to the waiting room) Until the end of the battle, target attacking character has its skills nullified. When this card is in your hand, this ability can be activated.';
			if($input == 'YZ-209 U') echo	'[Auto] When this character Enters, Levels Up or Auto Levels Up. Deal 3 damage to 1 opponent character<br/>
											[Main][Turn1](Put 1 card from your hand to the waiting room.)Draw 2 cards.';
			if($input == 'YZ-210 C') echo	'[Entry] (Put 1 [Same OS] character from [Face Down] to [Face Up])<br/>
											[Continuous] When your Characters take non-battle damage, reduce that damage by 3<br/>
											[Auto] When this character Enters, Levels Up or Auto Levels Up, you may look at the top 1 card of your deck. If you do so, you may put that card to the top or bottom of your deck. After that, draw 1 card.';
			if($input == 'YZ-211 SP')echo 	'[Entry](Draw 2 cards, put 1 card from your hand to the waiting room.)<br/>
											[Continuous] When this character has a set card not named <Little Devil Cosplay> set on, put this character to [Face Down].<br/>
											[Auto][Turn 1] At the start of the battle phase, if your partner has a set card set on, until the end of the turn, your [Same OS] partner gains +2/+2.<br/>
											[Battle][Battle OK][Partner][Turn 1](Put 1 character card from your waiting room to the backyard.) Choose 1 of the 2 following. If you have 5 or more character cards with different names in your backyard, instead choose both and resolve them in any order.<br/>
											 &nbsp;&nbsp;&nbsp;&nbsp;-Until end of the turn, target 1 character gains -3 ATK.<br/>
											 &nbsp;&nbsp;&nbsp;&nbsp;-Until end of the turn, this character gains +2 ATK and [Penetrate].';
			if($input == 'YZ-212 SR') echo	'[Entry] (Put 1 character from [Face Up][Stand] to [Face Down][Reverse])<br/>
											[Trespass] (Put 1 character from your hand to the waiting room, put 1 [Face Up] Friend to your hand)<br/>
											[Auto][Turn 1] When your characters deal battle damage to your opponent, you may put up to 3 cards from your opponent is waiting room to backyard<br/>
											[Penetrate]';
			if($input == 'YZ-213 U') echo	'[Entry] (Put 1 [Same OS] character from [Face Down] to [Face Up])<br/>
											[Continuous] Opponent character on the hand lost [Trespass]<br/>
											[Auto][Turn1] When your [Same OS] character enter, Put 2 opponent card from waiting room to Backyard and then draw 1 card';
			if($input == 'YZ-214 C'){};
			if($input == 'YZ-215 C'){};
			if($input == 'YZ-216 SP'){};
			if($input == 'YZ-217 SR'){};
			if($input == 'YZ-218 U'){};
			if($input == 'YZ-219 C'){};
			if($input == 'YZ-220 C'){};
			if($input == 'YZ-221 SRR'){};
			if($input == 'YZ-222 SR'){};	
			if($input == 'YZ-223 U'){};
			if($input == 'YZ-224 U'){};
			if($input == 'YZ-225 SRR'){};
			if($input == 'YZ-226 SR'){};
			if($input == 'YZ-227 C'){};
			if($input == 'YZ-228 SR'){};
			if($input == 'YZ-229 U'){};
			if($input == 'YZ-230 C'){};
			if($input == 'YZ-231 SRR'){};
			if($input == 'YZ-232 C'){};
			if($input == 'YZ-233 SR'){};
			if($input == 'YZ-234 C'){};
			if($input == 'YZ-235 SRR'){};
			if($input == 'YZ-236 R'){};
			if($input == 'YZ-237 C'){};
			if($input == 'YZ-238 U'){};
			if($input == 'YZ-239 R'){};
			if($input == 'YZ-240 U'){};
			if($input == 'YZ-241 C'){};
			if($input == 'YZ-242 R'){};
			if($input == 'YZ-243 U'){};
			if($input == 'YZ-244 C'){};
			if($input == 'YZ-245 U'){};
			if($input == 'YZ-246 C'){};
			if($input == 'YZ-247 C'){};
			if($input == 'YZ-248 R'){};
			if($input == 'YZ-249 U'){};
			if($input == 'YZ-250 C'){};
		}	
		
	}

	class CardDataBaseThai extends cardData01{
		function text_image($input){
			if($input == 'YZ-201 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-201 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-201 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-202 R'){echo '<img src="image/YZ-202 SR.jpg" height = 320>&nbsp;'; 	echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-203 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-204 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-205 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-206 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-206 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-206 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-207 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-207 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-208 R') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-209 U') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-210 C') {echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-211 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-211 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-211 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-212 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-212 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-213 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-214 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-215 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-216 SP'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-216 SSP.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-216 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-217 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;'; 	echo '<img src="image/YZ-217 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-218 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-219 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-220 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-221 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-221 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-221 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-222 SR') {echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-222 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-223 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-224 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-225 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-225 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-225 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-226 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-226 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-227 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-228 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-228 R.jpg" height = 320>&nbsp;<br/><br/>';}	
			if($input == 'YZ-229 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-230 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-231 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-231 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-231 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-232 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-233 SR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-233 R.jpg" height = 320>&nbsp;<br/><br/>';}
			if($input == 'YZ-234 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-235 SRR'){echo '<img src="image/'.$input.'.jpg" height = 320 >&nbsp;';	echo '<img src="image/YZ-235 RRR.jpg" height = 320>&nbsp;';		echo '<img src="image/YZ-235 RR.jpg" height = 320><br/><br/>';}
			if($input == 'YZ-236 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-237 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-238 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-239 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-240 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-241 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-242 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-243 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-244 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-245 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-246 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-247 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-248 R'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-249 U'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
			if($input == 'YZ-250 C'){echo '<img src="image/'.$input.'.jpg" height = 320 ><br/><br/>';}
		}
		
		function text_SerialNo($input){
			echo 'รหัสการ์ด : '.$input.'<br/><br/>';
		}
		
		function text_Name($input){
			echo 'ชื่อการ์ด : ';
			if($input == 'YZ-201 SP') echo '二人で一緒に「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-202 R') echo '困った代償“魔女”「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-203 R') echo '幼児退行?「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-204 U') echo '自己嫌悪“魔女”「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-205 C') echo '気になる視線「綾地 寧々」<br/><br/>';
			if($input == 'YZ-206 SP') echo '手作りのプレゼント「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-207 SR') echo '学院デビュー「因幡 めぐる」 <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'トリック・オア・トリート「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-209 U')echo '一緒に食べるお昼ご飯「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-210 C')echo '不意打ちに弱い「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-211 SP')echo 'ハロウィンの魔法「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-212 SR')echo '可愛い物好きな“魔女”「椎葉 紬」 <br/><br/>';	
			if($input == 'YZ-213 U')echo '遊園地デート「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-214 C')echo '抗議の視線「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-215 C')echo '体験入部「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-216 SP')echo '取り戻した感情「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-217 SR')echo '学生会長「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-218 U')echo 'トリック・オア・トリート「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-219 C')echo '悪戯な笑み「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-220 C')echo '頼れる先輩「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-221 SRR')echo '急造バンドのギターボーカル「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-222 SR')echo '“SchwarzeKatze”のウェイトレス「仮屋 和奏」 <br/><br/>';	
			if($input == 'YZ-223 U')echo '模擬デート「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-224 U')echo '待ちに待った日「仮屋 和奏」 <br/><br/>';
			if($input == 'YZ-225 SRR')echo '寧々の“アルプ”「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-226 SR')echo '“SchwarzeKatze”のオーナー「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-227 C')echo '核心をつく「相馬 七緒」 <br/><br/>';
			if($input == 'YZ-228 SR')echo '2年A組担任「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-229 U')echo '“オカルト研究部”顧問「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-230 C')echo 'ゲスな笑い「久島 佳苗」 <br/><br/>';
			if($input == 'YZ-231 SRR')echo '心機一転「越路 美穂」 <br/><br/>';
			if($input == 'YZ-232 C')echo '誰にも言えない秘密「越路 美穂」 <br/><br/>';
			if($input == 'YZ-233 SR')echo '紬の“アルプ”「アカギ」 <br/><br/>';
			if($input == 'YZ-234 C')echo '怪しい取引「アカギ」 <br/><br/>';
			if($input == 'YZ-235 SRR')echo '人の気持ちを感じ取れる力「保科 柊史」 <br/><br/>';
			if($input == 'YZ-236 R')echo '友人としての忠告「海道 秀明」 <br/><br/>';
			if($input == 'YZ-237 C')echo '急造バンドのドラム「海道 秀明」 <br/><br/>';
			if($input == 'YZ-238 U')echo '良き父親「保科 太一」 <br/><br/>';
			if($input == 'YZ-239 R')echo '心の欠片回収“魔女”「綾地 寧々」<br/><br/>';
			if($input == 'YZ-240 U')echo 'トリック・オア・トリート「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-241 C')echo '思い出したら…「綾地 寧々」 <br/><br/>';
			if($input == 'YZ-242 R')echo 'ギリギリの駆け引き「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-243 U')echo 'ありのままの自分「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-244 C')echo '意外と純情「因幡 めぐる」 <br/><br/>';
			if($input == 'YZ-245 U')echo '心の欠片回収“魔女”「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-246 C')echo 'トリック・オア・トリート「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-247 C')echo 'シュウジくんと一緒「椎葉 紬」 <br/><br/>';
			if($input == 'YZ-248 R')echo '破壊力抜群「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-249 U')echo '着慣れない服「戸隠 憧子」 <br/><br/>';
			if($input == 'YZ-250 C')echo '朝のひととき「戸隠 憧子」 <br/><br/>';
		}
		
		function text_Sex($input){
			echo 'เพศ : ';
			if($input == 'YZ-201 SP') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-202 R') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-203 R') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-204 U') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-205 C') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SP') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SR') echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-208 R')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-209 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-210 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-211 SP')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-212 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-213 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-214 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-215 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-216 SP')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-217 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-218 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-219 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-220 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-221 SRR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-222 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-223 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-224 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-225 SRR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-226 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-227 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-228 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-229 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-230 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-231 SRR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-232 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-233 SR')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-234 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-235 SRR')echo 'ชาย &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-236 R')echo 'ชาย &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-237 C')echo 'ชาย &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-238 U')echo 'ชาย &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-239 R')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-240 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-241 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-242 R')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-243 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-244 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-245 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-246 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-247 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-248 R')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-249 U')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-250 C')echo 'หญิง &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
		}
		
		function text_Attribute($input){
			echo 'ธาตุ : ';
			if($input == 'YZ-201 SP') echo 'มืด <br/><br/>';
			if($input == 'YZ-202 R') echo 'มืด <br/><br/>';
			if($input == 'YZ-203 R') echo 'มืด <br/><br/>';
			if($input == 'YZ-204 U') echo 'มืด <br/><br/>';
			if($input == 'YZ-205 C') echo 'มืด <br/><br/>';
			if($input == 'YZ-206 SP') echo 'ไฟ <br/><br/>';
			if($input == 'YZ-206 SR') echo 'ไฟ <br/><br/>';
			if($input == 'YZ-208 R')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-209 U')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-210 C')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-211 SP')echo 'แสง <br/><br/>';
			if($input == 'YZ-212 SR')echo 'แสง <br/><br/>';	
			if($input == 'YZ-213 U')echo 'แสง <br/><br/>';
			if($input == 'YZ-214 C')echo 'แสง <br/><br/>';
			if($input == 'YZ-215 C')echo 'แสง <br/><br/>';
			if($input == 'YZ-216 SP')echo 'ดิน <br/><br/>';
			if($input == 'YZ-217 SR')echo 'ดิน <br/><br/>';
			if($input == 'YZ-218 U')echo 'ดิน <br/><br/>';
			if($input == 'YZ-219 C')echo 'ดิน <br/><br/>';
			if($input == 'YZ-220 C')echo 'ดิน <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'ลม <br/><br/>';
			if($input == 'YZ-222 SR')echo 'ลม <br/><br/>';	
			if($input == 'YZ-223 U')echo 'ลม <br/><br/>';
			if($input == 'YZ-224 U')echo 'ลม <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'มืด <br/><br/>';
			if($input == 'YZ-226 SR')echo 'มืด <br/><br/>';
			if($input == 'YZ-227 C')echo 'มืด <br/><br/>';
			if($input == 'YZ-228 SR')echo 'ลม <br/><br/>';
			if($input == 'YZ-229 U')echo 'ลม <br/><br/>';
			if($input == 'YZ-230 C')echo 'ลม <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'น้ำ <br/><br/>';
			if($input == 'YZ-232 C')echo 'น้ำ <br/><br/>';
			if($input == 'YZ-233 SR')echo 'ลม และ มืด <br/><br/>';
			if($input == 'YZ-234 C')echo 'ลม และ มืด <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'ไร้ธาตุ <br/><br/>';
			if($input == 'YZ-236 R')echo 'น้ำ <br/><br/>';
			if($input == 'YZ-237 C')echo 'น้ำ <br/><br/>';
			if($input == 'YZ-238 U')echo 'ไร้ธาตุ <br/><br/>';
			if($input == 'YZ-239 R')echo 'มืด <br/><br/>';
			if($input == 'YZ-240 U')echo 'มืด <br/><br/>';
			if($input == 'YZ-241 C')echo 'มืด <br/><br/>';
			if($input == 'YZ-242 R')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-243 U')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-244 C')echo 'ไฟ <br/><br/>';
			if($input == 'YZ-245 U')echo 'แสง <br/><br/>';
			if($input == 'YZ-246 C')echo 'แสง <br/><br/>';
			if($input == 'YZ-247 C')echo 'แสง <br/><br/>';
			if($input == 'YZ-248 R')echo 'ดิน <br/><br/>';
			if($input == 'YZ-249 U')echo 'ดิน <br/><br/>';
			if($input == 'YZ-250 C')echo 'ดิน <br/><br/>';
		}
		
		function text_Type($input){
			echo 'ประเภท : ';
			if($input == 'YZ-201 SP') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-202 R') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-203 R') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-204 U') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-205 C') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SP') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-206 SR') echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-208 R')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-209 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-210 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-211 SP')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-212 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-213 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-214 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-215 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-216 SP')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-217 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-218 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-219 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-220 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-221 SRR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-222 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';	
			if($input == 'YZ-223 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-224 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-225 SRR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-226 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-227 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-228 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-229 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-230 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-231 SRR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-232 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-233 SR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-234 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-235 SRR')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-236 R')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-237 C')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-238 U')echo 'คาแร็คเตอร์ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-239 R')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-240 U')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-241 C')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-242 R')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-243 U')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-244 C')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-245 U')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-246 C')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-247 C')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-248 R')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-249 U')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
			if($input == 'YZ-250 C')echo 'เอ็กซ์ตร้า &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
		}
		function text_Rare($input){
			echo 'ระดับแรร์ : ';
			if($input == 'YZ-201 SP') echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-202 R') echo 'R/SR <br/><br/>';
			if($input == 'YZ-203 R') echo 'R <br/><br/>';
			if($input == 'YZ-204 U') echo 'U <br/><br/>';
			if($input == 'YZ-205 C') echo 'C <br/><br/>';
			if($input == 'YZ-206 SP') echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-207 SR') echo 'R/SR <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'R <br/><br/>';
			if($input == 'YZ-209 U')echo 'U <br/><br/>';
			if($input == 'YZ-210 C')echo 'C <br/><br/>';
			if($input == 'YZ-211 SP')echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-212 SR')echo 'RR/SR <br/><br/>';	
			if($input == 'YZ-213 U')echo 'U <br/><br/>';
			if($input == 'YZ-214 C')echo 'C <br/><br/>';
			if($input == 'YZ-215 C')echo 'C <br/><br/>';
			if($input == 'YZ-216 SP')echo 'RR/SSP/SP <br/><br/>';
			if($input == 'YZ-217 SR')echo 'RR/SR <br/><br/>';	
			if($input == 'YZ-218 U')echo 'U <br/><br/>';
			if($input == 'YZ-219 C')echo 'C <br/><br/>';
			if($input == 'YZ-220 C')echo 'C <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'RR/RRR/SRR <br/><br/>';
			if($input == 'YZ-222 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-223 U')echo 'U <br/><br/>';
			if($input == 'YZ-224 U')echo 'U <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'RR/RRR/SRR <br/><br/>';
			if($input == 'YZ-226 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-227 C')echo 'C <br/><br/>';
			if($input == 'YZ-228 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-229 U')echo 'U <br/><br/>';
			if($input == 'YZ-230 C')echo 'C <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'RR/RRR/SRR <br/><br/>';
			if($input == 'YZ-232 C')echo 'C <br/><br/>';
			if($input == 'YZ-233 SR')echo 'R/SR <br/><br/>';
			if($input == 'YZ-234 C')echo 'C <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'RR/RRR/SRR <br/><br/>';
			if($input == 'YZ-236 R')echo 'R/SR <br/><br/>';
			if($input == 'YZ-237 C')echo 'C <br/><br/>';
			if($input == 'YZ-238 U')echo 'U <br/><br/>';
			if($input == 'YZ-239 R')echo 'R <br/><br/>';
			if($input == 'YZ-240 U')echo 'U <br/><br/>';
			if($input == 'YZ-241 C')echo 'C <br/><br/>';
			if($input == 'YZ-242 R')echo 'R <br/><br/>';
			if($input == 'YZ-243 U')echo 'U <br/><br/>';
			if($input == 'YZ-244 C')echo 'C <br/><br/>';
			if($input == 'YZ-245 U')echo 'U <br/><br/>';
			if($input == 'YZ-246 C')echo 'C <br/><br/>';
			if($input == 'YZ-247 C')echo 'C <br/><br/>';
			if($input == 'YZ-248 R')echo 'R <br/><br/>';
			if($input == 'YZ-249 U')echo 'U <br/><br/>';
			if($input == 'YZ-250 C')echo 'C <br/><br/>';
		}
		function text_AtkAndDef($input){
			if($input == 'YZ-201 SP') echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-202 R') echo 'พลังโจมตี : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 6(+2) <br/><br/>';
			if($input == 'YZ-203 R') echo 'พลังโจมตี : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+2) <br/><br/>';
			if($input == 'YZ-204 U') echo 'พลังโจมตี : 0(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+2) <br/><br/>';
			if($input == 'YZ-205 C') echo 'พลังโจมตี : 3(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 8(-) <br/><br/>';
			if($input == 'YZ-206 SP') echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-207 SR') echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			
			if($input == 'YZ-208 R')echo 'พลังโจมตี : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+1) <br/><br/>';
			if($input == 'YZ-209 U')echo 'พลังโจมตี : 1(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 1(+2) <br/><br/>';
			if($input == 'YZ-210 C')echo 'พลังโจมตี : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+1) <br/><br/>';
			if($input == 'YZ-211 SP')echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-212 SR')echo 'พลังโจมตี : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(-) <br/><br/>';	
			if($input == 'YZ-213 U')echo 'พลังโจมตี : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 6(+2) <br/><br/>';
			if($input == 'YZ-214 C')echo 'พลังโจมตี : 0(+3)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 1(+2) <br/><br/>';
			if($input == 'YZ-215 C')echo 'พลังโจมตี : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-216 SP')echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-217 SR')echo 'พลังโจมตี : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(-) <br/><br/>';
			if($input == 'YZ-218 U')echo 'พลังโจมตี : 0(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 1(+3) <br/><br/>';
			if($input == 'YZ-219 C')echo 'พลังโจมตี : 5(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+1) <br/><br/>';
			if($input == 'YZ-220 C')echo 'พลังโจมตี : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+1) <br/><br/>';
			if($input == 'YZ-221 SRR')echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-222 SR')echo 'พลังโจมตี : 6(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+2) <br/><br/>';	
			if($input == 'YZ-223 U')echo 'พลังโจมตี : 8(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+1) <br/><br/>';
			if($input == 'YZ-224 U')echo 'พลังโจมตี : 0(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+3) <br/><br/>';
			if($input == 'YZ-225 SRR')echo 'พลังโจมตี : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;      พลังป้องกัน : 5(+1) <br/><br/>';
			if($input == 'YZ-226 SR')echo 'พลังโจมตี : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 5(+1) <br/><br/>';
			if($input == 'YZ-227 C')echo 'พลังโจมตี : 6(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 5(-) <br/><br/>';
			if($input == 'YZ-228 SR')echo 'พลังโจมตี : 9(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(-) <br/><br/>';
			if($input == 'YZ-229 U')echo 'พลังโจมตี : 8(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(-) <br/><br/>';
			if($input == 'YZ-230 C')echo 'พลังโจมตี : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-231 SRR')echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
			if($input == 'YZ-232 C')echo 'พลังโจมตี : 8(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+1) <br/><br/>';
			if($input == 'YZ-233 SR')echo 'พลังโจมตี : 0(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 7(+2) <br/><br/>';
			if($input == 'YZ-234 C')echo 'พลังโจมตี : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(-) <br/><br/>';
			if($input == 'YZ-235 SRR')echo 'พลังโจมตี : 2(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+1) <br/><br/>';
			if($input == 'YZ-236 R')echo 'พลังโจมตี : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 5(+2) <br/><br/>';
			if($input == 'YZ-237 C')echo 'พลังโจมตี : 8(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(-) <br/><br/>';
			if($input == 'YZ-238 U')echo 'พลังโจมตี : 7(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 6(-) <br/><br/>';
			if($input == 'YZ-239 R')echo 'พลังโจมตี : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(-) <br/><br/>';
			if($input == 'YZ-240 U')echo 'พลังโจมตี : 5(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+1) <br/><br/>';
			if($input == 'YZ-241 C')echo 'พลังโจมตี : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+1) <br/><br/>';
			if($input == 'YZ-242 R')echo 'พลังโจมตี : 3(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(-) <br/><br/>';
			if($input == 'YZ-243 U')echo 'พลังโจมตี : 3(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+1) <br/><br/>';
			if($input == 'YZ-244 C')echo 'พลังโจมตี : 4(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 1(-) <br/><br/>';
			if($input == 'YZ-245 U')echo 'พลังโจมตี : 4(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 2(+1) <br/><br/>';
			if($input == 'YZ-246 C')echo 'พลังโจมตี : 1(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+1) <br/><br/>';
			if($input == 'YZ-247 C')echo 'พลังโจมตี : 5(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 1(+1) <br/><br/>';
			if($input == 'YZ-248 R')echo 'พลังโจมตี : 2(+1)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(+1) <br/><br/>';
			if($input == 'YZ-249 U')echo 'พลังโจมตี : 5(+2)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 3(-) <br/><br/>';
			if($input == 'YZ-250 C')echo 'พลังโจมตี : 1(-)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       พลังป้องกัน : 4(+2) <br/><br/>';
		}
		function text_Ability($input){
			echo 'ความสามารถ <br/><br/>';
			if($input == 'YZ-201 SP') echo '[Cost]จั่วการ์ด 2 ใบทิ้งการ์ด 1 ใบบนมือไปยังห้องพัก<br/> 
											[รักษาสภาพ] ทิ้งการ์ด 1 ใบบนมือลงห้องพัก<br/>
											[Auto][คว่ำเกิดผล] ถ้าการ์ดใบนี้เปลี่ยนจาก [หงาย] เป็น [คว่ำ] จากการที่จ่ายค่า [รักษาสภาพ] จนจบเทิร์นการ์ดใบนี้ไม่สามารถเปลี่ยนสภาพเป็นหงายจากการจ่าย [Cost] ได้ <br/>
											[Battle][Battle อยู่เกิดผล](ทิ้งการ์ดบนมือ 1 ใบ) จั่วการ์ด 2 ใบจากนั้นจนจบเทิร์นคาแร็คเตอร์ 1 ใบพลังป้องกันเพิ่มขึ้น 3<br/>
											[Battle][Battle อยู่เกิดผล](นำการ์ด 2 ใบในห้องพักไปยัง Backyard) จนจบเทิร์นคาแร็คเตอร์ใบอื่น 1 ใบได้รับพลังโจมตีและป้องกันเพิ่มขึ้น 2 ถ้าการ์ดที่จ่ายคอสไปเป็นคาแร็คเตอร์ทั้งหมดจนจบเทิร์นคาแร็คเตอร์ 1 ตัวพลังป้องกันลดลง 3.<br/>';
			
			if($input == 'YZ-202 R') echo 	'[Cost] เปลี่ยนสภาพคาแร็คเตแอร์ [OS;เดียวกัน] ของเรา 1 จากสภาพ [คว่ำ] เป็นสภาพ [หงาย] <br/>
											[Auto] เมื่อพาทเนอร์ [OS;เดียวกัน] ถูกเลือกเป็นคาแร็คเตอร์โจมตีหรือคาแร็คเตอร์ป้องกันเราจั่วการ์ด 1 ใบ <br/>
											[Auto] เมื่อคาแร็คเตอร์ใบนี้เข้าร่วมแบทเทิลกับคาแร็คเตอร์ที่มีสกิล จนจบแบทเทิลคาแร็คเตอร์ที่ต่อสู้ด้วยพลังโจมตีลดลง 4<br/>';
											
			if($input == 'YZ-203 R') echo 	'[Cost] เปลี่ยนสภาพคาแร็คเตแอร์ [OS;เดียวกัน] ของเรา 1 จากสภาพ [คว่ำ] เป็นสภาพ [หงาย] <br/>
											[Auto] เมื่อคาแร็คเตอร์ใบนี้เข้ามาในสนามหรือเลเวลอัพหรือออโต้เลเวลอัพเราสามารถนำการ์ด 2 ใบในห้องพักไปยัง Backyard จากนั้นถ้าทำ
											เมื่อจบเทิร์นเปลี่ยนสภาพคาแร็คเตอร์ของเราทุกใบจาก [Rest] เป็นสภาพ [Stand]<br/>
											[Main][Turn 1](นำการ์ด 1 ใบบนมือลงห้องพัก) จั่วการ์ด 2 ใบ';
											
			if($input == 'YZ-204 U') echo	'[Main][Turn 1](นำการ์ด 1 ใบบนมือลงห้องพัก) จั่วการ์ด 2 ใบ.<br/>
											[Main][Turn 1](เปลี่ยนสภาพการ์ดใบนี้จาก [Stand] เป็น [Reverse]) เปลี่ยนสภาพคาแร็คเตอร์ฝ่ายตรงข้าม 1 ใบเป็นสภาพ [Rest]';
											
			if($input == 'YZ-205 C') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจาก [หงาย][Stand] เป็น [คว่ำ][Reverse]<br/>
											[Runnyu] นำการ์ดบนมือ 1 ใบไปยังห้องพักและนำเฟรนในสภาพ [หงาย] 1 ใบไปยังห้องพัก<br/>
											[Auto][Turn1] เมื่อพาทเนอร์ [Inaba Meguru] ของเราจ่ายค่าคอสเปลี่ยนสภาพจาก [Stand] เป็น [Rest] โดยใช้การ์ดใบนี้ จนจบเทิร์น [Inaba Meguru] 
											ได้รับ [ทะลุทะลวง] จากนั้นเราสามารถนำการ์ด 1 ใบบนมือไปยัง Backyard จากนั้นเปลี่ยนสภาพการ์ดใบนี้จาก [Rest] เป็น [Stand]<br/>
											[Main][Turn1](ทิ้งการ์ดบนมือ 1 ใบ) จั่วการ์ด 2 ใบ';
											
			if($input == 'YZ-206 SP') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจาก [คว่ำ] เป็น [หงาย]<br/>[Auto] 
											[Auto]เมื่อพาทเนอร์ของเราถูกเลือกเป็นคาแร็คเตอร์โจมตีหรือคาแร็คเตอร์ป้องกันและทำให้ฝ่ายตรงข้ามเปลี่ยนสภาพเป็น [คว่ำ] จากแบทเทิลดาเมจได้เราสามารถจั่วการ์ด 1 ใบได้</br>
											[Battle][Battle อยู่เกิดผล][Partner][Turn 1](เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบหรือมากกว่าจากสภาพ [หงาย][Stand] เป็น [หงาย][Rest]) 
											จนจบเทิร์น, ต่อ 1 คาแร็คเตอร์ที่ถูกเปลี่ยนสภาพเป็น [Rest] จากการจ่ายคอสของความสามารถนี้ คาแร็คเตอร์ใบนี้ได้รับพลังโจมตีและพลังป้องกันเพิ่มขึ้น 2 จากนั้นท่าจ่ายคอสเปลี่ยนสภาพเป็น [Rest] 
											ตั้งแต่ 3 ใบขึ้นเปลี่ยนสภาพคาแร็คเตอร์ใบนี้จาก [Rest] เป็น [Stand]<br/>';
			
			if($input == 'YZ-207 SR') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจาก [หงาย][Stand] เป็น [คว่ำ][Reverse]
											[Runnyu] นำคาแร็คเตอร์ 1 ใบบนมือไปยังห้องพักและนำเฟรน [หงาย] 1 ใบขึ้นมือ</br>
											[Auto][Turn 1] เมื่อมีการ์ดถูกนำไป Backyard จากห้องพักด้วยเอฟเฟ็คจ่ายค่าคอสของเราจนจบเทิร์นคาแร็คเตอร์ใบนี้พลังโจมตีเพิ่มขึ้น 1 และได้รับ [สิทธิโจมตีก่อน]<br/>
											[ทะลุทะลวง]';
			if($input == 'YZ-208 R') echo 	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจากสภาพ [คว่ำ] เป็นสภาพ [หงาย]<br/>
											[Auto] เมื่อคาแร็คเตอร์ใบนี้เข้ามาในสนามหรือเลเวลอัพหรือออโต้เลเวลอัพ เราสามารถดูการ์ด 1 ใบบนสุดของกองการ์ด ถ้าทำนำการ์ดใบนั้นวางไว้ใต้เด็คหรือใบบนสุดของเด็คแล้วจั่วการ์ด 1 ใบ<br/>
											[Battle](นำการ์ดบนมือ 1 ใบและการ์ดใบนี้บนมือไปยังห้องพัก) จนจบแบทเทิลคาแร็คเตอร์ที่ถูกเลือกเป็นคาแร็คเตอร์โจมตี 1 ใบสูญเสียสกิลทั้งหมด ความสามารถนี้ใช้ได้ขณะอยู่บนมือเท่านั้น';
			if($input == 'YZ-209 U') echo	'[Auto]เมื่อคาแร็คเตอร์ใบนี้เข้ามาในสนามหรือเลเวลอัพหรือออโต้เลเวลอัพคาแร็คเตอร์ฝ่ายตรงข้าม 1 ใบโดนยิง 3 ดาเมจ<br/>
											[Main][Turn1](ทิ้งการ์ด 1 ใบบนมือลงห้องพัก)จั่วการ์ด 2 ใบ';
			if($input == 'YZ-210 C') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจากสภาพ [คว่ำ] เป็นสภาพ [หงาย]<br/>
											[Esoku] เมื่อคาแรคเตอร์ของเราได้รับดาเมจที่ไม่ได้มาจากต่อสู้ดาเมจนั้นลดลง 3<br/>
											[Auto] เมื่อคาแร็คเตอร์ใบนี้เข้ามาในสนามหรือเลเวลอัพหรือออโต้เลเวลอัพ เราสามารถดูการ์ด 1 ใบบนสุดของกองการ์ด ถ้าทำนำการ์ดใบนั้นวางไว้ใต้เด็คหรือใบบนสุดของเด็คแล้วจั่วการ์ด 1 ใบ';
			if($input == 'YZ-211 SP')echo	'[Cost] จั่วการ์ด 2 ใบจากนั้นทิ้งการ์ด 1 ใบ<br/>
											[Passive] ถ้าคาแร็คเตอร์มีเซ็ตการ์ดที่ไม่ใช้ ＜小悪魔コス＞ เปลี่ยนสภาพคาแร็คเตอร์ใบนี้เป็นสภาพ [คว่ำ] <br/>
											[Auto][Turn1] เมื่อเริ่มแบทเทิลถ้าพาทเนอร์มีเซ็ตการ์ดเซ็ตอยู่จนจบเทิร์นพาทเนอร์ [OS;เดียวกัน] ได้รับพลังโจมีตีและพลังป้องกันเพิ่มขึ้น ２<br/>
											[Battle][Battle อยู่เกิดผล][Partner][Turn1] (นำคาแร็ตคเตอร์ 1 ใบในห้องพักไปยัง Backyard) จากนั้นเลือก １ อย่างจาก ２ อย่างถ้าใน Backyard ของเรามีชื่อคาแร็คเตอร์ตั้งแต่ ５ แบบขึ้นไปเปลี่ยนเป็นเลือกทั้ง ２ แทนโดยสามารถเรียงความสามารถเกิดก่อนหลังได้<br/>
											&nbsp;&nbsp;&nbsp;&nbsp;・จนจบเทิร์นคาแร็คเตอร์เป้าหมาย 1 ใบพลังโจมตีลดลง ３<br/>
											&nbsp;&nbsp;&nbsp;&nbsp;・จนตบเทิร์นคาแร้คเตอร์ใบนี้ได้รับพลังโจมตีเพิ่มขึ้น ２ และ [ทะลุทะลวง]';
			if($input == 'YZ-212 SR') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจาก [หงาย][Stand] เป็น [คว่ำ][Reverse]<br/>
											[Runnyu] นำคาแร็คเตอร์ 1 ใบบนมือไปยังห้องพักและนำเฟรน [หงาย] 1 ใบขึ้นมือ<br/>
											[Auto][Turn 1] เมื่อคาแร็คเตอร์ของเราทำดาเมจใส่ฝ่ายตรงข้ามได้นำการ์ดในห้องพักฝ่ายตรงข้าม 3 ใบไปยัง Backyard<br/>
											[ทะลุทะลวง]';	
			if($input == 'YZ-213 U') echo	'[Cost] เปลี่ยนสภาพคาแร็คเตอร์ 1 ใบจากสภาพ [คว่ำ] เป็นสภาพ [หงาย]<br/>
											[Esoku] คาแร็คเตอร์ฝ่านตรงข้ามบนมือทุกใบสูญเสีย [Runnyu]<br/>
											[Auto][Turn1] เมื่อคาแร็คเตอร์ [Same OS] เข้ามาในสนามนำการ์ดฝ่ายตรงข้าม 2 ใบในห้องพักไปยัง Backyard จากนั้นจั่วการ์ด 1 ใบ';
			if($input == 'YZ-214 C'){};
			if($input == 'YZ-215 C'){};
			if($input == 'YZ-216 SP'){};
			if($input == 'YZ-217 SR'){};
			if($input == 'YZ-218 U'){};
			if($input == 'YZ-219 C'){};
			if($input == 'YZ-220 C'){};
			if($input == 'YZ-221 SRR'){};
			if($input == 'YZ-222 SR'){};	
			if($input == 'YZ-223 U'){};
			if($input == 'YZ-224 U'){};
			if($input == 'YZ-225 SRR'){};
			if($input == 'YZ-226 SR'){};
			if($input == 'YZ-227 C'){};
			if($input == 'YZ-228 SR'){};
			if($input == 'YZ-229 U'){};
			if($input == 'YZ-230 C'){};
			if($input == 'YZ-231 SRR'){};
			if($input == 'YZ-232 C'){};
			if($input == 'YZ-233 SR'){};
			if($input == 'YZ-234 C'){};
			if($input == 'YZ-235 SRR'){};
			if($input == 'YZ-236 R'){};
			if($input == 'YZ-237 C'){};
			if($input == 'YZ-238 U'){};
			if($input == 'YZ-239 R'){};
			if($input == 'YZ-240 U'){};
			if($input == 'YZ-241 C'){};
			if($input == 'YZ-242 R'){};
			if($input == 'YZ-243 U'){};
			if($input == 'YZ-244 C'){};
			if($input == 'YZ-245 U'){};
			if($input == 'YZ-246 C'){};
			if($input == 'YZ-247 C'){};
			if($input == 'YZ-248 R'){};
			if($input == 'YZ-249 U'){};
			if($input == 'YZ-250 C'){};
		}	
	}
?>