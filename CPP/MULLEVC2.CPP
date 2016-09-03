#include<iostream.h>
#include<conio.h>

class item
{
	int code, price;

	public:

	item(int c, float p):code(c),price(p){}
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

	quantity(int c,float p,int n1):item(c,p),n(n1){}

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
		disp();
	}
};

class derive:protected quantity
{
	int res;

	public:
	derive(int c,float p,int n):quantity(c,p,n){}
	void disp_res()
	{
		res=calc();
	cout<<"\nTotal Price: "<<res;
	}
	void all1()
	{
		all();
		get_disp();
	}

};

void main()
{
	clrscr();

	derive ob(1,20.0f,50);
	ob.all1();
	ob.disp_res();
}