#include<iostream>
#include<iomanip>
using namespace std;
class base1
{
    protected:
    int data;
    public:
    void readdata()
    {
        cout<<"enter base class data value - ";
        cin>>data;
    }
    void displaydata()
    {
        cout<<"base class data value = "<<data<<endl;
    }
};
class derived1:public base1
{
    int derdata;
    public:
    void read()
    {
        cout<<"enter derived class data - ";
        cin>>derdata;
    }
    void display()
    {
        cout<<"derived class data value = "<<derdata<<endl;
    }
};
int main()
{
    derived1 obj;
    obj.read();
    obj.readdata();
    obj.display();
    obj.displaydata();
}