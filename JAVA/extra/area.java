import java.lang.*;

class rectangle
{
	int l,b;
	rectangle(int x, int y)
	{
		l=x;
		b=y;
	}
	rectangle()
	{
		l=10;
		b=10;
	}
	void calc()
	{
		int a;
		a=l*b;
		System.out.println("Area: "+a);	
	}
};

class area
{
	public static void main(String ar[])
	{
		rectangle r1=new rectangle();
		rectangle r2=new rectangle(20,30);
		r1.calc();
		r2.calc();
	}
};