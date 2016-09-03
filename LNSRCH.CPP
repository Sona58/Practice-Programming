#include<iostream.h>
#include<conio.h>

int main(){
	int i,x;
	int A[10];

	clrscr();
	cout<<"Enter 10 numbers\n";
	for(i=0;i<10;i++)
		cin>>A[i];
	cout<<"Enter the number to search\n";
	cin>>x;
	for(i=0;i<10;i++)
		if(A[i]==x){
			cout<<"Element fount at index "<<i;
			return 0;
		}
	cout<<"Element not found";
	return 0;
}