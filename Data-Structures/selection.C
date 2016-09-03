#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i,n=10,j,t,pos;
clrscr();
printf(" Enter ten numbers ");
for(i=0;i<10;i++)
{

scanf("%d",&a[i]);
}

for(i=0;i<=n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[pos])
pos=j;
}
t=a[pos];
a[pos]=a[i];
a[i]=t;
}



printf("\n The sorted array is: \n");
 for(i=0;i<10;i++)
 {
 printf("%d  \t",a[i]);
  }
  getch();
  }