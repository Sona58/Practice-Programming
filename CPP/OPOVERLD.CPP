#include<iostream.h>
#include<conio.h>

class op_overload
{
	int a,b;

	public:
	op_overload()
	{
	}

	op_overload(int m, int n)
	{
		a=m;
		b=n;
	}

	void disp()
	{
		cout<<"a:"<<a<<"\nb:"<<b;
	}

	friend op_overload operator-(op_overload ob);
};

op_overload operator-(op_overload ob)
{
	op_overload ob1;
	ob1.a=-ob.a;
	ob1.b=-ob.b;
	return ob1;
}

void main()
{
	clrscr();
	op_overload ob(5,4),ob2;
	cout<<"Before Negation.\n";
	ob.disp();
	ob2=-ob;
	cout<<"\nAfter Negation.\n";
	ob2.disp();
}