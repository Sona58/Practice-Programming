#include<iostream.h>
#include<conio.h>

class item
{
  static int a;
  int code,price;

  public:

  item()
  {
   cout<<"Enter item code.\n";
   cin>>code;
   cout<<"\nEnter item price.\n";
   cin>>price;
   a++;
   cout<<"\nItem Entered.\n";
  }

  void disp_item()
  {
   cout<<"\nNumber of items used "<<a;
  }

  ~item()
  {
   cout<<"\nMemory cleaned up.";
  }
};

int item::a;
void main()
{
 clrscr();
 item ob,ob1;
 ob.disp_item();
}
