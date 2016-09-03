#include<iostream.h>
#include<conio.h>

class percent
{
	public:

	int roll;
	float per;

	void disp_per()
	{
		cout<<"\nPercentage of Roll No. "<<roll<<" is "<<per;
	}
};

class student
{
	public:

	int roll, s1, s2, s3;

	student(int a,int b,int c,int d)
	{
		roll=a;
		s1=b;
		s2=c;
		s3=d;
	}

	void disp()
	{
		cout<<"Roll No.: "<<roll;
		cout<<"\nMarks for subject 1: "<<s1;
		cout<<"\nMarks for subject 2: "<<s2;
		cout<<"\nMarks for subject 3: "<<s3;
	}

	operator percent()
	{
		percent p;
		p.roll=roll;
		p.per=(s1+s2+s3)/3.0;
		return p;
	}
};

void main()
{
	percent pob;
	student sob(1,90,80,70);
	sob.disp();
	pob=sob;
	pob.disp_per();
}