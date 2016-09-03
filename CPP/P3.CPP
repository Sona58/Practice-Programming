#include<iostream.h>
#include<conio.h>
class pal
{int a;
public:
void input(int a)
{
this->a=a;
}
int calc();
void output(int s)
{
if(a==s)
cout<<"\n input no. is palindrome";
else
cout<<"\n input no. is not palindrome";
}
};
int pal::calc()
{
int p,m;
int sum=0;
for(m=a;m>0;)
{
p=m%10;
m=m/10;
sum=(sum*10)+p;
}
return sum;
}
void main()
{
clrscr();
int num,q;
pal ob1;
cout<<"enter a number";
cin>>num;
ob1.input(num);
q=ob1.calc();
ob1.output(q);
getch();
}