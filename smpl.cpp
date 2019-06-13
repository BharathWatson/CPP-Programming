#include<iostream>
#include<iomanip>
using namespace std;
class myclass
{
    static int k;
    int l;
    public:
    myclass(int i)
    {
        l=i;
    }
    ~myclass()
    {
        cout<<"object destroyed\n";
    }
    void read()
    {
        int p;
        cout<<"enter integer\n";
        cin>>p;
        k=p;
        k++;
        cout<<"static var = 0"<<k<<endl;
    }
};
int myclass::k;
int main()
{
    myclass ob1(10),ob2(12);
    ob1.read();
    ob2.read();
}