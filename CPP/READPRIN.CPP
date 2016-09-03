#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
int roll,m1,m2,m3;
cout<<"\nEnter roll no.";
cin>>roll;
cout<<"\nEnter marks of 3 subjects\n";
cin>>m1>>m2>>m3;
ofstream ofile("stud");
ofile<<roll<<m1<<m2<<m3;
ofile.close();
ifstream ifile("stud");
ifile>>roll>>m1>>m2>>m3;
cout<<"\nRoll no.:"<<roll;
cout<<"\nMArks 1:"<<m1;
cout<<"\nMarks 2:"<<m2;
cout<<"\nMarks 3:"<<m3;
ifile.close();
getch();
}
