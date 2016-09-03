#include<iostream.h>
#include<conio.h>
class greater
{
int a;
public:
void getdata(int a)
{
this->a=a;
}
greater large( greater ob1)
{
if (a>ob1.a)
{
return *this;
}
else
{
return ob1;
}
}
void disp()
{
cout<<"\nvalue of a:"<<a;
}
};
void main()
{
clrscr();
greater ob1,ob2;
void (greater::*ptr_getdata)(int)=&(greater::getdata);
void (greater::*ptr_disp)()=&(greater::disp);
(ob1.*ptr_getdata)(2);
(ob2.*ptr_getdata)(4);
cout<<"\nFor object 1:";
(ob1.*ptr_disp)();
cout<<"\nFor object 2:";
(ob2.*ptr_disp)();
ob2=ob2.large(ob1);
cout<<"\nlarger of object 1 and object 2 is:";
(ob2.*ptr_disp)();
getch();
}






