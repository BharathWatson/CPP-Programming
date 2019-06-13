#include<iostream>
#include<iomanip>
using namespace std;
class base
{
    protected:
    int data;
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    void read()
    {
        cout<<"enter base class data value - ";
        cin>>data;
    }
    void display()
    {
        cout<<"base class data value = "<<data<<endl;
    }
};
class derived1:virtual public base
{
    protected:
    int derv1;
    public:
    derived1()
    {
        cout<<"derived1 class constructor"<<endl;
    }
    void readderv1()
    {
        cout<<"enter derived1 class data - ";
        cin>>derv1;
    }
    void displayderv1()
    {
        cout<<"derived1 class data value = "<<derv1<<endl;
    }
};
class derived2:virtual public base
{
    protected:
    int derv2;
    public:
    derived2()
    {
        cout<<"derived2 class constructor"<<endl;
    }
    void readderv2()
    {
        cout<<"enter derived2 class data - ";
        cin>>derv2;
    }
    void displayderv2()
    {
        cout<<"derived2 class data value = "<<derv2<<endl;
    }
};
class derived3:public derived1,public derived2
{
    protected:
    int derv3;
    public:
    derived3()
    {
        cout<<"derived3 class constructor"<<endl;
    }
    void readderv3()
    {
        cout<<"enter derived3 class data - ";
        cin>>derv3;
    }
    void displayderv3()
    {
        cout<<"derived3 class data value = "<<derv3<<endl;
    }
};
int main()
{
    derived3 obj;
    obj.read();
    obj.readderv1();
    obj.readderv2();
    obj.readderv3();
    obj.display();
    obj.displayderv1();
    obj.displayderv2();
    obj.displayderv3();
}