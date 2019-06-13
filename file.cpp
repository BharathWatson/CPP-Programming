#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        cout<<"can't open any files : Usage - ./a.out filname filename"<<endl;
        exit(0);
    }
    ifstream in1(argv[1],ios::in|ios::binary);
    if(!in1)
    {
        cout<<"error:can't open file1"<<endl;
        exit(0);
    }
    ofstream out1(argv[2],ios::out|ios::binary);
    if(!out1)
    {
        cout<<"error:can't open file2"<<endl;
        exit(0);
    }
    char ch;
    while(in1.get(ch))
    {
        out1.put(ch);
    }
    out1.close();
    in1.close();
}