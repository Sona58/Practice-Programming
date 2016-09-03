#include<iostream.h>
#include<conio.h>

class total_price
{
	public:

	int code;
	float tp;

	void disp()
	{
		cout<<"\n\nTotal price to be paid for item "<<code<<" is "<<tp;
	}
};

class item
{
	public:

	int code,n;
	float price;

	item(int a,float b, int c)
	{
		code=a;
		price=b;
		n=c;
	}

	void display()
	{
		cout<<"Item Code: "<<code;
		cout<<"\nPrice: "<<price;
		cout<<"\nQuantity: "<<n;
	}

	operator total_price()
	{
		total_price p;
		p.code=code;
		p.tp=price*n;
		return p;
	}
};

void main()
{
	clrscr();

	total_price ob;
	item ob1(1,50.5f,5);
	ob1.display();
	ob=ob1;
	ob.disp();
}