#include "stdafx.h"
#include <iostream>
using namespace std;

void divide(int a, int b)
{
	float c;
	try
	{
		if(b!==0)
		{
			c=a/(float)b;
			cout<<a<<"/"<<b<<" is "<<c;
		}
		else
		{
			throw b;
		}
	}
	catch(float k)
	{
		cout<<"Float Exception Caught: "<<k;
	}
}

void main()
{
	try
	{
		divide(3,0);
		divide(3,5);
	}
	catch(int k)
	{
		cout<<"\nInt Exception Object Caught:"<<k;
	}
}