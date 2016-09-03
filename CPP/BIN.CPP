#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
class student
{
int roll,m1,m2,m3;
public:
void getdata();
void disp();
};
void student :: getdata()
{
cout<<"\nEnter roll no.:";
cin>>roll;
cout<<"\nEnter marks of subject 1:";
cin>>m1;
cout<<"\nEnter marks of subject 2:";
cin>>m2;
cout<<"\nEnter marks of subject 3:";
cin>>m3;
}
void student :: disp()
{
cout<<setiosflags(ios::left)<<setw(6)<<roll<<setiosflags(ios::right)<<setw(5)<<m1<<setw(5)<<m2<<setw(5)<<m3<<endl;

}
void main()
{
clrscr();
student s[2];
fstream iofile;
iofile.open("STDNT.DAT",ios::in|ios::out);
cout<<"\nEnter student details for 5 students:";
for(int i=0;i<5;i++)
{
s[i].getdata();
iofile.write((char*)&s[i],sizeof(s[i]));
}
iofile.seekg(0);
cout<<"\nStudent details:\n";
for(i=0;i<5;i++)
{
iofile.read((char*)&s[i],sizeof(s[i]));
s[i].disp();
}
iofile.close();
getch();
}
