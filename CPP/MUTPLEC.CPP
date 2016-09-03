#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	char *name;
	int roll;

	public:

	student(int r, char *n)
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

	std_marks(int a,int b,int c)
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

class std_perc:public student,public std_marks
{
	public:

	std_perc(int r,char *n,int a,int b,int c):student(r,n),std_marks(a,b,c){}
	void calc_per()
	{
		float s=(m1+m2+m3)/3.0;
		cout<<"\nPercentage: "<<s<<"\n";
	}
};

void main()
{
	clrscr();
	std_perc ob(1,"sonali",90,90,90);
	ob.disp();
	ob.marks1();
	ob.calc_per();
	getch();
}