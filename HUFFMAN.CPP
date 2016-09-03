#include<iostream.h>
#include<conio.h>
#include<malloc.h>

int k,f,str[20];
int i=0;
char ch;

struct NODE{
	char data;
	int freq;
	struct NODE *link,*right,*left;
};
typedef NODE node;
node *start, *last, *s, *a, *p, *q, *z, *t, *min, *min1;

node *getnode(){
	node *p;
	p=(node*)malloc(sizeof(node));
	return p;
}

void queue(){
	if(start==NULL){
		p=getnode();
		cout<<"\nEnter the character: ";
		cin>>ch;
		p->data=ch;
		cout<<"Enter its frequency: ";
		cin>>f;
		p->freq=f;
		p->link=NULL;
		p->right=NULL;
		p->left=NULL;
		start=p;
	}
	else{
		s=start;
		q=getnode();
		cout<<"\nEnter the character : ";
		cin>>ch;
		q->data=ch;
		cout<<"Enter frequency : ";
		cin>>f;
		q->freq=f;
		q->link=NULL;
		q->right=NULL;
		q->left=NULL;
		if(start->freq>q->freq){
			q->link=start;
			start=q;
		}
		else{
			while((s->freq<q->freq) && (s!=NULL)){
				a=s;
				s=s->link;
			}
			q->link=a->link;
			a->link=q;
		}
	}
}

void traverse(){
	node *ptr;
	ptr=start;
	while(ptr!=NULL){
		ptr=ptr->link;
	}
}

node* extract_min(){
	t=start;
	start=start->link;
	t->link=NULL;
	return t;
}

void insert(node *z){
	if(start==NULL)
		start=z;
	else{
		s=start;
		if(start->freq>z->freq){
			z->link=start;
			start=z;
		}
		else{
			while((s->freq<z->freq) && (s!=NULL)){
				a=s;
				s=s->link;
			}
			z->link=a->link;
			a->link=z;
		}
	}
}

node* huffman(){
	for(int y=0; y<(k-1);y++){
		z=getnode();
		min=extract_min();
		z->left=min;
		min1=extract_min();
		z->right=min1;
		z->freq=(min->freq)+(min1->freq);
		z->data='A';
		insert(z);
		traverse();
	}
	return extract_min();
}

void preorder(node* t){
	if(t!=NULL){
		preorder(t->left);
		preorder(t->right);
	}
}

void print(node *ptr,char x){
	if(ptr->data!=x){
		if(ptr->left){
			str[i++]=0;
			print(ptr->left,x);
		}
		if(ptr->right){
			str[i++]=1;
			print(ptr->right,x);
		}
		i--;
	}
	else{
		cout<<"Huffman code for  '"<<x<<"':";
		for(int p=0;p<i;p++){
			cout<<str[p];
		}
		return;
	}
}

void main(){
	clrscr();
	int i,j;
	k=0;
	char z;
	char ch='y';
	start=NULL;
	cout<<"\nHow many characters do you wish to enter :";
	cin>>i;
	k=k+i;
	for(j=0;j<i;j++){
		queue();
	}
	traverse();
	node *l;
	l=huffman();
	traverse();
	preorder(l);
	ch='y';
	cout<<"\nHuffman code";
	do{
		cout<<"\nEnter the character: ";
		cin>>z;
		print(l,z);
		cout<<"\nDo you want to continue?(y/n)";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	getch();
}