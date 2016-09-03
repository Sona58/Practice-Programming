#include<iostream.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>

int max(int a,int b){
	return (a>b)?a:b;
}
int cutRod(int price[],int n){
	if(n<=0)
		return 0;
	int max_val=INT_MIN;
	for(int i=0;i<n;i++)
		max_val=max(max_val,price[i]+cutRod(price,n-i-1));
	return max_val;
}
void main(){
	clrscr();
	int arr[]={1,5,8,9,10,17,17,20};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Maximum Obtainable Value is "<<cutRod(arr,size);
	getch();
}
