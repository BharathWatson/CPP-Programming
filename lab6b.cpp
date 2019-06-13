#include<iostream>
#include<iomanip>
using namespace std;
class base1
{

    protected:
    int base;
    public:
    base1()
    {
        cout<<"base1 class constructor"<<endl;
    }
    void readbase1()
    {
        cout<<"enter base1 class data - ";
        cin>>base;
    }
    void displaybase1()
    {
        cout<<"base1 data value = "<<base<<endl;
    }
};
class base2
{
    protected:
    int base1;
    public:
    base2()
    {
        cout<<"base2 class constructor"<<endl;
    }
    void readbase2()
    {
        cout<<"enter base2 class data - ";
        cin>>base1;
    }
    void displaybase2()
    {
        cout<<"base2 data value = "<<base1<<endl;
    }
};
class derived:public base2,public base1
{
    protected:
    int derv;
    public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    }
    void readderv()
    {
        cout<<"enter derived class data - ";
        cin>>derv;
    }
    void displayderv()
    {
        cout<<"derived data value = "<<derv<<endl;
    }
};
int main()
{
    derived obj;
    obj.readbase1();
    obj.readbase2();
    obj.readderv();
    obj.displaybase1();
    obj.displaybase2();
    obj.displayderv();
}