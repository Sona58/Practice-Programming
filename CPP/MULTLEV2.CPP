#include<iostream.h>
#include<conio.h>

class item
{
	int code, price;

	public:

	void input()
	{
		cout<<"Enter item code.\n";
		cin>>code;
		cout<<"\nEnter item Price.\n";
		cin>>price;
	}
	void disp()
	{
		cout<<"Item Code: "<<code;
		cout<<"\nItem Price: "<<price;
	}
	int pr()
	{
		return price;
	}
};

class quantity:item
{
	int n;

	public:

	void get()
	{
		cout<<"\nEnter number of item.\n";
		cin>>n;
	}

	void get_disp()
	{
		cout<<"\nNumber of Items: "<<n;
	}
	int calc()
	{
		int total;
		int price=pr();
		total=n*price;
		return total;
	}
	void all()
	{
		input();
		disp();
	}
};

class derive:protected quantity
{
	int res;

	public:
	void disp_res()
	{
		res=calc();
	cout<<"\nTotal Price: "<<res;
	}
	void all1()
	{
		all();
		get();
		get_disp();
	}

};

void main()
{
	clrscr();

	derive ob;
	ob.all1();
	ob.disp_res();
}