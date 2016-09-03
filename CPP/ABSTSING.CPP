#include<iostream.h>
#include<conio.h>

class abstract
{
	public:

	void disp()
	{
		cout<<"\nBase Class";
	}
	virtual void show()=0;
};

class derived: public abstract
{
	public:

	void disp_data()
	{
		cout<<"\nDerived Class";
	}
	void show()
	{
		cout<<"\nPure Virtual function of abstract class is defined in derived class.";
	}
};

void main()
{
	clrscr();
	derived ob;
	ob.disp_data();
}