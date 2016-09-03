#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i,n=10,j,k=1,temp;
printf(" Enter ten numbers ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
for(j=0;j<n-k;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
k++;
}
 printf("\n The sorted array is: \n");
 for(i=0;i<10;i++)
 {
 printf("%d  \t",a[i]);
  }
  getch();
  }