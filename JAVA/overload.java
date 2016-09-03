import java.lang.*;

class cal
{
	int a,b,c;
	cal()
	{
		a=10;
		b=20;
		c=30;	
	}
	cal(int x)
	{
		a=x;
		b=x;
		c=x;
	}
	cal(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;	
	}
	
};

class calc
{
	double area()
	{
		int r=20;
		double ar=3.14*r*r;
		return ar;
	}
	double area(int a)
	{
		double ar=a*a;
		return ar;
	}
	double area(int a,int b)
	{
		double ar=a*b;
		return ar;
	}
};
class overload
{
	public static void main(String arr[])
	{
		double ar;
		cal c1=new cal();
		System.out.println("a: "+c1.a+"\nb: "+c1.b+"\nc: "+c1.c);
		cal c2=new cal(50);
		System.out.println("a: "+c2.a+"\nb: "+c2.b+"\nc: "+c2.c);
		cal c3=new cal(10,20,30);
		System.out.println("a: "+c3.a+"\nb: "+c3.b+"\nc: "+c3.c);
		calc a=new calc();
		ar=a.area();
		System.out.println("Area of circle: "+ar);
		ar=a.area(40);
		System.out.println("Area of square: "+ar);
		ar=a.area(10,20);
		System.out.println("Area of rectangle: "+ar);
	}
};