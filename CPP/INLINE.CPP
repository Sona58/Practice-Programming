#include<iostream.h>
#include<conio.h>

class inline_func
{
	public:

	inline void disp_inline()
	{
		cout<<"Inline function defined inside class";
	}

	void disp_noninline();
};

inline void inline_func::disp_noninline()
{
	cout<<"\nInline function defined outside class";
}

void main()
{
	clrscr();
	inline_func ob;
	ob.disp_inline();
	ob.disp_noninline();
}