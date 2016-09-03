#include<iostream.h>
#include<conio.h>

int sum=0;

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}

void knapsack(int m,int n,int w[],int p[]){
	int v[100][200],x[10],i,j;
	for(i=0;i<=m;i++)
		v[0][i]=0;
	for(i=1;i<=n;i++){
		for(j=0;j<=m;j++){
			if(j>=w[i])
				v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
			else
				v[i][j]=v[i-1][j];
		}
	}
	for(i=1;i<=n;i++)
		x[i]=0;
	i=n;
	j=m;
	while(i>0 && j>0){
		if(v[i][j]!=v[i-1][j]){
			x[i]=1;
			j=j-w[i];
		}
		i--;
	}
	cout<<"\nThe Optimal Set of Weights is:\n";
	for(i=1;i<=n;i++){
		if(x[i]==1){
			cout<<"X"<<i<<"=1\t";
			sum=sum+p[i];
		}
		else
			cout<<"X"<<i<<"=0\t";
	}
	cout<<"\nTotal profit = "<<sum;
}

void main(){
	int w[10],p[10],i,m,n;
	clrscr();
	cout<<"\t0/1 Knapsack Problem\n\n";
	cout<<"Enter The Number of Items:\t";
	cin>>n;
	cout<<"Enter the Weights of the Items:\n";
	for(i=1;i<=n;i++)
		cin>>w[i];
	cout<<"Enter the Profits of the Items:\n";
	for(i=1;i<=n;i++)
		cin>>p[i];
	cout<<"Enter the Capacity of Knapsack: ";
	cin>>m;
	knapsack(m,n,w,p);
	getch();
}
