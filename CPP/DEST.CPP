#include<iostream.h>
#include<conio.h>

class dest
{
  public:

  dest()
  {
   cout<<"\ncreated";
  }

  ~dest()
  {
   cout<<"\ndestroyed";
  }
};

void main()
{
 dest ob,ob1,ob2;
 {
  dest o1;
  cout<<"\nhello";
 }
 dest ob3,ob4;
 cout<<"\nblock";
 {
  dest o2,o3;
  cout<<"\nanother block";
 }
 dest ob5,ob6;
}