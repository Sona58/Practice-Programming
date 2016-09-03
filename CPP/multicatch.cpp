// multicatch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void mul_catch(int a)
{
	try
	{
		if(a==0)
			throw 'm';
		else if(a==1)
			throw 3;
		else if(a==-1)
			throw 3.5;
		else if(a%2==0)
			throw 2.6f;
		cout<<"\nEnd try";
	}
	catch(char c)
	{
		cout<<"\nCharacter Caught:"<<c;
	}
	catch(int c)
	{
		cout<<"\nInt Caught:"<<c;
	}
	catch(float c)
	{
		cout<<"\nFloat Caught:"<<c;
	}
	catch(double c)
	{
		cout<<"\nDouble caught:"<<c;
	}
	cout<<"\nEnd of Function";
}

void main()
{
	mul_catch(1);
	mul_catch(2);
	mul_catch(0);
	mul_catch('a');
	mul_catch(-1);
	mul_catch(5);
	cout<<"\nEnd of main function";
}
