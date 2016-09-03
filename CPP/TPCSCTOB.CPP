#include<iostream.h>
#include<conio.h>

class vector
{
	public:

	int a[3];

	void get();
	void disp();
	int sum();
	operator float()
	{
		float avg;
		int s=sum();
		avg=s/3.0;
		return avg;
	}
};

void vector::get()
{
	cout<<"Enter marks for:";
	for(int i=0;i<3;i++)
	{
		cout<<"\nStudent "<<(i+1)<<":";
		cin>>a[i];
	}
}

void vector::disp()
{
	for(int i=0;i<3;i++)
	{
		cout<<"\nMarks for student "<<(i+1)<<" is "<<a[i];
	}
}

int vector:: sum()
{
	int s=0;
	for(int i=0;i<3;i++)
	{
		s=s+a[i];
	}
	return s;
}

void main()
{
	clrscr();
	vector ob;
	ob.get();
	float a;
	a=ob;
	ob.disp();
	cout<<"\n\nAverage: "<<a;
}