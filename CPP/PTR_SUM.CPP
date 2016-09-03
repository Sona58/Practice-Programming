#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[]={10,20,30,40,50};
int *ptrarr;
int sum=0;
ptrarr=arr;
for(int i=0;i<5;i++)
{
sum=sum+(*ptrarr);
ptrarr++;
}
cout<<"\n sum is:"<<sum;
getch();
}
