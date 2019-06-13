#include<iostream>
#include<iomanip>
using namespace std;
using namespace std;
void myfun (char k)
{
    try{
        if ( k == 0 )
        throw 0;
        else
        throw k;
    }
    catch ( int i )
    {
        cout << "caught error exception : " << i << endl;
    }
    catch (char ch)
    {
        cout << "caught an exception : "<< ch << endl;
    }
}
int main()
{
    char a;
    cin >> a;
    myfun (a);
}