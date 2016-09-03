#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
int code;
float price;
float total=0;
int cnt=0;
ofstream ofile;
ofile.open("item");
char ch='y';
while(ch=='y')
{
cout<<"enter itemcode:\n";
cin>>code;
cout<<"\nenter price:\n";
cin>>price;
ofile<<code<<"\n";
ofile<<price<<"\n";
cout<<"\nDo you want to enter more items info (y/n)";
cin>>ch;
}
ofile.close();

ifstream ifile;
ifile.open("item");
while(ifile)
{
ifile>>code;
cout<<"\nitem code:"<<code;
cnt++;
ifile>>price;
cout<<"\nPrice:"<<price;
total=total+price;
}
cout<<"\ntotal number of items:"<<cnt;
cout<<"\nTotal price:"<<total;
ifile.close();
}