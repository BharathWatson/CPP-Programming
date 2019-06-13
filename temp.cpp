#include<iostream>
#include<iomanip>
using namespace std;
class my
{
    double data;
    public:
    template <typename tata> tata read(tata a,tata b);
    void display()
    {
        cout <<"value = " << data <<endl;
    }
};
template <typename tata>
tata my:: read(tata a,tata b)
{
    data = a * b;
}
int main()
{
    my obj;
    obj.read(45,78);
    obj.display();
}