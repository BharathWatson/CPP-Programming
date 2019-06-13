#include<iostream>
#include<iomanip>
using namespace std;
void sqr(const int &v)
{
    const_cast<int&>(v) = v*v;
}
int main()
{
    int k = 6705;
    sqr(k);
    cout<<"after cast value is"<<k;
}