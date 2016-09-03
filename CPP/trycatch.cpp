#include "stdafx.h"
#include <iostream>
using namespace std;
void main()
{
	int a;
	float b,c;
	cout<<"Enter values of a and b\n";
	cin>>a>>b;
	try
	{
		if(b!=0)
		{
			c=a/b;
			cout<<a<<"/"<<b<<":"<<c;
		}
		else
		{
			throw b; 
		}
	}
	catch(int x)
	{
		cout<<"\nException Caught:"<<x;
	}
	catch(float x)
	{
		cout<<"\nFloat exception object caught:"<<x;
	}
}