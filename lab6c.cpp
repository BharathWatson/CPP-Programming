#include<iostream>
#include<iomanip>
using namespace std;
class base
{
    protected:
    int base1;
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    void read()
    {
        cout<<"enter base class data value - ";
        cin>>base1;
    }
    void display()
    {
        cout<<"base class data value = "<<base1<<endl;;
    }
};
class derv1:public base
{
    protected:
    int derv;
    public:
    derv1()
    {
        cout<<"derived1 class constructor"<<endl;
    }
    void readderv()
    {
        cout<<"enter derived1 data value - ";
        cin>>derv;
    }
    void displayderv()
    {
        cout<<"derived1 class data value = "<<derv<<endl;
    }
};
class derv2:public base
{
    protected:
    int derv1;
    public:
    derv2()
    {
        cout<<"derived2 class constructor"<<endl;
    }
    void readderv1()
    {
        cout<<"enter derived2 data value - ";
        cin>>derv1;
    }
    void displayderv1()
    {
        cout<<"derived2 class data value = "<<derv1<<endl;
    }
};
int main()
{
    derv1 ob1;
    derv2 ob2;
    ob1.read();
    ob1.readderv();
    ob2.read();
    ob2.readderv1();
    ob1.display();
    ob2.display();
    ob1.displayderv();
    ob2.displayderv1();
}