<html>
<head>
<title>Calculate</title>
</head>
<body>
<?php
$a=$_POST['num'];
$r=$_POST['opt'];
if($r=="prime")
{
	$f=1;
	for($i=2;$i<$a;$i++)
	{
		if($a%$i==0)
		{
			echo $a." is not a Prime Number.";
			$f=0;
			break;
		}
	}
	if($f==1)
		echo $a." is a Prime Number.";
}
else if($r=="odd")
{
	if($a%2!=0)
		echo $a." is Odd.";
	else
		echo $a." is not Odd.";
}
else if($r=="even")
{
	if($a%2==0)
		echo $a." is Even.";
	else
		echo $a." is not Even.";
}
else if($r=="pali")
{
	$t=$a;
	$r=0;
 	while($t>0)
   	{
      		$r=$r*10;
      		$r=$r+($t%10);
      		$t=intval($t/10);
   	}
	if($a==$r)
      		echo $a." is a palindrome number.";
   	else
      		echo $a." is not a palindrome number.";
}
else if($r=="pali1")
{
	$a=strtolower($a);
	$r="";
   	$i=strlen($a);
   	for($j=$i;$j>=0;$j--)
	{
      		$r=$r+substr($a,$i,1);
   	}
   	if($a==$r)
      		echo $a." is Palindrome";
	else
      		echo $a." is not a Palindrome";
}
else if($r=="fabo")
{
	$b=0;$c=1;
	echo $b." ".$c;
	for($i=0;$i<$a;$i++)
	{
		$d=$b+$c;
		echo " ".$d;
		$b=$c;
		$c=$d;
	}
}
else
{
	$f=1;
	for ($c=1;$c<=$a;$c++)
	{
    		$f=$f*$c;
	}
	echo "Factorial is ".$f;
}
?>
</body>
</html>