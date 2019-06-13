#include<iostream>
#include<iomanip>
using namespace std;
class RATIONAL
{
    int c;
    public:
    friend istream& operator>>(istream& t,RATIONAL& p);
    friend ostream& operator<<(ostream& t,RATIONAL p);
    RATIONAL operator+(const RATIONAL& ob)
    {
        RATIONAL temp;
        temp.c=c+ob.c;
        return temp;
    }
    RATIONAL operator-(const RATIONAL& ob)
    {
        RATIONAL temp;
        temp.c=c-ob.c;
        return temp;
    }
    RATIONAL  operator*(const RATIONAL& ob)
    {
        RATIONAL temp;
        temp.c=c*ob.c;
        return temp;
    }
    RATIONAL operator/(const RATIONAL& ob)
    {
        RATIONAL temp;
        temp.c=c/ob.c;
        return temp;
    }
    RATIONAL operator%(const RATIONAL& ob)
    {
        RATIONAL temp;
        temp.c=c%ob.c;
        return temp;
    }
    RATIONAL& operator++()
    {
        c++;
        return *this;
    }
    RATIONAL operator++(int)
    {
        RATIONAL temp;
        temp.c=c;
        temp.c++;
        return temp;
    }
};
istream& operator >>(istream& dp,RATIONAL &p)
{
    dp>>p.c;
    return dp;
}
ostream& operator <<(ostream& dp,RATIONAL p)
{
    dp<<p.c;
    return dp;
}
int main()
{
    RATIONAL n1,n2;
    int ch;
    cout<<"enter the choices : -"<<endl;
    cout<<"1 : add two classes\n2 : substraction of two classes\n3 : multiply two classes\n4 : divide two classes\n5 : modulo of two classes\n6 : preincrement operation\n7 : postincrement operation\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"enter the values in the two classes - ";
        cin>>n1>>n2;
        cout<<"sum of two classes = ";
        cout<<n1+n2;
        break;
        case 2:
        cout<<"enter the values in the two classes - ";
        cin>>n1>>n2;
        cout<<"substraction of two classes = ";
        cout<<n1-n1;
        break;
        case 3:
        cout<<"enter the values in the two classes - ";
        cin>>n1>>n2;
        cout<<"multiplication of two classes = ";
        cout<<n1*n2;
        break;
        case 4:
        cout<<"enter the values in the two classes - ";
        cin>>n1>>n2;
        cout<<"division of two classes = ";
        cout<<n1/n2;
        break;
        case 5:
        cout<<"enter the values in the two classes - ";
        cin>>n1>>n2;
        cout<<"Modulo of two classes = ";
        cout<<n1%n2;
        break;
        case 6:
        cout<<"enter a value in one class - ";
        cin>>n1;
        cout<<"postincrement of the class = ";
        cout<<++n1;
        break;
        case 7:
        cout<<"enter a value in one class - ";
        cin>>n1;
        cout<<"preincrement of the class = ";
        cout<<n1++;
        break;
        default:
        cout<<"enter valid choice"<<endl;
    }
}