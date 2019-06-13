#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
  ofstream outfile;
  outfile.open (argv[1]);
  outfile.write ("This is an apple",16);
  long pos = outfile.tellp();
  outfile.seekp(pos-7);
  outfile.write(" sam",4);
  outfile.close();
  return 0;
}