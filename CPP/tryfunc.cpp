#include "stdafx.h"
#include <iostream>
using namespace std;

void divide(int a,int b)
{
	float c;
	if(b!=0)
	{
		c=a/(float)b;
		cout<<c;
	}
	else
		throw b;
}

void main()
{
	try
	{
		divide(3,5);
		divide(3,0);
	}
	catch(int k)
	{cout<<"\nInteger Exception Object Caught "<<k;}
	cout<<"\nEnd of main";
}