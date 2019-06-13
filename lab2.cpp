#include<iostream>
#include<iomanip>
using namespace std;
class TIME
{
    int hh,mm,ss;
    long int total;
    public:
    TIME()
    {
        cout<<"TIME object created:"<<endl;
    }
    TIME(int i,int j,int k)
    {
        hh=i;
        mm=j;
        ss=k;
    }
    ~TIME()
    {
        cout<<"Object destroyed"<<endl;
    }
    long int cmp(TIME,TIME);
    int modify1(TIME);
    int modify2(TIME);
};
long int TIME::cmp(TIME ob,TIME ab)
{
    long int k=(3600*ob.hh+60*ob.mm+ob.ss);
    long int l=(3600*ab.hh+60*ab.mm+ab.ss);
    if(k==l)
    cout<<"the two TIME zones are same...."<<endl;
    else if(k>l)
    cout<<"the TIME ZONE 1 is Greater than TIME ZONE 2"<<endl;
    else if(k<l)
    cout<<"the TIME ZONE 2 is Greater than TIME ZONE 1"<<endl;
}
int TIME::modify1(TIME ob)//increment function definition
{
    cout<<"present TIME is : "<<hh<<" : "<<mm<<" : "<<ss<<endl;
    ss+=1;
    if(ss==60)
    {
        ss=0;
        mm+=1;
        if(mm==60)
        {
            mm=0;
            hh+=1;
            if(hh>=13)
            hh=(unsigned)(hh-12);
        }
    }
    cout<<"the TIME after modify is : "<<hh<<" : "<<mm<<" : "<<ss<<endl;
}
int TIME::modify2(TIME ob)//decrement function definition
{
    cout<<"present TIME is : "<<hh<<" : "<<mm<<" : "<<ss<<endl;
    ss-=1;
    if(ss==-1)
    {
        ss=59;
        mm-=1;
        if(mm==-1)
        {
            mm=59;
            hh-=1;
        }
    }
    if(hh==-1||hh==0)
    hh=12;
    cout<<"the TIME after modify is : "<<hh<<" : "<<mm<<" : "<<ss<<endl;
}
int main()
{
    int ho[2],mi[2],sec[2],ch;
    cout<<"enter 1ST TIME ZONE details : ......"<<endl;
    cout<<"enter hours in the TIME -  ";
    cin>>ho[0];
    cout<<"\nenter minutes in the TIME -  ";
    cin>>mi[0];
    cout<<"\nenter seconds of TIME -  ";
    cin>>sec[0];
    cout<<"\nenter 2ND TIME ZONE details : .....\n";
    cout<<"enter hours in the TIME -  ";
    cin>>ho[1];
    cout<<"\nenter minutes in the TIME -  ";
    cin>>mi[1];
    cout<<"\nenter seconds of TIME -  ";
    cin>>sec[1];
    TIME obj(ho[0],mi[0],sec[0]),obj2(ho[1],mi[1],sec[1]);
    obj.cmp(obj,obj2);
    cout<<"In Function Main - ";
    cout<<"enter your choice : - \n(1):Increment TIME by 1 second\n(2):Decrement TIME by 1 second\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        obj.modify1(obj);
        cout<<"In Function Main - ";
        break;
        case 2:
        obj.modify2(obj);
        cout<<"In Function Main - ";
        break;
        default:
        cout<<"Invalid Operation..."<<endl;
    }
}