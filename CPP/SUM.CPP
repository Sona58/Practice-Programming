#include<iostream.h>
#include<conio.h>

class obasarg
{

int a,b;

public:

void getdata(int a, int m)
{
	this->a=a;
	b=m;
}

obasarg sum(obasarg o1, obasarg o2)
{
	obasarg ob;
	ob.a=o1.a+o2.a;
	ob.b=o1.b+o2.b;
	return ob;
}

void disp()
{
	cout<<"\n a:"<<a<<"\n b:"<<b;
}
};

void main()
{
	clrscr();
	obasarg ob1, ob2, ob3, ob4;
	int m,n;

	cout<<"\n Enter any two integer for object ob1\n";
	cin>>m>>n;
	ob1.getdata(m,n);
	cout<<"\n Enter any two integer for object ob2\n";
	cin>>m>>n;
	ob2.getdata(m,n);
	ob4=ob3.sum(ob1,ob2);
	cout<<"\nFirst object: \n";
	ob1.disp();
	cout<<"\nSecond object:\n";
	ob2.disp();
	cout<<"\nSum of two objects:\n";
	ob4.disp();
}
