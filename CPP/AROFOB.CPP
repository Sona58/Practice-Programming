#include<iostream.h>
#include<conio.h>

class student
{
	int rollno, marks;
	static int sum;
	public:

	void getdata(int m,int n)
	{
		rollno=m;
		marks=n;
	}

	int sum1()
	{
		sum=sum+marks;
		return sum;
	}

	void disp()
	{
		cout<<"\n Roll no.: "<<rollno<<"\tMarks: "<<marks;
	}
};

int student::sum;

void main()
{
	int i,r,m;
	clrscr();
	student ob[10];
	for(i=0;i<10;i++)
	{
		cout<<"Enter roll no. and marks for student "<<(i+1)<<":";
		cin>>r>>m;
		ob[i].getdata(r,m);
	}

	for(i=0;i<10;i++)
	{
		cout<<"\nStudent "<<(i+1)<<" details:";
		ob[i].disp();
	}

	int sum_marks=0;
	for(i=0;i<10;i++)
		sum_marks=ob[i].sum1();
	float avg=sum_marks/10.0;
	cout<<"\nAverage: "<<avg;
}