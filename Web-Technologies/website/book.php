<html>
<head>
<title>Book My Show</title>
<script>
function bg(i)
{
	document.getElementById(i).bgColor="#FF0000";
}
function bg1(i)
{
	document.getElementById(i).bgColor="#000000";
}
function bg2(i)
{
	document.getElementById(i).bgColor="#FFFFFF";
}
function bg3(i)
{
	document.getElementById(i).bgColor="#FCF6F0";
}
</script>
<style>
#main{border-radius:10px;}
body{font-face:arial;}
a{text-decoration:none;}
</style>
</head>

<body background="bg_main_texture.jpg" vlink="#0000FF" link="#0000FF">
<a href="#top"><img src="up1.png" width="150" height="150" style="position:fixed;bottom:0;right:10px;"/></a>
<script>
function get()
{
	var a=prompt("Enter Email Id.","");
	if(a=="")
	{
		alert("Please Enter valid Email Id.");
		get();
	}
var pattern=/^([a-zA-Z0-9_.-])+@([a-zA-Z0-9_.-])+\.([a-zA-Z])+([a-zA-Z])+/;
if(pattern.test(a))
return true;
else
{
	alert("Invalid Email Id.");
	return false;
}
}


</script>
<center>
<table border="0" width="73%" name="top">
<tr>
<td width="34%">
<font size="2" face="arial">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#0000FF" onClick="window.open('help.php','_top')" target="_parent">24/7 Customer Care</a> | <font color="#0000FF" onClick="get()">Resend Booking Confirmation</font>
</font></td>
<td colspan="5" align="right" valign="middle" width="450">
<b><font color="#0000FF" face="arial">
<script>
var d=new Date();
var t=d.getHours();
if(t<12){
document.write("Good Morning");
}
else if(t>=12 && t<16){
document.write("Good Afternoon");
}
else if(t>=16 && t<21){
document.write("Good Evening");
}
else{
document.write("Good Night");
}
</script>
</font></b>
</td>
<td colspan="5" align="right">
<script>
var d=new Date();
var t=d.getHours();
if(t<12){
document.write("<img src='10.gif' width='60' height='45'/>");
}
else if(t>=12 && t<16){
document.write("<img src='11.gif' width='60' height='60'/>");
}
else if(t>=16 && t<21){
document.write("<img src='12.gif' width='50' height='50'/>");
}
else{
document.write("<img src='earth4.gif' width='50' height='50'/>");
}
</script>

<!--<img src="10.gif" width="60" height="45"/>-->

</td>
</tr>
</table>

<table border="0" width="73%">
<tr>
<td>
<table border="0" width="100%" bgcolor="#FFFFFF" cellpadding="7" cellspacing="0" id="main">
<tr>
<td width="17%" align="left">
<a href="book.php"><img src="logo.png" border="0" height="60" width="180"/></a>
</td>
<td align="right" valign="bottom" colspan="4">
<form>
<b>Search:</b> <input type="text" name="search" size="25" onFocus="this.style.backgroundColor='#FF9900'" onBlur="this.style.backgroundColor='#FFFFFF'"/> <input type="submit" name="submit" value="Search"/> 
</form>
</td>
</tr>
<tr>
<td colspan="5" align="center" bgcolor="#000000">
<table width="100%" border="0" bgcolor="#000000" cellpadding='0' cellspacing='0'>
<tr>
<td width="20" align="center" bgcolor="#FF0000" height="25" style="border-radius:10px;"><a href="book.php"><img src="home4.png" style="border-radius:10px;" border="0" width="25" height="20"/></a></td>
<td width="50" id="121" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href=""><font color="#FFFFFF" size="3" face="arial"><b>Movies</b></font></a></td>
<td width="120" id="122" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href=""><font color="#FFFFFF" size="3" face="arial"><b>Events & Theatre</b></font></a></td>
<td width="40" id="123" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href="" onMouseOver="color()"><font color="#FFFFFF" size="3" face="arial"><b>Sports</b></font></a></td>
<td width="40" id="124" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href=""><font color="#FFFFFF" size="3" face="arial"><b>Offers</b></font></a></td>
<td width="40" id="125" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href=""><font color="#FFFFFF" size="3" face="arial"><b>Applications</b></font></a></td>
<td width="40" id="126" align="center" onMouseOver="bg(this.id)" onMouseOut="bg1(this.id)"><a href=""><font color="#FFFFFF" size="3" face="arial"><b>Exclusives</b></font></a></td>
<td width="65">&nbsp;</td>
<td width="65">&nbsp;</td>
<td width="50">&nbsp;</td>
<td width="50">&nbsp;</td>

