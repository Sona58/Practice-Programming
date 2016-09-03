#include<iostream.h>
#include<conio.h>

class static_var
{
	static int a;

	public:

	void inc()
	{
	a++;
	}

	void disp()
	{
		cout<<"a: "<<a<<"\n";
	}
};

int static_var :: a=7;

void main()
{
	clrscr();
	static_var ob,ob1,ob2;
	ob.disp();
	ob1.disp();
	ob2.disp();
	ob.inc();
	ob1.inc();
	ob2.inc();
	ob.disp();
	ob1.disp();
	ob2.disp();
}