#include<iostream.h>
#include<conio.h>

class sum
{
	int a,b,c;
	public:

	void getdata(int a,int b)
	{
		this->a=a;
		this->b=b;
		if((a+b)%2==0)
			c=1;
		else
			c=0;
	}

	sum cal(sum o1)
	{
		sum o2;
		int sum :: *ptra=& sum :: a;
		int sum :: *ptrb=& sum :: b;
		int sum :: *ptrc=& sum :: c;
		o2.*ptra=a+o1.*ptra;
		o2.*ptrb=b+o1.*ptrb;
		o2.*ptrc=c+o1.*ptrc;
		return o2;
	}

	void disp(sum o1, sum o2)
	{
		cout<<"Sum of "<<o1.a<<" and "<<o2.a<<" is "<<a<<".";
		cout<<"\nSum of "<<o1.b<<" and "<<o2.b<<" is "<<b<<".";
		cout<<"\nSum of "<<o1.c<<" and "<<o2.c<<" is "<<c<<".";
	}

};

void main()
{
	clrscr();

	sum ob,ob1,ob2;

	void (sum :: *ptr_data)(int,int)=& sum :: getdata;
	sum (sum :: *ptr_calc)(sum)=& sum :: cal;
	void (sum :: *ptr_disp)(sum,sum)=& sum :: disp;

	(ob.*ptr_data)(3,4);
	(ob1.*ptr_data)(5,1);

	ob2=(ob.*ptr_calc)(ob1);

	(ob2.*ptr_disp)(ob,ob1);
}