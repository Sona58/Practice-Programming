#include<iostream.h>
#include<conio.h>
class sum
{
int a,b;
public:
void getdata(int a,int b)
{
this->a=a;
this->b=b;
}
void calc(sum ob1,sum ob2)
{
int sum::*ptra=&sum::a;
int sum::*ptrb=&sum::b;
a=ob1.*ptra+ob2.*ptra;
b=ob1.*ptrb+ob2.*ptrb;
}
void disp()
{
cout<<"\nvalue of a:"<<a;
cout<<"\nvalue of b:"<<b;
}
};
void main()
{
clrscr();
sum ob1,ob2,ob3;
void (sum::*ptr_getdata)(int,int)=&(sum::getdata);
void (sum::*ptr_disp)()=&(sum::disp);
(ob1.*ptr_getdata)(2,6);
(ob2.*ptr_getdata)(4,5);
cout<<"\nFor object 1:";
(ob1.*ptr_disp)();
cout<<"\nFor object 2:";
(ob2.*ptr_disp)();
ob3.calc(ob1,ob2);

cout<<"\nsum of object 1 and object 2 is:";
(ob3.*ptr_disp)();
getch();
}






