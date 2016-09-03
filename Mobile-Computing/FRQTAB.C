#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,k;
	float r,d;
	clrscr();
	printf("Enter radius of each cell.\n");
	scanf("%f",&r);
	printf("  0 1 2 3 4 5 6 7 8 9 10 11 12\n");
	for(i=0;i<=12;i++)
	{   printf("%d ",i);
		for(k=0;k<i;k++)
		{
		 printf("    ");
		}
		for(j=i;j<=12;j++)
		{
			n= (i*i)+(j*j)+(i*j);
			d= sqrt(3*n)*r;
			printf("%f ",d);
		}
		printf("\n");
	}
	getch();
}