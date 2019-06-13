#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class mclass
{
    char str[20];
    public:
    friend char* add(mclass);
    mclass()
    {
        cout<<"object created:\n";
    }
    mclass(char s[20])
    {
        strcpy(str,s);
    }
    ~mclass()
    {
        cout<<"object destroyed\n";
    }
};
char* add(mclass ob)
{
    return strcat(str,ob.str);
}
int main()
{
    char s[20],s1[20];
    cout<<"enter 2 strings :\n";
    cin>>s>>s1;
    mclass ob(s),ob1(s1);
    cout<<"the concatenate string is - "<<ob.add(ob1);
}