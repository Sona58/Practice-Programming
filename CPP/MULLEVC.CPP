#include<iostream.h>
#include<conio.h>

class item
{
	int code, price;

	public:

	item(int c,float p):code(c),price(p){}
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

class quantity:public item
 {       int n1;
	public:
	quantity(int c,float p,int n):item(c,p),n1(n){}

	void get_disp()
	{
		cout<<"\nNumber of Items: "<<n1;
	}
	int calc()
	{
		int total;
		int price=pr();
		total=n1*price;
		return total;
	}
};

class derive:quantity
{
	int res;

	public:
	derive(int c,float p,int n):quantity(c,p,n){}
	void disp_res()
	{
		res=calc();
	cout<<"\nTotal Price: "<<res;
	}
	void all()
	{
		disp();
		get_disp();
	}

};

void main()
{
	clrscr();

	derive ob(1,20.0f,50);
	ob.all();
	ob.disp_res();
}