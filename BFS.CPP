#include<iostream.h>
#include<conio.h>

char que[20];
int front=0,rear=0,n;
char arr[20];
int bfs(int );
char ajMat[20][20];
char b[20];
void display();
int p=0;

void main(){
	clrscr();
	char v;
	int i;
	cout<<"Enter the number of nodes in the graph\n";
	cin>>n;
	cout<<"Enter the value of node of graph\n";
	for(i=0;i<n;i++)
		cin>>b[i];
	cout<<"Enter the value in adjacency matrix in form of 'y' or 'n'\n";
	cout<<"\nIf there exists an edge between two vertices than 'y' otherwise 'n'\n";
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i]<<"->"<<b[j]<<": ";
			char v;
			cin>>v;
			ajMat[i][j]=v;
		}
		cout<<"\n\n";
	}
	for(i=0;i<n;i++)
		bfs(i);
	display();
	getch();
}
void display(){
	cout<<" BFS of Graph: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}

void insert(char val){
	que[front]=val;
	front++;
}

char del(){
	rear=rear+1;
	return que[rear-1];
}

int unVisit(char val){
	for(int i=0;i<front;i++){
		if(val==que[i])
			return 0;
	}
	return 1;
}

int bfs(int i){
	char m;
	if(front==0)
		insert(b[i]);
	for(int j=0;j<n;j++){
		if(ajMat[i][j]=='y'){
			if(unVisit(b[j]))
				insert(b[j]);
		}
	}
	m=del();
	arr[p]=m;
	p++;
	return 0;
}