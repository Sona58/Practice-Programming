#include<iostream.h>
#include<conio.h>

class base
{
	public:

	void disp()
	{
		cout<<"\nBase Class";
	}
	virtual void disp1()=0;
};

class derived1: public base
{
	public:

	void disp2()
	{
		cout<<"\nDerived Class 1.";
	}
	void disp1()
	{
		cout<<"\nPure Vitual Function 1.";
	}
	virtual void disp3()=0;
};

class derived2: public derived1
{
	public:
	void disp4()
	{
		cout<<"\nDerived Class 2.";
	}

	void disp3()
	{
		cout<<"\nPure Virtual Function 2.";
	}
};

void main()
{
	clrscr();
	derived2 ob;
	ob.disp();
	ob.disp1();
	ob.disp2();
	ob.disp3();
	ob.disp4();
}