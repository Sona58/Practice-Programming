#include<stdio.h>
#include<math.h>

void main()
{
	float r,d;
	int n;
	clrscr();
	printf("\nEnter no. of cells.\n");
	scanf("%d",&n);
	printf("\nEnter radius of each cell.\n");
	scanf("%f",&r);
	d= sqrt(3*n)*r;
	printf("\nFrequency Reused Distance = %f",d);
	getch();
}