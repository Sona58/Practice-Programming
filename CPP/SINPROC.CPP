#include<iostream.h>
#include<conio.h>
class item
{
int code;
float price;
int no_item;
public:
item(int c,float p,int n)
{
code=c;
price=p;
no_item=n;
}
void display()
{
cout<<"\nItem code:"<<code;
cout<<"\nPrice of an item:"<<price;
cout<<"\nNumber of items:"<<no_item;
}
float rt_p()
{
float p=price;
return p;
}
int rt_n()
{
int n=no_item;
return n;
}
};
class total:protected item
{
float total_p;
public:
total(int c,float p,int n):item(c,p,n){}
void call()
{
display();
}
void calc()
{
total_p=(rt_p() * rt_n());
}
void disp_total()
{
cout<<"\nTotal price:"<<total_p;
}
};
void main()
{
clrscr();
total ob(1,20.0f,50);
ob.call();
ob.calc();
ob.disp_total();
}

