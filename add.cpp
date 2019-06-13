#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int *p,i;
    p=new int[10];
    for(i=0;i<10;i++)
    cout<<*p<<endl;
}