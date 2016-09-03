#include<iostream.h>
#include<conio.h>

class cons_overload
{
	double x, y;
	public:
	cons_overload()
	{}

	cons_overload(int a,int b)
	{
		x=a;
		y=b;
	}

	cons_overload(float a,float b)
	{
		x=a;
		y=b;
	}

	cons_overload(double a, double b)
	{
		x=a;
		y=b;
	}

	cons_overload(int a,float b)
	{
		x=a;
		y=b;
	}

	double add()
	{
		double c;
		c=x+y;
		cout<<"\nSum of "<<x<<" and "<<y<<" is ";
		return c;
	}
};

void main()
{
	double a;
	clrscr();
	cons_overload ob(3,5);
	a=ob.add();
	cout<<a;
	cons_overload ob1(3.3f,5.5f);
	a=ob1.add();
	cout<<a;
	cons_overload ob2(3.5,5.3);
	a=ob2.add();
	cout<<a;
	cons_overload ob3(3,5.5f);
	a=ob3.add();
	cout<<a;
}