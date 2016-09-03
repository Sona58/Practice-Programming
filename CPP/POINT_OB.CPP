#include<iostream.h>
#include<conio.h>
class add
{
int a,b;
public:
void getdata(int a,int m)
{
this->a=a;
b=m;
}
int sum()
{
return (a+b);
}
void disp()
{
cout<<"sum of "<<a<<" and "<<b<<" is:"<<sum();
}
};
void main()
{
add ob;
add *obp;
obp=&ob;
obp->getdata(3,4);
obp->disp();
getch();
}