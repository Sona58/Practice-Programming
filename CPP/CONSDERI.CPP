#include<iostream.h>
#include<conio.h>
#include<string.h>

class item
{
	protected:

	char *code;
	float price;

	public:

	item(char *c, float p)
	{
		strcpy(code,c);
		price=p;
	}

	void disp()
	{
		cout<<"Item Code: "<<code;
		cout<<"\nItem Price: "<<price;
	}
};

class quantity
{
	protected:

	int n;

	public:

	quantity(int n1)
	{
		n=n1;
	}

	void display()
	{
		cout<<"\nNo. of Items: "<<n;
	}
};

class total_price:public item, public quantity
{
	int tp;

	public:

	total_price(char *c, float p, int n1):item(c,p),quantity(n1)
	{
		tp=p*n1;
	}

	void displ()
	{
		cout<<"\nTotal Price to be paid: "<<tp;
	}
};


void main()
{
	clrscr();
	total_price ob("01",50.5f,5);

	ob.disp();
	ob.display();
	ob.displ();
	getch();
}