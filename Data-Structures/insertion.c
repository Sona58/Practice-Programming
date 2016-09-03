#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i,n=10,j,t,pos,ele;
clrscr();
printf(" Enter ten numbers ");
for(i=0;i<10;i++)
{

scanf("%d",&a[i]);
}

for(i=0;i<=n-1;i++)
{
pos=i+1;
ele=a[i+1];
for(j=i;j>=0;j--)
{
if(ele<a[j])
a[j+1]=a[j];

if (ele>a[j])
break;

}
a[j+1]=ele;

}
			
printf("\n The sorted array is: \n");
 for(i=0;i<10;i++)
 {
 printf("%d  \t",a[i]);
  }
  getch();
  }