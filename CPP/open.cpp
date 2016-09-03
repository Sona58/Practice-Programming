#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream ofile;
ofile.open("Book_author");
ofile<<"abcd\n";
ofile<<"efgh\n";
ofile<<"ijkl\n";
ofile.close();
ofile.open("Book_title");
ofile<<"OS\n";
ofile<<"HTML\n";
ofile<<"CA\n";
ofile.close();
const int size=30;
char arr[size];
ifstream ifile;
ifile.open("Book_author");
cout<<"\nBOOK AUTHORS:\n";
while(ifile)
{
ifile.getline(arr,size);
cout<<arr;
cout<<"\n";
}
ifile.close();
ifile.open("Book_title");
cout<<"\nBOOK TITLES\n";
while(ifile)
{
ifile.getline(arr,size);
cout<<arr<<"\n";
}
ifile.close();
getch();
}
