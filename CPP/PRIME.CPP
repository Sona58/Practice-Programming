#include<iostream.h>
#include<conio.h>
class prime
{
 int a,fl;

 public:

 void input()
 {
  cout<<"Enter the number.\n";
  cin>>a;
  cout<<"\n";
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
	clrscr();
	x.input();
	x.calc();
	x.output();
}
