#include<iostream.h>
#include<conio.h>

class base
{
	public:

	void disp()
	{
		cout<<"\nBase Class";
	}
};

class derived:public base
{
	public:

	void disp()
	{
		cout<<"\n Derived class";
	}
};

void main()
{
	clrscr();
	derived ob;
	ob.disp();
	ob.base::disp();
	ob.derived::disp();
}