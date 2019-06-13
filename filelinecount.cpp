#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(int argc,char *argv[])
{
    string line;
    int numlines=0;
    ifstream file(argv[1]);
    while(getline(file,line))
    numlines++;
    cout<<"number of lines in file = "<<numlines<<endl;
    file.close();
}