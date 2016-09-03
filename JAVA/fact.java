import java.lang.*;

class cal
{
	int calc(int x)
	{
		if(x==1)
			return x;
		else
		{
			int f=x*calc(x-1);
			return f;
		}
	}
};
class fact
{
	public static void main(String ar[])
	{
		cal c1=new cal();
		int n=4,f;
		f=c1.calc(n);
		System.out.println("Factorial:"+f);
	}
};