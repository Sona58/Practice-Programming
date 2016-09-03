#include<iostream.h>
#include<conio.h>
#define MAX_NODE 50

struct node{
	int vertex;
	node *next;
};

node *adj[MAX_NODE];
node *sngllist=NULL;
int totNodes;
const int ready=1,wait=2,processed=3;
int status[MAX_NODE];
void createGraph(){
	node *new1,*last;
	int neighbor,neighbor_val;
	cout<<"\n\n---Graph Creation--\n\n";
	cout<<"Enter total nodes in graph: ";
	cin>>totNodes;
	for(int i=1;i<=totNodes;i++){
		last=NULL;
		cout<<"\nEnter no. of nodes in adjacency list of node "<<i<<"\n";
		cout<<"-->That is Total Neighbours of "<<i<<": ";
		cin>>neighbor;
		for(int j=1;j<=neighbor;j++){
			cout<<"Enter neighbor #"<<j<<": ";
			cin>>neighbor_val;
			new1=new node;
			new1->vertex=neighbor_val;
			new1->next=NULL;
			if(adj[i]==NULL)
				adj[i]=last=new1;
			else{
				last->next=new1;
				last=new1;
			}
		}
	}
}

void dfsVisit(int i){
	node *tmp,*new1;
	int v;

	tmp=adj[i];
	while(tmp!=NULL){
		v=tmp->vertex;
		if(status[v]==ready)
			dfsVisit(v);
		tmp=tmp->next;
	}
	new1=new node;
	new1->vertex=i;
	new1->next=sngllist;
	sngllist=new1;
	status[i]=processed;
}

void topologicalSort(){
	int i;

	for(i=1;i<=totNodes;i++)
		status[i]=ready;
	for(i=1;i<=totNodes;i++){
		if(status[i]==ready)
			dfsVisit(i);
	}
	while(sngllist!=NULL){
		cout<<" "<<sngllist->vertex;
		sngllist=sngllist->next;
	}
}

void main(){
	clrscr();
	cout<<"*****Topological Sort*****\n";
	createGraph();
	cout<<"\n===Topological Sort is as under===\n";
	topologicalSort();
	getch();
}
