#include<iostream.h>
#include<conio.h>

class student
{
	int roll,n1,n2,n3;
	public:
	student(int r,int a,int b,int c):roll(r),n1(a),n2(b),n3(c){}
	void disp()
	{	cout<<"Roll no: "<<roll<<"\nMarks1: "<<n1<<"\nMarks2: "<<n2<<"\nMarks3: "<<n3;}
	int sum_marks()
	{int s=n1+n2+n3; return s;}
	int get_roll()
	{return roll;}
};

class percent
{
	int roll;float per;
	public:
	percent(student ob)
	{
		roll=ob.get_roll();
		per=ob.sum_marks()/3.0;
	}
	void disp()
	{	cout<<"\nPercentage: "<<per;}};
void main()
{
	clrscr();
	student ob(1,30,40,90);
	percent ob1(ob);
	ob.disp();
	ob1.disp();
}