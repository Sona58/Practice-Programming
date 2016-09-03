# include <conio.h>
# include <stdio.h>
void main()
{
	int a[10], n=5, i, ele;
	int bin_srch(int[],int,int, int);
	int r_bin_srch(int [],int, int, int);
	clrscr();
	printf("\n Enter the elements of array : ");
	for (i = 0; i < n; i++)
	{
		printf("\n a[%d]", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n BINARY Search using simple function ");
	printf("\n Element to find :");
	scanf("%d", &ele);
	i = bin_srch(a,0,n-1,ele);
	if(i == -1)
		printf("\n Element not found ");
	else
		printf("\n Element found at location %d", i);

	printf("\n Binary Search using recursive function ");
	printf("\n Element to find :");
	scanf("%d", &ele);
	i = r_bin_srch(a,0, n-1, ele);

	if(i == -1)
		printf("\n Element not found ");
	else
		printf("\n Element found at location %d", i);

	getch();
}

int bin_srch(int a[], int l, int u, int ele)
{
	int mid;
	while(l <= u)
	{
		mid = (l + u) /2;
		if (a[mid] == ele)
			return mid+1;
		else if(a[mid] < ele)
			l = mid +1;
		else
			u = mid -1;
	}
	return -1;
}

int r_bin_srch(int a[],int l,int u,int ele)
{
	int mid;
	if(l <= u)
	{
		mid = (l + u)/2;
		if (a[mid] == ele)
			return mid+1;
		else if (a[mid] < ele)
			r_bin_srch(a,mid +1,u, ele);
		else
			r_bin_srch(a, l, mid -1, ele);
	}
	return -1;
}


