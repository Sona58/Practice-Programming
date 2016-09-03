// temp_arr.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template <class t1>

class arrsum
{	
	int size;
	t1 *ar;

	public:
	
		arrsum(t1 *a,int m)
		{
			size=m;
			ar=new t1[size];
			for(int i=0;i<size;i++)
			{
				ar[i]=a[i];
			}
		}

		void disp()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"ar["<<i<<"]: "<<ar[i]<<"\n";
			}
		}

		t1 sum()
		{
			t1 sum=0;
			for(int i=0;i<size;i++)
			{
				sum=sum+ar[i];
			}
			return sum;
		}
};

void main()
{
	int a[]={1,2,3,4,5};
	cout<<"Integer array:\n";
	arrsum <int> ob(a,5);
	ob.disp();
	int x=ob.sum();
	cout<<"\nSum: "<<x;

	float b[]={1.2f,2.3f,3.4f,4.5f};
	cout<<"\n\nFloat Array:\n";
	arrsum <float> ob1(b,4);
	ob1.disp();
	float y=ob1.sum();
	cout<<"\nSum: "<<y;

	double c[]={2.3,3.4,4.5,5.6,6.7,7.8};
	cout<<"\n\nDouble Array:\n";
	arrsum <double> ob2(c,6);
	ob2.disp();
	double z=ob2.sum();
	cout<<"\nSum: "<<z;
}

