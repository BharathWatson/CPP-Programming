#include<iostream>
#include<iomanip>
using namespace std;
int DAY[12]={31,28,31,30,31,30,31,31,30,31,30,31};
class DATE
{
    int dd,mm,yy;
    public:
    DATE(int i,int j,int k)
    {
        dd=i;
        mm=j;
        yy=k;
    }
    ~DATE()
    {
        cout<<"Object Destroyed.."<<endl;
    }
    friend void cmp(DATE,DATE);
    int isleapyear();
    void prevday();
    void nextday();
};
int DATE :: isleapyear()
{
    if(yy%4==0&&yy%100!=0)
    return 1;
    else
    return 0;
}
void cmp(DATE p1,DATE p2)
{
    if(p1.dd==p2.dd&&p1.mm==p2.mm&&p1.yy==p2.yy)
        cout<<"The Two Dates Are Same...."<<endl;
    else if(p1.yy<p2.yy&&p1.mm<p2.mm&&p1.dd<p2.dd)
        cout<<"The First Date Is Earlier Than Second...."<<endl;
    else
        cout<<"The Second Date Is Earlier Than First Date...."<<endl;
}
void DATE::prevday()
{
    cout<<"Present Day Is :  "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    dd--;
    if(dd==0)
    {
        mm--;
        dd=DAY[mm-1];
    }
    if(mm==0)
    {
        mm=12;
        yy--;
    }
    if(yy%4==0&&yy%100!=0)
        dd=29;
    cout<<"Previous Day Is :  "<<dd<<"-"<<mm<<"-"<<yy<<endl;
}
void DATE::nextday()
{
    cout<<"Present Day Is :  "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    dd++;
    if(dd>DAY[mm-1])
    {
        dd=1;
        mm++;
        if(mm==13)
        {
            mm=1;
            yy++;
        }
        if(mm==2&&yy%4==0&&yy%100!=0)
        {
            dd=29;
        }
    }
    cout<<"The Next Day Is :  "<<dd<<"-"<<mm<<"-"<<yy<<endl;
}
int main()
{
    int d,m,y,ch;
    cout<<"Enter First Date Details : "<<endl;
    cout<<"Day : ";
    cin>>d;
    cout<<"\nMonth : ";
    cin>>m;
    cout<<"\nYear : ";
    cin>>y;
    DATE ob(d,m,y);
    cout<<"Enter Second Date Details : "<<endl;
    cout<<"Day : ";
    cin>>d;
    cout<<"\nMonth : ";
    cin>>m;
    cout<<"\nYear : ";
    cin>>y;
    DATE ob1(d,m,y);
    cmp(ob,ob1);
    if(ob.isleapyear())
    {
        cout<<"The Year is Leap Year..."<<endl;
    }
    else
    cout<<"The Year is Not a Leap Year...."<<endl;
    if(d<32&&m<13)
    {
        cout<<"enter ur choice :\n1 : Previous Day\n2: Next Day"<<endl;
        cin>>ch;
    }
    else
    ch=3;
    switch(ch)
    {
        case 1:
        ob.prevday();
        cout<<"In Main Function - ";
        break;
        case 2:
        ob.nextday();
        cout<<"In Main Function - ";
        break;
        case 3:
        cout<<"Invalid DATE Details..."<<endl;
        break;
        default:
        cout<<"Enter A Valid Choice..."<<endl;
    }
}