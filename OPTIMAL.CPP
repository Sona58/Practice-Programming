#include<iostream.h>
#include<conio.h>
#define MAX 10

void main()
{
	double w[MAX][MAX], c[MAX][MAX], p[MAX], q[MAX];
	double min, min1;
	int temp=0,r[MAX][MAX],i,j,k,b,root,n;
	clrscr();
	cout<<"Enter the number of elements:\t";
	cin>>n;
	cout<<"\n";
	for(i=1; i <= n; i++){
		cout<<"Enter the Successful Search Probability of Element "<<i<<":\t";
		cin>>p[i];
	}
	cout<<"\n";
	for(i=0; i <= n; i++){
		cout<<"Enter the Unsuccessful Search Probability of Element "<<i<<":\t";
		cin>>q[i];
	}
	cout<<"W\t\tC\t\tR\n";
	for(i=0; i <= n; i++){
		for(j=0; j <= n; j++){
			if(i == j){
				w[i][j] = q[i];
				c[i][j] = 0;
				r[i][j] = 0;
				cout<<"W["<<i<<"]["<<j<<"]: "<<w[i][j]<<"\tC["<<i<<"]["<<j<<"]: "<<c[i][j]<<"\tR["<<i<<"]["<<j<<"]: "<<r[i][j]<<"\n";
			}
		}
	}
	cout<<"\n";
	for(b=0; b < n; b++){
		for(i=0,j=b+1; j < n+1 && i < n+1; j++,i++){
			if(i!=j && i < j){
				w[i][j] = p[j] + q[j] + w[i][j-1];
				min = 30000;
				for(k = i+1; k <= j; k++){
					min1 = c[i][k-1] + c[k][j] + w[i][j];
					if(min > min1){
						min = min1;
						temp = k;
					}
				}
				c[i][j] = min;
				r[i][j] = temp;
			}
			cout<<"W["<<i<<"]["<<j<<"]: "<<w[i][j]<<"\tC["<<i<<"]["<<j<<"]: "<<c[i][j]<<"\tR["<<i<<"]["<<j<<"]: "<<r[i][j]<<"\n";
		}
		cout<<"\n";
	}
	cout<<"Minimum cost = "<<c[0][n]<<"\n";
	root = r[0][n];
	cout<<"Root  = "<<root<<"\n";
	getch();
}