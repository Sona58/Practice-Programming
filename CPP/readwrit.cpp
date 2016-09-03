#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
int arr[5]={1,2,3,4,5};
ofstream ofile;
ofile.open("binary");
ofile.write((char*)&arr,sizeof(arr));
ofile.close();
for(int i=0;i<5;i++)
{
arr[i]=0;
}
ifstream ifile;
ifile.open("binary");
ifile.read((char*)&arr,sizeof(arr));
for(i=0;i<5;i++)
{
cout<<arr[i];
cout<<"\n";
}
ifile.close();
getch();
}
