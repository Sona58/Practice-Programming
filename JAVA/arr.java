import java.lang.*;

class arr
{
	public static void main(String ar[])
	{
		int a[]={10,20,30};
   
		int b[][]={{1,2},{3,4}};
	
		System.out.println("Original Array A:");


		for(int i=0;i<3;i++)

		{
			
			System.out.println(" element "+(i+1)+": "+a[i]);

			a[i]=a[i]+5;
		
		}

		
System.out.println("\nModified Array A:");


		for(int i=0;i<3;i++)
		

			System.out.println(" element "+(i+1)+": "+a[i]);

		System.out.println("Original Array B:");

		for(int i=0;i<2;i++)
		
		{

		    for(int j=0;j<2;j++)

			System.out.print(b[i][j]+"\t");
	
		    System.out.println();

		}
		
		for(int i=0;i<2;i++)

		{
		
		    for(int j=0;j<2;j++)

			b[i][j]=b[i][j]+1;

		    System.out.println();

		}
		
		System.out.println("Modified Array B:");

		for(int i=0;i<2;i++)
		
		{

		    for(int j=0;j<2;j++)

		    	System.out.print(b[i][j]+"\t");
	
	    	    System.out.println();

		}
		
	}
};