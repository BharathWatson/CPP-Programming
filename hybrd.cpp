#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    protected:
    char name[20];
    int rno;
    public:
    void read()
    {
        cout<<"enter name and roll number - ";
        cin>>name>>rno;
    }
    void display()
    {
        cout<<"Name of the student - "<<name<<"\nRoll number - "<<rno<<endl;
    }
};
class test:public student
{
    public:
    float tm;
    void readtm()
    {
        cout<<"enter test marks - ";
        cin>>tm;
    }
    void displaytm()
    {
        cout<<"total test marks - "<<tm<<endl;
    }
};
class sports
{
    public:
    float score;
    void reads()
    {
        cout<<"enter sports score - ";
        cin>>score;
    }
    void displays()
    {
        cout<<"sports score is - "<<score<<endl;
    }
};
class result:public test,public sports
{
    float tot;
    public:
    void displaytot()
    {
        tot=tm+score;
        cout<<"total score = "<<tot<<endl;
    }
};
int main()
{
    result obj;
    obj.read();
    obj.readtm();
    obj.reads();
    obj.display();
    obj.displaytm();
    obj.displays();
    obj.displaytot();
}