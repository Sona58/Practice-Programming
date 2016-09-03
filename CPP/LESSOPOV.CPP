#include<iostream.h>
#include<conio.h>

class student
{
	int roll;
	float per;
	public:
	student()
	{}
	student(int r,float p)
	{
		roll=r;
		per=p;
	}

	friend student operator<(student o1,student o2);
	void disp()
	{
		cout<<"roll: "<<roll<<"\npercentage: "<<per;
	}
};

student operator<(student o1,student o2)
{

	if(o1.per<o2.per)
		return o1;
	else
		return o2;
}

void main()
{
	clrscr();
	student ob(1,60.5f),ob1(2,70.5f),ob2;
	cout<<"Student 1:\n";
	ob.disp();
	cout<<"\nStudent 2:\n";
	ob1.disp();
	cout<<"\nStudent with less percent:\n";
	ob2=ob<ob1;
	ob2.disp();
}