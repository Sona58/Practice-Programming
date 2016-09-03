#include<iostream.h>
#include<conio.h>
#include<time.h>

int a[5];

int partition(int p, int r){
	int x=a[r];
	int i=p-1;
	int temp;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;

	return i+1;
}

void quick_sort(int p,int r){
	int q;
	if(p<r){
		q=partition(p,r);
		quick_sort(p,q-1);
		quick_sort(q+1,r);
	}
}

void main(){
	int i;
	clrscr();
	cout<<"Enter 5 numbers\n";
	for(i=0;i<5;i++)
		cin>>a[i];
	clock_t start=clock();
	for(long k=0;k<10000000;k++)
		quick_sort(0,4);
	cout<<"Time Complexity\n";
	cout<<((clock()-start)/(double)CLOCKS_PER_SEC);
       //	for(i=0;i<5;i++)
	 //	cout<<a[i]<<"\t";
}