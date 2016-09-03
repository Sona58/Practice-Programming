#include<iostream.h>
#include<conio.h>

class student
{
	int marks[10],roll[10];
	public:
	void getdata()
	{
		for(int i=0;i<10;i++)
		{
			cout<<"Enter roll no. and marks of student.";
			cin>>roll[i]>>marks[i];
		}
	}

	float avg()
	{
		int sum=0;
		for(int i=0;i<10;i++)
			sum=sum+marks[i];
		float avg1=sum/10.0;
		return avg1;
	}

	void disp()
	{
		cout<<"\nStudent Details:\n";
		for(int i=0;i<10;i++)
		{
			cout<<"\nStudent "<<(i+1)<<":";
			cout<<"\nRoll NO.: "<<roll[i]<<"\tMarks: "<<marks[i];
		}
	}
};

void main()
{
	float b;
	clrscr();
	student ob;
	ob.getdata();
	b=ob.avg();
	ob.disp();
	cout<<"\n\nAverage marks are: "<<b;
}