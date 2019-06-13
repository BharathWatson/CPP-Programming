#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    int r = rand();
    while(r!=942851203)
    {
        cout<<r<<endl;
        r = rand();
    }
}