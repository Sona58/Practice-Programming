import java.lang.*;

abstract class shape
{
	int l,b;
	shape(int x,int y)
	{
		l=x;b=y;
	}
	abstract void area();
};

class rectangle extends shape
{
	rectangle(int x,int y)
	{
		super(x,y);
	}
	void area()
	{
		System.out.println("Area of rectangle: "+(l*b));
	}
};

class triangle extends shape
{
	triangle(int x,int y)
	{
		super(x,y);
	}

	void area()
	{
		System.out.println("Area of triangle: "+(l*b/2));
	}
};

class test
{
	public static void main(String arg[])
	{
		rectangle r=new rectangle(10,50);
		triangle t=new triangle(10,80);
		shape s;
		s=r;
		s.area();
		s=t;
		s.area();
	}
};