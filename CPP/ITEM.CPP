#include<iostream.h>
#include<conio.h>

class item
{
	int price;
	void input(int a, int b)
	{
		code=a;
		price=b;
	}

	protected:

	int code;
	void disp()
	{
		cout<<"\n\nItem Code: "<<code;
		cout<<"\nPrice: "<<price;
	}

	public:
	void data()
	{
		int a,b;
		cout<<"Enter item code.\n";
		cin>>a;
		cout<<"\nEnter item price.\n";
		cin>>b;
		input(a,b);
		disp();
	}
	int pr()
	{
		int pr1=price;
		return pr1;
	}
};


class quantity:item
{
	int n;
	protected:

	void get()
	{
		cout<<"\n\nEnter number of item.\n";
		cin>>n;
		cout<<"\nNumber of items: "<<n;
	}
	public:
	int total;
	void calc()
	{
		int pr1=pr();
		total=n*pr1;

	}
	void output()
	{
		data();
		get();
		calc();
	}
};

class deri:protected quantity
{
	public:

	void disp1()
	{
		output();
		cout<<"\nTotal Price: "<<total;
	}
};

void main()
{
	clrscr();
	deri ob;
	ob.disp1();
}