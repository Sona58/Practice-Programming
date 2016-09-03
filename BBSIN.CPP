#include<iostream.h>
#include<conio.h>
#include<time.h>

void main(){
	int A[10],B[10],C[10],i,temp,j;
	clrscr();
	cout<<"Enter 10 elements\n";
	for(i=0;i<10;i++){
		cin>>A[i];
		B[i]=A[i];
		C[i]=A[i];
	}
	cout<<"Insertion Sort:\n";
	clock_t start=clock();
	for(long k=0;k<10000000;k++){
		for(i=0;i<10;i++){
			temp=A[i];
			j=i-1;
			while(A[j]>temp && j>=0){
				A[j+1]=A[j];
				j--;
			}
			A[j+1]=temp;
		}
	}
	cout<<"Time Complexity:\n";
	cout<<((clock()-start)/(double)CLK_TCK);

	cout<<"\n\n Bubble Sort:\n";
	start=clock();
	for(k=0;k<10000000;k++){
		for(i=0;i<9;i++){
			for(j=0;j<10;j++){
				if(B[j]>B[j+1]){
					temp=B[j];
					B[j]=B[j+1];
					B[j+1]=temp;
				}
			}
		}
	}
	cout<<"Time Complexity:\n";
	cout<<((clock()-start)/(double)CLK_TCK);

	cout<<"\n\n Selection Sort:\n";
	start=clock();
	for(k=0;k<10000000;k++){
		for(i=0;i<10;i++){
			int min=C[i];
			int pos=i;
			for(j=i+1;j<10;j++){
				if(C[j]<min){
					min=C[j];
					pos=j;
				}
			}
			temp=C[i];
			C[i]=C[pos];
			C[pos]=temp;
		}
	}
	cout<<"Time Complexity\n";
	cout<<((clock()-start)/(double)CLK_TCK);
	getch();
}