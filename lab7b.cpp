#include<iostream>
#include<iomanip>
using namespace std;
class base
{
   protected:
     int i;
   public:
     void seti (int x)
     {
       i = x;
     }
     virtual void display() = 0;
};
class derived1 : public base
{
   protected:
     int j;
   public:
     void display()
     {
       j = i * i;
       cout << "\na = " << i << endl;
       cout <<"\nSquare of a = " << j << endl;
     }
};
class derived2:public base
{
   protected:
     int k;
   public:
     void display()
     {
       k = i + i;
       cout <<"\na = " << i << endl;
       cout << "\nDouble of a = " << k << endl;
     }
};
int main()
{
  int a;
  cout<<"enter a value - ";
  cin>>a;
  base *bptr;
  derived1 d1;
  derived2 d2;
  bptr = &d1;
  bptr->seti(a);
  bptr->display();
  bptr = &d2;
  bptr->seti(a);
  bptr->display();
}