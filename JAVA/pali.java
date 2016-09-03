import java.lang.*;

class pali
{
	public static void main(String ar[])
	{
		int n,r,p,m;
		n=121;
		r=0;
		m=n;
		while(m!=0)
		{
			p=m%10;
			r=(r*10)+p;
			m=m/10;
		}
		if(n==r)
			System.out.println(n+" is palindrome.");
		else
			System.out.println(n+" is not palindrome.");	
	}
};