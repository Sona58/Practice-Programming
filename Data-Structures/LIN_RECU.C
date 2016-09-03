# include <conio.h>
# include <stdio.h>
void main()
{
	int a[10], n=5, i, ele;
	int linear(int[],int,int);
	int r_linear(int [],int, int);
	printf("\n Enter the elements of array : ");
	for (i = 0; i < n; i++)
	{
		printf("\n a[%d]", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n Search using simple function ");
	printf("\n Element to find :");
	scanf("%d", &ele);
	i = linear(a,n, ele);
	if(i == -1)
		printf("\n Element not found ");
	else
		printf("\n Element found at location %d", i);

	printf("\n Search using recursive function ");
	printf("\n Element to find :");
	scanf("%d", &ele);
	i = r_linear(a,n-1, ele);

	if(i == -1)
		printf("\n Element not found ");
	else
		printf("\n Element found at location %d", i);

	getch();
}

int linear(int a[], int n, int ele)
{
	int i;
	for(i = 0; i < n;i++)
	{
		if (a[i] == ele)
			return i+1;
	}
	return -1;
}

int r_linear(int a[], int n, int ele)
{
	if(n)
	{
		if (a[n] == ele)
			return n+1;
		else
			r_linear(a, n-1, ele);
	}
	return -1;
}

