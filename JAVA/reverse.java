import java.lang.*;

class reverse
{
	public static void main(String ar[])
	{
		int n,r,p,m;
		n=321;
		r=0;
		m=n;
		while(m!=0)
		{
			p=m%10;
			r=(r*10)+p;
			m=m/10;
		}
		System.out.println("Reverse of "+n+" is "+r);
	}
};