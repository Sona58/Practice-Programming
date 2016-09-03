import java.lang.*;

class array
{
	public static void main(String ar[])
	{
		int a[][]=new int[4][];
		a[0]=new int[1];
		a[1]=new int[2];
		a[2]=new int[3];
		a[3]=new int[4];
		int k=0;
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(k+"\t");
				k++;
			}
			System.out.println("\n");
		}
	}
};