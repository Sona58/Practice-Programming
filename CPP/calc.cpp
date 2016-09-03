#include "stdafx.h"
#include <iostream>
using namespace std;

class arithmatic
{
	int x,y;
	public:

	void getdata()
	{
		int a,b;
		cout<<"Enter first number.\n";
		cin>>a;
		cout<<"\nEnter second number.\n";
		cin>>b;
		x=a;
		y=b;
	}

	void disp()
	{
		cout<<"\n\nFirst Number: "<<x;
		cout<<"\nSecond Number: "<<y;
	}

	void add()
	{
		cout<<"\nSum of "<<x<<" and "<<y<<" is "<<(x+y)<<"\n\n";
	}

	void sub()
	{
		cout<<"\nDifference of "<<x<<" and "<<y<<" is "<<(x-y)<<"\n\n";
	}

	void mul()
	{
		cout<<"\nProduct of "<<x<<" and "<<y<<" is "<<(x*y)<<"\n\n";
	}

	void div()
	{
		try
		{
			if(y!=0)
			{
				cout<<"\nQuotient of "<<x<<" and "<<y<<" is "<<(x/y)<<"\n\n";
			}
			else
				throw y;
		}
		catch(...)
		{
			cout<<"\nDivision By Zero Exception:\n\n";
		}
	}
};

void main()
{
	arithmatic ob;
	int a;
	do
	{
		cout<<"Enter choice:\n\n";
		cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
		cin>>a;
		if(a<5)
		{
			switch(a)
			{
				case 1:
					ob.getdata();
					ob.disp();
					ob.add();
					break;

				case 2:
					ob.getdata();
					ob.disp();
					ob.sub();
					break;

				case 3:
					ob.getdata();
				   ob.disp();
				   ob.mul();
				   break;

				case 4:
					ob.getdata();
					ob.disp();
					ob.div();
					break;

				default:
					cout<<"\nInvalid Choice.\n";
					break;
			}
		}
		else
			{
				cout<<"\n\nYou are exited.\n";
			}
	}while(a<5);
}