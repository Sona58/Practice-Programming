import java.lang.*;

class exc1
{
	public static void main(String arg[])
	{
		int a[]={10,20};
		int b[]={0,60};
		int c[]=new int[4];
		try
		{
			c[0]=a[0]+b[0];
			c[1]=a[1]-b[1];
			try
			{
				c[3]=a[1]/b[0];
			}
			catch(ArithmeticException k)
			{
				System.out.println("ArithmeticException Caught.");
			}
			c[2]=a[0]*b[2];
		}
		catch(ArithmeticException k)
		{
			System.out.println("ArithmeticException Caught.");
		}
		catch(ArrayIndexOutOfBoundsException k)
		{
			System.out.println("ArrayIndexOutOfBoundsException Caught.");
		}
		
	}
};