#include<iostream.h>
#include<conio.h>

class A
{
	float a,b,c;
	public:

	A(int m,int n,int p)
	{
		a=m;
		b=n;
		c=p;
		cout<<"a:"<<a<<"\nb:"<<b<<"\nc:"<<c;
	}

	A(int m,int n):a(m),b(n*2)
	{
		cout<<"\n\na:"<<a<<"\nb:"<<b;
	}

	A(float m, float n):a(m+n),b(n),c(m*2)
	{
		cout<<"\n\na:"<<a<<"\nb:"<<b<<"\nc:"<<c;
	}

	A(int m,float p):a(m+p),b(a+2),c(a-2)
	{
		cout<<"\n\na:"<<a<<"\nb:"<<b<<"\nc:"<<c;
	}

	A(int m,int n,float p):c(n),b(p),a(m+n)
	{
		cout<<"\n\na:"<<a<<"\nb:"<<b<<"\nc:"<<c;
	}
};

void main()
{
	clrscr();
	A ob(2,3,4), ob1(2,3), ob2(6.2f,7.3f), ob3(5,5.5f), ob4(5,4,6.5f);
}