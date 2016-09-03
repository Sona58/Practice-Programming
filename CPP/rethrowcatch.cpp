#include "stdafx.h"
#include<iostream>
using namespace std;

void divide(int a, int b)
{
	float c;
	try
	{
		if(b!=0)
		{
			c=a/(float)b;
			cout<<a<<"/"<<b<<" is "<<c;
		}
		else
		{
			throw b;
		}
		cout<<"\nEnd Try";
	}
	catch(int k)
	{
		cout<<"\nInt Exception caught";
		throw;
	}
}

void main()
{
	try
	{
		divide(3,5);
		divide(3,0);
	}
	catch(int k)
	{
		cout<<"\nException rethrown is caught";
	}
	cout<<"\nEnd of main function";
}