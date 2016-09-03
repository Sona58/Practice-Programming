#include<iostream.h>
#include<conio.h>
class item
{
public:
int code;
float price;
item()
{
}
item(int c,float p)
{
code=c;
price=p;
}
void display()
{
cout<<"\ncode:"<<code;
cout<<"\nprice:"<<price;
}
};
class quantity
{
public:
item i;
int no_item;
float total_p;
quantity(item ob,int n)
{
i.code=ob.code;
i.price=ob.price;
no_item=n;
}
void calc()
{
total_p=(i.price*no_item);
}
void disp()
{
cout<<"\nno. of items:"<<no_item;
cout<<"\ntotal price:"<<total_p;
}
};
void main()
{
clrscr();
item ob(1,20);
quantity q(ob,50);
q.i.display();
q.calc();
q.disp();
getch();
}
