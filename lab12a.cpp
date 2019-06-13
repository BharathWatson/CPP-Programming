#include<fstream>
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    ofstream out("ad.cpp");
    if(!out.is_open())
    {
        cout<<"can't open the file..."<<endl;
        exit(0);
    }
    int scode;
    char subname[15];
    cout<<"enter subject name and code (-1 to EXIT)";
    do
    {
        cout<<"enter the subject name and code - ";
        cin>>subname>>scode;
        if(scode==-1)
            break;
        out<<scode<<"-"<<subname<<endl;
    }while(scode!=-1);
    out.close();
    ifstream in("ad.cpp");
    if(!in.is_open())
    {
        cout<<"enter can't open file..."<<endl;
        exit(0);
    }
    int code;
    char name[15];
    in>>code>>name;
    cout<<"All subjects with subject code list - "<<endl;
    while(!in.eof())
    {
        cout<<code<<"-"<<name<<endl;
        in>>code>>name;
    }
    in.close();
}