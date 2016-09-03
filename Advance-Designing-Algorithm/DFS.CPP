#include<iostream.h>
#include<conio.h>

char stack[20];
int top=-1,n;
char arr[20];
char dfs(int );
char ajMat[20][20];
char b[20];
void display();
int p=0;

void main(){
	clrscr();
	int i;
	char v;
	int l=0;
	cout<<"Enter the number of nodes in a graph\n";
	cin>>n;
	cout<<"Enter the value of node of graph\n";
	for(i=0;i<n;i++)
		cin>>b[i];
	char k=b[0];
	cout<<"Enter the value in adjancency matrix in form of 'y' or 'n'\n";
	cout<<"\nIf there is an edge between the two vertices then enter 'y' or 'n'\n";
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i]<<"->"<<b[j]<<": ";
			char v;
			cin>>v;
			ajMat[i][j]=v;
		}
		cout<<"\n\n";
	}
	for(i=0;i<n;i++){
		l=0;
		while(k!=b[l])
			l++;
		k=dfs(l);
	}
	display();
	getch();
}

void display(){
	cout<<" DFS of Graph: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}

void push(char val){
	top=top+1;
	stack[top]=val;
}

char pop(){
	return stack[top];
}

int unVisit(char val){
	int i;
	for(i=0;i<p;i++)
		if(val==arr[i])
			return 0;
	for(i=0;i<=top;i++)
		if(val==stack[top])
			return 0;
	return 1;
}

char dfs(int i){
	int k;
	char m;
	if(top==-1)
		push(b[i]);
	m=pop();
	top--;
	arr[p]=m;
	p++;
	for(int j=0;j<n;j++){
		if(ajMat[i][j]=='y'){
			if(unVisit(b[j])){
				push(b[j]);
			}
		}
	}
	return stack[top];
}
