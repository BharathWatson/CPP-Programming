#include<iostream>
#include<iomanip>
using namespace std;
class two;
class one
{
    int a;
    public:
    one()
    {
    }
    one(int i)
    {
        a=i;
    }
    int mul(two);
};
class two
{
    int b;
    public:
    two()
    {
    }
    two(int i)
    {
        b=i;
    }
    friend int one::mul(two);
};
int one::mul(two ob)
{
    return a*ob.b;
}
int main()
{
    int x,y;
    cout<<"enter x , y values - ";
    cin>>x>>y;
    one ob1(x);
    two ob2(y);
    cout<<"result = "<<ob1.mul(ob2)<<endl;
}