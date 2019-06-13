#include<iostream>
#include<iomanip>
#include<exception>
using namespace std;
class myexception : public exception{};
class myclass{};
void xhandler()
{
    myclass obj;
    throw 'c';
}
void xhandler1()
{
    myclass obj1;
    try
    {
        xhandler();
    }
    catch(int i)
    {
        cout<<"caught an integer exception : "<<i<<endl;
    }
    catch(double d)
    {
        cout<<"caught an double exception : "<<d<<endl;
    }
    catch(...)
    {
        throw ;
    }
}
void xhandler2()
{
    try
    {
        xhandler1();
    }
    catch(myexception& obj)
    {
        cout<<"caught a myception object..."<<endl;
    }
    catch(myclass& obj)
    {
        cout<<"caught a my class object..."<<endl;
    }
    catch(...)
    {
        throw ;
    }
}
int main()
{
    try
    {
        xhandler2();
    }
    catch(...)
    {
        cout<<"Unknown..."<<endl;
    }
}