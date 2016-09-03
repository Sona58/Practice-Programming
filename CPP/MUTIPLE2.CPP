#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	char *name;
	int roll;

	public:

	void get(int r, char *n)
	{
		roll=r;
		strcpy(name,n);

	}
	void disp()
	{
		cout<<"Roll No: "<<roll;
		cout<<"\nName: "<<name;
	}
};

class std_marks
{
	protected:

	int m1,m2,m3;

	public:

	void marks(int a,int b,int c)
	{
		m1=a;
		m2=b;
		m3=c;
	}
	void marks1()
	{
		cout<<"\nMarks1: "<<m1;
		cout<<"\nMarks2: "<<m2;
		cout<<"\nMarks3: "<<m3;
	}
};

class std_perc:protected student,std_marks
{
	public:

	void calc_per()
	{
		float s=(m1+m2+m3)/3.0;
		cout<<"\nPercentage: "<<s<<"\n";
	}
	void input(int a,char *b)
	{
		get(a,b);
	}
	void input_disp()
	{
		disp();
	}
	void get_marks(int a,int b,int c)
	{
		marks(a,b,c);
	}
	void disp_marks()
	{
		marks1();
	}
};

void main()
{
	clrscr();
	std_perc ob;
	int r;
	char *n;
	cout<<"Enter roll no.\n";
	cin>>r;
	cout<<"\nEnter Name.\n";
	cin>>n;
	ob.input(r,n);
	ob.get_marks(90,90,90);
	ob.input_disp();
	ob.disp_marks();
	ob.calc_per();
	getch();
}