import java.lang.*;

class matrix
{
	public static void main(String ar[])
	{
		int a[][]=new int[3][3];
		int b[][]=new int[3][3];
		int c[][]=new int[3][3];
		a[0][0]=1;
		a[0][1]=2;
		a[0][2]=3;
		a[1][0]=4;
		a[1][1]=5;
		a[1][2]=6;
		a[2][0]=7;
		a[2][1]=8;
		a[2][2]=9;
		b[0][0]=0;
		b[0][1]=1;
		b[0][2]=2;
		b[1][0]=3;
		b[1][1]=4;
		b[1][2]=5;
		b[2][0]=6;
		b[2][1]=7;
		b[2][2]=8;
		System.out.println("Addition of matrix a and b");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				System.out.print(c[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("Subtraction of matrix a and b");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
				System.out.print(c[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("Multiplication of matrix a and b");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				c[i][j]=0;
				for(int k=0;k<3;k++)
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				System.out.print(c[i][j]+"\t");
			}
			System.out.println();
		}
			

	}
};