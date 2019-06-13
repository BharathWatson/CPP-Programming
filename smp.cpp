#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    char s[20];
    istrstream inp(s,sizeof(s),ios::in);
    inp<<"how the a nothing to";
    char a;
    inp>>a;
    while(inp)
    {
        cout<<a;
        inp>>a;
    }
    cout<<endl;
}