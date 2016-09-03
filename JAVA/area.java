import java.lang.*;

class area
{
	public static void main(String ar[])
	{
		int r,x,y;
		double a;
		x=50;
		y=60;

		a=x*y;
		System.out.println("Area of Rectangle with length "+x+" and breadth "+y+" is "+a);

		r=50;
		a=3.14*r*r;
		System.out.println("Area of Circle with radius "+r+" is "+a);

		x=20;
		y=50;
		a=0.5*x*y;
		System.out.println("Area of Triangle with base "+x+" and height "+y+" is "+a);
	}
};