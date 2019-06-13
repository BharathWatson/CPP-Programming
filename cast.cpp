#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class my
{
    int a,b;
    public:
    my(int i,int j)
    {
        a=i;b=j;
    }
    void out()
    {
        cout<<"a = "<<a<<"\tb = "<<b<<endl;
    }
};
class derv: public my
{
    int k;
    public:
    derv(int y)
    {
        k=y;
    }
    void show()
    {
        cout<<"k = "<<k<<endl;
    }
};
int main()
{
    my obj(89,99);
    derv ob(45);
    obj.out();
    ob.show();
}