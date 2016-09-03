#include<stdio.h>
#include<conio.h>

int main(){
	int i,x;
	int A[10];

	clrscr();
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
		scanf("%d",&A[i]);
	printf("Enter the number to search");
	scanf("%d",&x);
	for(i=0;i<10;i++)
		if(A[i]==x){
			printf("Element fount at index %d",i);
			return 0;
		}
	printf("Element not found");
	return 0;
}