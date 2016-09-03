#include<iostream.h>
#include<conio.h>

class nesting_func
{
	int a,b;
	public:

	void getdata(int m, int n)
	{
		a=m;
		b=n;
	}

	int sum()
	{
		int k;
		k=a+b;
		return k;
	}

	void disp()
	{
		cout<<"a: "<<a<<"\nb: "<<b;
		int m=sum();
		cout<<"\nSum :"<<m;
	}
};

void main()
{
	clrscr();
	nesting_func ob;
	ob.getdata(3,4);
	ob.disp();
}