</tr>
</table>
</td>
</tr>
<tr>
<td colspan="5"  bgcolor="#FCF6F0">
<table border="0" width="100%">
<tr>
<td width="323">
<form>
<table width="100%" border="0" cellspacing="0" cellpadding="0">
<tr><td colspan="7"><font size="4" face="arial">Instant Ticket Booking<br><br></font></td>
</tr>
<tr>
<td width="25%" align="center" bgcolor="#FFDC42" colspan="3"><font size="2" face="arial"><b>Movies</b></font></td>
<td width="25%" align="right"><b><font size="2" face="arial" color="#FF0000">Plays</font>&nbsp;&nbsp;&nbsp;&nbsp; |</b></td>
<td width="25%" align="right"><b><font size="2" face="arial" color="#FF0000">Events</font>&nbsp;&nbsp;&nbsp;&nbsp; |</b></td>
<td width="25%" align="center"><b><font size="2" face="arial" color="#FF0000">Sports</font></b></td>
</tr>
<tr>
<td colspan="7">&nbsp;

</td>
</tr>
<tr>
<td width="15%" align="left" colspan="3"><font size="2" face="arial"><input type="radio" name="type" value="movies" checked/> Movies</font></td>
<td align="left" colspan="5"><font size="2" face="arial"><input type="radio" name="type" value="cinemas"/> Cinemas</font></td>
</tr>
<tr>
<td colspan="7" align="left"><br>
<select name="movie">
<option value="">Select Movie</option>
<option value="chex">Chennai Express</option>
<option value="mc">Madras Cafe</option>
<option value="satya">Satyagraha</option>
</select>
</td>
</tr>
<tr>
<td colspan="7" align="left"><br>
<select name="date">
<option value="">Select Date</option>
<option value="1s">Today, 2 Sep</option>
<option value="2s">Tomorrow, 3 Sep</option>
<option value="3s">Tuesday, 4 Sep</option>
</select><br><br>
</td>
</tr>
<tr>
<td align="left" width="1">
<img src="heart.png" width="20" height="20"/></td>
<td colspan="5" align="left">
<font face="arial" size="2"><b>Preferred Cinemas :</b></font>
</td>
</tr>
<tr>
<td colspan="7" align="left"><br>
<font color="#0000FF" face="arial" size="2">Spice Cinemas: Noida, Wave: Noida, DT Star Cinemas: Vasant Kunj</font>
</td>
</tr>
</table>
</form>
</td>
<td width="15">&nbsp;</td>
<td align="right">
<marquee behavior="alternate" onMouseOver="this.stop()" onMouseOut="this.start()">
<img src="8.jpg" width="600" height="275" border="0"/>
<img src="7.jpg" width="600" height="275" border="0"/>
<img src="5.jpg" width="600" height="275" border="0"/>
<img src="4.jpg" width="600" height="275" border="0"/>
<img src="6.jpg" width="600" height="275" border="0"/>
<img src="2.jpg" width="600" height="275" border="0"/>
<img src="3.jpg" width="600" height="275" border="0"/>
</marquee>
</td>
</tr>
</table>
</td>
</tr>
<tr bgcolor="#FCF6F0">
<form> 
<td width="16%">
<table border="1" width="50%" cellspacing="0" cellpadding="0" bordercolor="#FF0000" bgcolor="#FFFFFF">
<tr>
<td>
<table border="0" width="100%" cellspacing="0" cellpadding="5">
<td width="120" height="100">
<a href=http://www.formula1.com/ target=_blank><img src="17.jpg" width="120" height="100"/></a>
</td></tr>
<tr>
<td>
<font face="arial" size="2"><b>Airtel Indian Grand Prix</b></font>
</td></tr>
<tr>
<td>
<hr width="100%">
</td>
</tr>
<tr>
<td onMouseDown="this.innerHTML='<center><button type=button name=buy>Buy Tickets</button></center>'" onMouseUp="this.innerHTML='Oct 25-27<br>Noida'">
<font face="arial" size="2">Oct 25-27<br>Noida</font>
</td>
</tr>
</table></td></tr></table>
</td>
<td width="17%"><table border="1" width="50%" cellspacing="0" cellpadding="0" bordercolor="#FF0000" bgcolor="#FFFFFF">
<tr>
<td>
<table border="0" width="100%" cellspacing="0" cellpadding="5">
<td width="120" height="100">
<a href=http://nh7.in/weekender/ target=_blank><img src="19.jpg" width="120" height="100"/></a>
</td></tr>
<tr>
<td>
<font face="arial" size="2"><b>Bacardi Weekender</b></font>
</td></tr>
<tr>
<td>
<hr width="100%">
</td>
</tr>
<tr>
<td onMouseDown="this.innerHTML='<center><button type=button name=buy>Buy Tickets</button></center>'" onMouseUp="this.innerHTML='Oct-Nov-Dec<br>Multi-city'">
<font face="arial" size="2">Oct-Nov-Dec<br>Multi-city</font>
</td>
</tr>
</table></td></tr></table></td>
<td width="16%">
<table border="1" width="50%" cellspacing="0" cellpadding="0" bordercolor="#FF0000" bgcolor="#FFFFFF">
<tr>
<td>
<table border="0" width="100%" cellspacing="0" cellpadding="5">
<td width="120" height="100">
<a href=http://sunburn.in target=_blank><img src="18.jpg" width="120" height="100"/></a>
</td></tr>
<tr>
<td>
<font face="arial" size="2"><b>Nicky Romero live in Mumbai</b></font>
</td></tr>
<tr>
<td>
<hr width="100%">
</td>
</tr>
<tr>
<td onMouseDown="this.innerHTML='<center><button type=button name=buy>Buy Tickets</button></center>'" onMouseUp="this.innerHTML='Nov 24<br>Mumbai'">
<font face="arial" size="2">Nov 24<br>Mumbai</font>
</td>
</tr>
</table></td></tr></table>
</td>
<td width="17%"><table border="1" width="50%" cellspacing="0" cellpadding="0" bordercolor="#FF0000" bgcolor="#FFFFFF">
<tr>
<td>
<table border="0" width="100%" cellspacing="0" cellpadding="5">
<td width="120" height="100">
<a href=http://www.aboveandbeyond.nu/ target=_blank><img src="30.jpg" width="120" height="100"/></a>
</td></tr>
<tr>
<td>
<font face="arial" size="2"><b>Above and Beyond India Tour 20</b></font>
</td></tr>
<tr>
<td>
<hr width="100%">
</td>
</tr>
<tr>
<td onMouseDown="this.innerHTML='<center><button type=button name=buy>Buy Tickets</button></center>'" onMouseUp="this.innerHTML='Nov 21-24<br>Multi-city'">
<font face="arial" size="2">Nov 21-24<br>Multi-city</font>
</td>
</tr>
</table></td></tr></table></td>
<td width="16%">
<table border="1" width="50%" cellspacing="0" cellpadding="0" bordercolor="#FF0000" bgcolor="#FFFFFF">
<tr>
<td>
<table border="0" width="100%" cellspacing="0" cellpadding="5">
<td width="120" height="100">
<a href=http://goingsolo.in target=_blank><img src="31.jpg" width="120" height="100"/></a>
</td></tr>
<tr>
<td>
<font face="arial" size="2"><b>Going Solo<br><br></b></font>
</td></tr>
<tr>
<td>
<hr width="100%">
</td>
</tr>
<tr>
<td onMouseDown="this.innerHTML='<center><button type=button name=buy>Buy Tickets</button></center>'" onMouseUp="this.innerHTML='Oct 15-17<br>Multi-city'">
<font face="arial" size="2">Oct 15-17<br>Multi-city</font>
</td>
</tr>
</table></td></tr></table>
</td></form>
</tr>
<tr>
<td colspan="5"  bgcolor="#FCF6F0">
<table width="100%" border="0">
<tr>
<td align="center" width="320">
<table border="0" width="100%">
<tr>
<td colspan="5"><font face="arial" size="2"><b>Top Movie in India</b></font></td>
</tr>
<tr>
<td colspan="5"><hr></td>
</tr>
<tr id="131" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>67%</b></td>
<td><a href="satyagraha.php" target="_blank">Satyagraha (U/A)</a></td>
</tr>
<tr id="132" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>77%</b></td>
<td><a href="madras.php" target="_blank">Madras Cafe (U/A)</a></td>
</tr>
<tr id="133" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>71%</b></td>
<td><a href="chex.php" target="_blank">Chennai Express (U/A)</a></td>
</tr>
<tr id="134" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>52%</b></td>
<td><a href="percy.php" target="_blank">Percy Jackson: Sea Of Monsters (3D ...</a></td>
</tr>
<tr id="135" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>75%</b></td>
<td><a href="conjuring.php" target="_blank">The Conjuring (A)</a></td>
</tr>
<tr id="136" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>74%</b></td>
<td><a href="duniyadari.php" target="_blank">Duniyadari (Marathi) (U/A)</a></td>
</tr>
<tr id="137" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>61%</b></td>
<td><a href="Millers.php" target="_blank">We`re the Millers (A)</a></td>
</tr>
<tr id="138" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>86%</b></td>
<td><a href="airways.php" target="_blank">Jatt Airways (U)</a></td>
</tr>
<tr id="139" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>96%</b></td>
<td><a href="victory.php" target="_blank">Victory (Kannada) (U)</a></td>
</tr>
<tr id="130" onMouseOver="bg2(this.id)" onMouseOut="bg3(this.id)">
<td width="1%"><img src="heart.png" width="20" height="20" border="0"/></td>
<td width="13%"><b>100%</b></td>
<td><a href="thangal.php" target="_blank">Thanga Meengal</a></td>
</tr>
</table>
</td>
<td width="10">&nbsp;</td>
<td>
<table border="1" width="100%" cellpadding='0' cellspacing='0' bgcolor="#EDEDED" onMouseOver="this.bgColor='#FFFFFF'" onMouseOut="this.bgColor='#EDEDED'" bordercolor="#CCCCCC">
<tr><td>
<table border="0" width="100%" cellpadding='0' cellspacing='0'>
<tr>
<td width="150" align="center" id="a" bgcolor="#FFDC42" onClick="this.bgColor='#FFDC42';getElementById('b').bgColor='#EDEDED';">
<font face="arial" size="3" id="c" color="#000000" onClick="getElementById('d').style.color='#FF0000';this.style.color='#000000';"><b>
Now Showing</b></font>
</td>
<td width="150" align="center" id="b" bgcolor="#EDEDED" onClick="this.bgColor='#FFDC42';getElementById('a').bgColor='#EDEDED';">
<font face="arial" size="3" id="d" color="#FF0000" onClick="getElementById('c').style.color='#FF0000';this.style.color='#000000';"><b>
Coming Soon</b></font>
</td>
</td>
<td align="right" colspan="5">
<a href="">View More</a>&nbsp;&nbsp;
</td>
</tr><tr>
<td>&nbsp;</td>
</tr>
<tr>
<td align="center" colspan="7">
<table border="0" width="90%">
<tr>
<td width="22%"><img src="13.jpg" width="130" height="200"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="14.jpg" width="130" height="200"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="15.jpg" width="130" height="200"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="16.jpg" width="130" height="200"/></td>
</tr>
<tr>
<td width="22%" align="center"><a href="satyagraha.php" target="_blank"><button type="button" style="border:2px solid #CCCCCC" name="buy" onMouseOver="this.style.backgroundColor='#996600'" onMouseOut="this.style.backgroundColor='#EAE6E0'"><b>
&nbsp;&nbsp;&nbsp;<font color="#000000" onMouseOver="this.style.color='#FFFFFF'" onMouseOut="this.style.color='#000000'">Buy Tickets</font>&nbsp;&nbsp;&nbsp;</b></button></a></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><a href="madras.php" target="_blank"><button type="button" style="border:2px solid #CCCCCC" name="buy" onMouseOver="this.style.backgroundColor='#996600'" onMouseOut="this.style.backgroundColor='#EAE6E0'"><b>
&nbsp;&nbsp;&nbsp;<font color="#000000" onMouseOver="this.style.color='#FFFFFF'" onMouseOut="this.style.color='#000000'">Buy Tickets</font>&nbsp;&nbsp;&nbsp;</b></button></a></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><a href="percy.php" target="_blank"><button type="button" style="border:2px solid #CCCCCC" name="buy" onMouseOver="this.style.backgroundColor='#996600'" onMouseOut="this.style.backgroundColor='#EAE6E0'"><b>
&nbsp;&nbsp;&nbsp;<font color="#000000" onMouseOver="this.style.color='#FFFFFF'" onMouseOut="this.style.color='#000000'">Buy Tickets</font>&nbsp;&nbsp;&nbsp;</b></button></a></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><a href="chex.php" target="_blank"><button type="button" style="border:2px solid #CCCCCC" name="buy" onMouseOver="this.style.backgroundColor='#996600'" onMouseOut="this.style.backgroundColor='#EAE6E0'"><b>
&nbsp;&nbsp;&nbsp;<font color="#000000" onMouseOver="this.style.color='#FFFFFF'" onMouseOut="this.style.color='#000000'">Buy Tickets</font>&nbsp;&nbsp;&nbsp;</b></button></a></td>
</tr>
<tr>
<td width="22%" align="center"><font color="#0000FF" size="2" face="arial"><a href="satyagraha.php" target="_blank">Satyagraha (U/A)</a></font></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><font color="#0000FF" size="2" face="arial"><a href="madras.php" target="_blank">Madras Cafe (U/A)</a></font></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><font color="#0000FF" size="2" face="arial"><a href="percy.php" target="_blank">Percy Jackson: Sea Of Monsters...</a></font></td>
<td width="">&nbsp;</td>
<td width="22%" align="center"><font color="#0000FF" size="2" face="arial"><a href="chex.php" target="_blank">Chennai Express (U/A)</a></font></td>
</tr>
</table></td></tr></table>
</td></tr></table>
</td>
</tr>
</table>
</td>
</tr>
<tr bgcolor="#FCF6F0">
<td colspan="5"  bgcolor="#FCF6F0">
<table width="100%" border="0" bgcolor="#FCF6F0">
<tr>
<td align="center" width="320">
<table border="1" width="100%" bordercolor="#CCCCCC" bgcolor="#FFFFFF" cellpadding='0' cellspacing='0'>
<tr>
<td bordercolor="#CCCCCC"><pre>

<font face="arial" size="2"><b>	Prediction for ‘Zanjeer’</b>
<hr width="290"><i><font size="1">	Posted on August 31, 2013</font></i>

	Now this one’s a remake of the 1971 cult action
	film of the same name. Will director Apoorva
	Lakhia be able to do justice to the original
	<font color="#0000FF">Read more</font>

<font face="arial" size="2"><b>	Happy Birthday Vivek</b>
<hr width="290"><i><font size="1">	Posted on August 31, 2013</font></i>

	He arrived with a lot of promise but suddenly
	everything went haywire in both his professional
	as well as personal life and he was literally
	reduced<font color="#0000FF">	Read more</font></font></pre>
</td>
</tr>
</table>
</td>
<td width="10">&nbsp;</td>
<td>
<table border="0" width="100%" cellpadding='0' cellspacing='0'>
<tr><td>
<table border="0" width="100%" cellpadding='0' cellspacing='0'>
<tr>
<td width="100" align="left"colspan="5">
<font face="arial" size="3"><b>
Featured</b></font>
</td>
</td>
</tr>
<tr>
<td colspan="7">
<hr>
</td>
</tr>
<tr>
<td align="center" colspan="7">
<table border="0" width="90%" cellpadding="0">
<tr>
<td width="22%"><img src="12.jpg" width="130" height="200" style="opacity:0.2" onMouseOver="this.style.opacity=1;getElementById('1').innerHTML='<b>I Am Hardwell India Tour</b>';" onMouseOut="this.style.opacity=0.2;getElementById('1').innerHTML='<b>Preview</b>';"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="9.jpg" width="130" height="200" style="opacity:0.2" onMouseOver="this.style.opacity=1;getElementById('2').innerHTML='<b>Bacardi NH7 Weekender 2013</b>';" onMouseOut="this.style.opacity=0.2;getElementById('2').innerHTML='<b>Preview</b>';"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="10.jpg" width="130" height="200" style="opacity:0.2" onMouseOver="this.style.opacity=1;getElementById('3').innerHTML='<b>RAHMANISHQ</b>';" onMouseOut="this.style.opacity=0.2;getElementById('3').innerHTML='<b>Preview</b>';"/></td>
<td width="">&nbsp;</td>
<td width="22%"><img src="11.jpg" width="130" height="200" style="opacity:0.2" onMouseOver="this.style.opacity=1;getElementById('4').innerHTML='<b>Ziro Festival Of Music</b>';" onMouseOut="this.style.opacity=0.2;getElementById('4').innerHTML='<b>Preview</b>';"/></td>
</tr>
<tr>
<td width="22%" bgcolor="#000000" align="center"><font face="arial" color="#FFFFFF" size="2" id="1"><b>Preview</b></font></td>
<td width="">&nbsp;</td>
<td width="22%" bgcolor="#000000" align="center"><font face="arial" color="#FFFFFF" size="2" id="2"><b>Preview</b></font></td>
<td width="">&nbsp;</td>
<td width="22%" bgcolor="#000000" align="center"><font face="arial" color="#FFFFFF" size="2" id="3"><b>Preview</b></font></td>
<td width="">&nbsp;</td>
<td width="22%" bgcolor="#000000" align="center"><font face="arial" color="#FFFFFF" size="2" id="4"><b>Preview</b></font></td>
</tr>
</table></td></tr></table>
</td></tr></table>
</td>
</tr>
</table></td>
</tr>
<tr bgcolor="#FF0000"><td colspan="6">
</td></tr>
<tr bgcolor="#000000">
<td colspan="6" align="center" height="50"><font color="#FFFFFF" size="2" face="arial">Copyright 2013 © Bigtree Entertainment Pvt. Ltd. All Rights Reserved</font>
</td>
</tr>
</table>
</td>
</tr>

</table>
</center>
</body>
</html>