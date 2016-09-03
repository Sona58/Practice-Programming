#include<iostream.h>
#include<conio.h>

class time
{
	int hrs,min,sec;

	public:

	void getdata(int h,int m,int s)
	{
		hrs=h;
		min=m;
		sec=s;
	}

	time sum(time o1,time o2)
	{
		time ob;
		ob.hrs=o1.hrs+o2.hrs;
		ob.min=o1.min+o2.min;
		ob.sec=o1.sec+o2.sec;

		ob.min=ob.min+(ob.sec/60);
		ob.sec=ob.sec%60;
		ob.hrs=ob.hrs+(ob.min/60);
		ob.min=ob.min%60;
		return ob;
	}

	void disp()
	{
		cout<<"Hours:"<<hrs<<"\n Mins:"<<min<<"\n Secs:"<<sec;
	}
};

void main()
{
	clrscr();
	int h,m,s;
	time ob1,ob2,ob3,ob4;
	cout<<"Enter time for object 1\n";
	cin>>h>>m>>s;
	ob1.getdata(h,m,s);
	cout<<"Enter time for object 2\n";
	cin>>h>>m>>s;
	ob2.getdata(h,m,s);
	ob4=ob3.sum(ob1,ob2);
	cout<<"First object:\n";
	ob1.disp();
	cout<<"Second object:\n";
	ob2.disp();
	cout<<"Sum of two objects:\n";
	ob4.disp();
}
