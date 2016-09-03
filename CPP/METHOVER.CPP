#include<iostream.h>
#include<conio.h>

class over
{
	public:

	virtual void disp()
	{
		cout<<"\nClass Over.";
	}

	void disp1()
	{
		cout<<"\nClass Over Another Function";
	}

	void disp2()
	{
		cout<<"\nNon Virtual Function";
	}
};

class virtual_func:public over
{
	public:

		void show()
		{
			cout<<"\nClass Virtual_func";
		}
		void disp()
		{
			cout<<"\nOverriding Func.";
		}
		void disp2()
		{
			cout<<"Hello Student.";
		}
};

void main()
{
	clrscr();
	over *ptra;
	over oba;
	virtual_func obb;
	ptra= &oba;
	ptra->disp();
	ptra->disp1();
	ptra->disp2();
	ptra= &obb;
	ptra->disp();
	obb.show();
	ptra->disp2();
}