#include <iostream>
#include <fstream>
using namespace std;
int main (int argc,char *argv[])
{
  ifstream file1(argv[1],ios::binary);
  if (file1)
  {
    file1.seekg (0,file1.end);
    int length = file1.tellg();
    file1.seekg (0,file.beg);
    char *buffer = new char [length];
    file1.read (buffer,length);
    file1.close();
    cout.write (buffer,length);
    delete[] buffer;
  }
  return 0;
}