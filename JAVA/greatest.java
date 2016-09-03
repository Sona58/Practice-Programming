import java.lang.*;

class greatest
{
	public static void main(String ar[])
	{
		int a,b,c;
		a=3;
		b=4;
		c=5;
		
		if(a>b && a>c)
			System.out.println("a is greatest.");
		else if(b>a && b>c)
			System.out.println("b is greatest");
		else
			System.out.println("c is greatest.");
	}
};