import java.lang.*;

class swap
{
	public static void main(String ar[])
	{
		int a,b,c;
		a=3;
		b=2;

		System.out.println("Before Swaping:\na = "+a+", b = "+b);

		c=a;
		a=b;
		b=c;

		System.out.println("After Swaping:\na = "+a+", b = "+b);		
	}
};