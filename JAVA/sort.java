import java.lang.*;

class sort
{
	public static void main(String arg[])
	{
		int ar[]=new int[3];
		int a,t;
		ar[0]=9;
		ar[1]=6;
		ar[2]=8;
		System.out.println("Unsorted Array:");
		for(int i=0;i<3;i++)
			System.out.print(ar[i]+"\t");
		for(int i=1;i<3;i++)
		{
			a=i;
			while(a>0 && ar[a]<ar[a-1])
			{
				t=ar[a];
				ar[a]=ar[a-1];
				ar[a-1]=t;
				a--;
			}
		}
		System.out.println("\nSorted Array:");
		for(int i=0;i<3;i++)
			System.out.print(ar[i]+"\t");
	}
};