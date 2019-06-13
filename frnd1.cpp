#include<iostream>
#include<iomanip>
using namespace std;
class mclass
{
    int a,b;
    public:
    mclass()
    {
        cout<<"object created";
    }
    mclass(int i,int j)
    {
        a=i;
        b=j;
    }
    ~mclass()
    {
        cout<<"object destroyed"<<endl;
    }
    friend int add(mclass);
};
int add(mclass ob)
{
    return ob.a+ob.b;
}
int main()
{
    int x,y;
    cout<< "enter x,y values: ";
    cin>>x>>y;
    mclass ob(x,y);
    cout<<"result of x+y = "<<add(ob)<<endl;
}