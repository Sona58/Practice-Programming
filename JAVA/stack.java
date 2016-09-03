import java.lang.*;

class calc
{
	int a[]=new int[3];
	int top;
	calc()
	{
		top=-1;	
	}

	void push(int i)
	{
		++top;
		a[top]=i;
	}

	void pop()
	{
		System.out.println("Element Deleted: "+a[top]);
		top--;
	}
};

class stack
{
	public static void main(String arg[])
	{
		calc c1=new calc();
		for(int i=0;i<3;i++)
			c1.push(i);
		for(int i=0;i<3;i++)
			c1.pop();
	}
};