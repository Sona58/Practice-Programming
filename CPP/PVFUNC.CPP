#include<iostreame.h>
#include<conio.h>

class pvt
{
	void disp()
	{
		cout<<"Hello";
	}

	public:

	void disp1()
	{
		disp();
		cout<<"\nHi";
	}
};

void main()
{
	clrscr();
	pvt ob;
	ob.disp1();
}