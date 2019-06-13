#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream in(argv[1],ios::binary);
    if(!in)
    {
        cout<<"can't open file"<<endl;
        exit(0);
    }
    char ch;
    in.get(ch);
    while()
}