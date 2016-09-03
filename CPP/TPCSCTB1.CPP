#include<iostream.h>
#include<conio.h>

class student
{
	public:

	int roll,s1,s2,s3;

	student(int a,int b,int c,int d):roll(a),s1(b),s2(c),s3(d)
	{
	}

	void disp()
	{
		cout<<"Roll No,: "<<roll;
		cout<<"\nMarks 1: "<<s1;
		cout<<"\nMarks 2: "<<s2;
		cout<<"\nMarks 3: "<<s3;
	}

	operator float()
	{
		float p;
		p=(s1+s2+s3)/3.0;
		return p;
	}
};

void main()
{
	clrscr();
	student ob(1,90,80,70);
	float per;
	per=ob;
	ob.disp();
	cout<<"\n\nPercentage: "<<per;
}