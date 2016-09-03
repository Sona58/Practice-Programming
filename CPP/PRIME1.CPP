#include<iostream.h>
#include<conio.h>
class prime
{
 int a,fl;

 public:

 void input(int a)
 {
	this->a=a;
 }
 void calc()
 {
	int i,r;
	fl=0;
  for(i=2;i<a;i++)
  {
   r=a%i;
   if(r==0)
   {
	fl=1;
	break;
   }
  }
 }
 void output()
 {
  if(fl==1)
	cout<<a<<" is not a prime number.";
  else
	cout<<a<<" is a prime number.";
 }
};
void main()
{
	prime x;
	int b;
	clrscr();
	cout<<"Enter a number";
	cin>>b;
	cout<<"\n";
	x.input(b);
	x.calc();
	x.output();
}
