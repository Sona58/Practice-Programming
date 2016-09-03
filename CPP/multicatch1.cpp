#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
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
		cout<<"\nEnd Try";
	}
	catch(...)
	{
		cout<<"\nException Caught.";
	}
	cout<<"\nEnd of function";
}
void main()
{
	mul_catch(1);
	mul_catch(2);
	mul_catch(0);
	mul_catch('a');
	mul_catch(-1);
	mul_catch(5);
	cout<<"End of main";
}