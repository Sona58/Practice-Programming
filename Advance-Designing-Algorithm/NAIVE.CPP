#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>

void naive_string(char t[20], char p[20], int n, int m)
{
	int s,a,j,ctr=0;
	for(s=0;s<=n-m;s++){
		j=1;
		while(j<=m-1 && t[s+j]==p[j])
			j++;
		if(j>=m){
			cout<<"\nPattern is found at position "<<s+1;
			ctr=1;
		}
	}
	if(ctr==0)
		cout<<"Pattern is not found\n";
}

void main(){
	char t[20],p[10];
	int n,m,z,i;
	clrscr();
	cout<<"\tString matching by naive method\n";
	cout<<"\nEnter text\n";
	gets(t);
	cout<<"\nEnter pattern\n";
	gets(p);
	n=strlen(t);
	m=strlen(p);
	naive_string(t,p,n,m);
	getch();
}
