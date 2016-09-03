#include<iostream.h>
#include<conio.h>

class func_overload
{
	double a,b,sum;
	public:
	void getdata(int c=2,int d=1)
	{
		a=c;
		b=d;
	}

	void getadat(float c, float d)
	{
		a=c;
		b=d;
	}

	void getdata(double c,double d=3.3)
	{
		a=c;
		b=d;
	}

	void getdata(int c,float d)
	{
		a=c;
		b=d;
	}

	void getdata(float c,double d)
	{
		a=c;
		b=d;
	}

	void add()
	{
		sum=a+b;
	}

	void output()
	{
		cout<<"\nSum of "<<a<<" and "<<b<<" is "<<sum<<"\n";
	}
};

void main()
{
	double a,b;
	clrscr();
	func_overload ob,ob1,ob2;
	cout<<"Enter two numbers to add.\n";
	cin>>a>>b;
	ob.getdata(a,b);
	ob.add();
	ob.output();
	cout<<"\nTwo Default Arguments\nEnter one number\n";
	cin>>a;
	ob1.getdata(a);
	ob1.add();
	ob1.output();
	cout<<"\nOne Default Argument\n";
	ob2.getdata();
	ob2.add();
	ob2.output();
}