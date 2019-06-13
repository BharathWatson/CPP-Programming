#include<iostream>
#include<iomanip>
using namespace std;
class time
{
    int seconds,hh,mm,ss;
    public:
    void readtime();
    void convert();
    void display()
    {
        cout<<"total time in seconds is - "<<seconds<<" seconds"<<endl;
    }
}t;
void time::readtime()
{
    cout<<"enter number of hours - ";
    cin>>hh;
    cout<<"enter number of minutes - ";
    cin>>mm;
    cout<<"enter number of seconds - ";
    cin>>ss;
}
void time::convert()
{
    seconds=3600*hh+60*mm+ss;
}
int main()
{
    t.readtime();
    t.convert();
    t.display();
}