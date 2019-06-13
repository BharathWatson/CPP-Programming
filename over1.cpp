#include<iostream>
#include<iomanip>
using namespace std;
class shape
{
    public:
    void area(int s)
    {
        cout<<"square area = "<<s*s<<endl;
    }
    void area(int l,int b)
    {
        cout<<"area of rectangle = "<<l*b<<endl;
    }
    void area(double b,double h)
    {
        cout<<"area of triangle = "<<0.5*b*h<<endl;
    }
};
int main()
{
    shape s;
    double a,l,b,h;
    cout<<"enter side of square : ";
    cin>>a;
    s.area((int)a);
    cout<<"enter length and breadth of rectangle : ";
    cin>>l>>b;
    s.area((int)l,(int)b);
    cout<<"enter base and height of triangle : ";
    cin>>b>>h;
    s.area(b,h);
}