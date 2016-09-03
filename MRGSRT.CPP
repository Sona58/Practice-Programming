#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<math.h>

int a[5];
void merge(int p, int q, int m){
		int n1=m-p+1;
		int n2=q-m;
		int b[5],c[5],i;

		for(i=0;i<n1;i++){
			b[i]=a[(p+i)];
		}

		for(i=0;i<n2;i++){
			c[i]=a[(m+1+i)];
		}
		int i_b=0,i_c=0,q_b=n1,q_c=n2,k=p;

		while(i_b<q_b && i_c<q_c){
			if(b[i_b]<=c[i_c]){
				a[k]=b[i_b];
				i_b++;
			}
			else{
				a[k]=c[i_c];
				i_c++;
			}
			k++;
		}

		while(i_b<q_b){
			a[k]=b[i_b];
			i_b++;
			k++;
		}

		while(i_c<q_c){
			a[k]=c[i_c];
			i_c++;
			k++;
		}
}

void merge_sort(int p, int q){
	int m;
	if(p<q){
		m=floor((p+q)/2);
		merge_sort(p,m);
		merge_sort(m+1,q);
		merge(p,q,m);
	}
}

void main(){
	int i;
	clrscr();
	cout<<"Enter 5 numbers.\n";
	for(i=0;i<5;i++)
		cin>>a[i];
	clock_t start=clock();
	for(long k=0;k<10000000;k++)
	       merge_sort(0,4);
	cout<<"Time Complexity\n";
	cout<<((clock()-start)/(double)CLOCKS_PER_SEC);
}