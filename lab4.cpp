#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class STRING
{
    char str[40];
    public:
    friend istream& operator >>(istream& t,STRING& s);
    friend ostream& operator <<(ostream& t,STRING s);
    void operator<(STRING& s)
    {
        if(strcmp(str,s.str)<0)
        cout<<"first string less than second string";
        else
        cout<<"first string is not less than second string";
    }
    void operator>(STRING& s)
    {
        if(strcmp(str,s.str)>0)
        cout<<"first string is greater than second string";
        else
        cout<<"first string is not greater than second string";
    }
    void operator==(STRING& s)
    {
        if(strcmp(str,s.str)==0)
        cout<<"first string is equal to  second string";
        else
        cout<<"strings are not equal ";
    }

     void operator>=(STRING& s)
    {
        if(strcmp(str,s.str)>=0)
        cout<<"first string is greater  than or equal to  second string";
        else
        cout<<"first string is less than second one";
    }
    void operator<=(STRING& s)
    {
        if(strcmp(str,s.str)<=0)
        cout<<"first string is less than or equal to  second string";
        else
        cout<<"first string is greater than second one";
    }
    STRING& operator=(STRING& t)
    {
        strcpy(str,t.str);
        return *this;
    }
    void operator ()(char t[])
    {
        strcpy(str,t);
        cout<<str;
    }
    void operator [](int s)
    {
        cout<<str[s];
    }
};
ostream& operator <<(ostream& t,STRING s)
{
    t<<s.str;
    return t;
}
istream& operator >>(istream& t,STRING& s)
{
    t>>s.str;
    return t;
}
int main()
{
    STRING s,s1;
    char arr[40];
    cout<<"enter choice -\n1 - >\n2 - <\n3 - >=\n4 - <=\n5 - ==\n6 - []\n7 - ()\n8 - ="<<endl;
    int ch,i;
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"enter two strings - ";
        cin>>s>>s1;
        s<s1;
        break;
        case 2:
        cout<<"enter two strings - ";
        cin>>s>>s1;
        s>s1;
        break;
        case 3:
        cout<<"enter two strings - ";
        cin>>s>>s1;
        s>=s1;
        case 4:
        cout<<"enter two strings - ";
        cin>>s>>s1;
        s<=s1;
        break;
        case 5:
        cout<<"enter two strings - ";
        cin>>s>>s1;
        s==s1;
        break;
        case 6:
        cout<<"enter a string - ";
        cin>>s;
        cout<<"enter the array subscript number";
        cin>>i;
        s[i];
        break;
        case 7:
        cout<<"enter a string - ";
        cin>>s;
        cout<<"enter the array to be constructed";
        cin>>arr;
        s(arr);
        break;
        case 8:
        cout<<"enter a string - ";
        cin>>s1;
        s=s1;
        break;
        default:
        cout<<"enter valid choice";
        break;
    }
}