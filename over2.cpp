#include<iostream>
#include<iomanip>
using namespace std;
class funovr
{
    public:
    void sqrt(int i)
    {
        cout<<"square root of the number is "<<i*i<<endl;
    }
    void sqrt(float j)
    {
        cout<<"square root of the number is "<<j*j<<endl;
    }
    void sqrt(double k)
    {
        cout<<"square root of the number is "<<k*k<<endl;
    }
};
int main()
{
    funovr fn;
    double a,b,c;
    cout<<"enter a integer number : ";
    cin>>a;
    fn.sqrt((int)a);
    cout<<"enter a float number : ";
    cin>>b;
    fn.sqrt((float)b);
    cout<<"enter a number : ";
    cin>>c;
    fn.sqrt(c);
}