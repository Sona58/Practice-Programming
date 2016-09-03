import java.lang.*;

class ams
{
	public static void main(String ar[])
	{
		int n,r,p,m;
		n=371;
		r=0;
		m=n;
		while(m!=0)
		{
			p=m%10;
			r=r+(p*p*p);
			m=m/10;
		}
		if(n==r)
			System.out.println(n+" is amstrong.");
		else
			System.out.println(n+" is not amstrong.");	
	}
};