#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a=10;
	int &b=a;
	cout<<"Value of a="<<a<<" and value of b="<<b;
	a=a+10;
	cout<<"\nValue of a="<<a<<" and value of b="<<b;
	b=b-10;
	cout<<"\nValue of a="<<a<<" and value of b="<<b;
}