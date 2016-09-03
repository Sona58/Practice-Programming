<html>
<head><title>Form</title></head>
<body>
<center>
<form action="validate.php" method="post">
<table width="50%" border="0" cellpadding="0" cellspacing="0">
<tr>
<th colspan="2"><u>Please Enter Details</u><br><br></th>
</tr>
<tr><td width="50%" align="center">Name:</td><td align="center"><input type="text" name="name"/></td></tr>
<tr><td width="50%" align="center">Login Id:</td><td align="center"><input type="text" name="loginid"/></td></tr>
<tr><td width="50%" align="center">Password:</td><td align="center"><input type="password" name="pwd"/></td></tr>
<tr><td width="50%" align="center">Gender:</td><td align="center"><input type="radio" name="r1" value="Male" checked/> Male <input type="radio" name="r1" value="Female"/> Female</td></tr>
<tr><td width="50%" align="center">Qualification:</td><td align="center"><select name="qual"><option value="">--Select--</option>
<option value="Under Graduate">Under Graduate</option>
<option value="Graduate">Graduate</option>
<option value="Post Graduate">Post Graduate</option>
</select></td></tr>
<tr><td width="50%" align="center">Address:</td><td align="center"><textarea name="add" rows="3" cols="16"></textarea></td></tr>
<tr><td align="center" colspan="2"><input type="submit"/> <input type="reset"/></td></tr>
</table></form>
</center>
</body>
</html>