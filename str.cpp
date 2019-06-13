#include<iostream>
#include<iomanip>
using namespace std;
class ab
{
    public:
    void don()
    {
        cout<<2017;
    }
};
class dd:public ab
{
    public:
    void don()
    {
        cout<<2018;
    }
};
int main()
{
    dd ob;
    ab nn;
    ab *obj= new ab;
    obj = &ob;
    (*obj).don();
}