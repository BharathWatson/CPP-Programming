#include<iostream>
#include<iomanip>
using namespace std;
namespace ab
{
    int a;
    double p;
    void display()
    {
        cout<<"in namespace ab";
    }
}
int main()
{
    using namespace ab;
    a=12;p=39.34567;
    cout<<a;
    cout<<p;
    display();

}