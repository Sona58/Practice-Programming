#include<iostream.h>
#include<conio.h>

class item
{
	int code;
	float price;
	public:
	float get_price()
	{
		float p=price;
		return p;
	}
	item(int c,float p) : code(c),price(p)
	{

	}
	void disp()
	{
		cout<<"Item Code:"<<code<<endl;
		cout<<"\nItem Price:"<<price<<endl;
	}
};

class quantity
{
	int n;
	public:
	int get_quantity()
	{
		return n;
	}
	quantity(int b) : n(b)
	{

	}
	void disp1()
	{
		cout<<"\nItem needed by the User:"<<n<<endl;
	}
};

class f_price : public item,public quantity
{
	float t_price;
	public:
	f_price(int c,float p,int n) : item(c,p),quantity(n)
	{

	}
	void total()
	{
		t_price=get_price()*get_quantity();
	}
	void disp2()
	{
		cout<<"\nTotal Price:"<<t_price;
	}
};

void main()
{
	clrscr();
	f_price ob(101,50.0f,4);
	ob.disp();
	ob.disp1();
	ob.total();
	ob.disp2();
}