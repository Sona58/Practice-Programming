import java.lang.*;

class search
{
	public static void main(String arg[])
	{
		int ar[]=new int[5];
		int i=0,l=4,m,a=2,f=0;
		ar[0]=1;
		ar[1]=2;
		ar[2]=3;
		ar[3]=4;
		ar[4]=5;
		while(i<=l)
		{
			m=(i+l)/2;
			if(a==ar[m])
			{
				f=1;
				break;
			}
			else if(a<ar[m])
				l=m-1;
			else
				i=m+1;
		}
		if(f==0)
			System.out.println("The number is not found.");
		else
			System.out.println("The number is found.");
	}
};