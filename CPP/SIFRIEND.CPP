#include<iostream.h>
#include<conio.h>

class SI
{
	int p,t;
	float r;
	public:
	void getdata(int x,int y,float z)
	{
		p=x;
		t=y;
		r=z;
	}
	friend float interest(SI ob)
	{
		float s;
		s=(ob.p*ob.t*ob.r)/100;
		return s;
	}
	void disp()
	{
		cout<<"Simple Interest: ";
	}
};

void main()
{
	clrscr();
	SI ob;
	ob.getdata(2000,2,5.5f);
	float a=interest(ob);
	ob.disp();
	cout<<a;
}