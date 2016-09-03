#include<iostream.h>
#include<conio.h>

class static_func
{
	static int a;
	public:
	void getdata()
	{
		a++;
	}

	static void staticf()
	{
		cout<<"\nStatic Function.";
	}

	static void disp()
	{
		cout<<"a: "<<a;
		staticf();
	}
};

int static_func::a;

void main()
{
	clrscr();
	static_func ob,ob1,ob2;
	ob.getdata();
	ob1.getdata();
	ob2.getdata();
	static_func::disp();
}