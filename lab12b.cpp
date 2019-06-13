#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    if(!in.is_open()||!out.is_open())
    {
        cout<<"can't open files..."<<endl;
        exit(0);
    }
    char data;
    data=in.get();
    while(!in.eof())
    {
        out.put(data);
        data=in.get();
    }
    cout<<"copied the contents of "<<*argv[1]<<" to "<<*argv[2]<<endl;
    in.close();
    out.close();
}