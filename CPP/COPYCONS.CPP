#include<iostream.h>
#include<conio.h>

class copy
{
	int a,b;

	public:

	copy()
	{
		a=0;
		b=0;
	}

	copy(int x,int y)
	{
		a=x;
		b=y;
	}

	copy(copy &c)
	{
		a=c.a;
		b=c.b;
	}

	void add(copy &d)
	{
		a=d.a+20;
		b=d.b+30;
	}

	void disp()
	{
		cout<<"a:"<<a<<"  b:"<<b<<"\n";
	}
};

void main()
{
	clrscr();
	copy o1(5,10),o2,o3(o1);
	cout<<"Values of Object 1\n";
	o1.disp();
	cout<<"\n\nValues of Object 2\n";
	o2.disp();
	cout<<"\n\nValues of Object 3\n";
	o3.disp();
	o2=o1;
	cout<<"\n\nValues of Object 2 after change\n";
	o2.disp();
	o3.add(o1);
	cout<<"\n\nValues of Object 3 after add\n";
	o3.disp();
}