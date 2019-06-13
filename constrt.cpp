#include<iostream>
#include<iomanip>
using namespace std;
class gold
{
    int a,b;
    public:
    gold()
    {
        cout<<"object created"<<endl;
    }
    void read();
    void display();
};
void gold::read()
{
    cout<<"enter gold rate and weight : ";
    cin>>a>>b;
}
void gold::display()
{
    cout<<"gold rate is = "<<a<<endl<<"weight of gold is ="<<b<<endl;
}
int main()
{
    gold g;
    g.read();
    g.display();
}