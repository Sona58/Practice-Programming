#include<iostream.h>
#include<conio.h>
class student
{
int marks[5];
public:
void get_marks();
void disp_marks();
int sum1();
};
void student::get_marks()
{
int i;
for(i=1;i<=5;i++)
{
cout<<"\nEnter marks of subject "<<i<<" : ";
cin>>marks[i];
}
}
void student:: disp_marks()
{
int i;
for(i=1;i<=5;i++)
{
cout<<"\nmarks of subject "<<i<<" :"<<marks[i];
}
}
int student::sum1()
{
int i,sum=0;
for(i=1;i<=5;i++)
{
sum=sum+marks[i];
}
cout<<"\nSum of marks is:"<<sum;
return sum;
}

class percentage : public student
{
public:
float per()
{
get_marks();
disp_marks();
int s;
float perc;
s=sum1();
perc=((s/500.0)*100);
return perc;
}
};
class disp : public percentage
{
public:
void disp_perc()
{
float p=per();
cout<<"\nPercentage is:" <<p;
}
};
void main()
{
clrscr();
disp ob1;
ob1.disp_perc();
getch();
}