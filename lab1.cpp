#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class HUGEINT
{
    char arr[40],arr1[40];
    int c;
    public:
    HUGEINT(char *p,char *q)
    {
        strcpy(arr,p);
        strcpy(arr1,q);
    }
    void sum();
};
void HUGEINT :: sum()
{
    int n1,n2,*prr,*prr1,i,s[40],count,carry=0,big;
    prr=new int[40];
    prr1=new int[40];
    n1=strlen(arr);
    n2=strlen(arr1);
    cout<<"1 - length = "<<strlen(arr)<<endl;
    cout<<"2 - length = "<<strlen(arr1)<<endl;
    for(i=0;i<n1;i++)
        prr[i]=(int)arr[n1-i-1]-48;
    for(i=0;i<n2;i++)
        prr1[i]=(int)arr1[n2-i-1]-48;
    big = (n1>n2)?n1:n2;
    for( i = 0; i < big ; i++)
    {
        count = prr[i] + prr1[i] + carry ;
        carry = 0;
        if(count > 10)
        {
            carry = count / 10;
            count = count % 10;
        }
        s[i] = count;
        count = 0;
    }
    cout<<"sum of two nums have - "<<big<<"digits"<<endl;
    cout<<"Sum Of Two HUGE INTEGERS = ";
    for(i = big-1 ; i >= 0 ; i--)
    cout<<s[i];
}
int main()
{
    char num[50],num1[50];
    cout<<"enter first number of <40 digits - ";
    cin>>num;
    cout<<"enter second number of <40 digits - ";
    cin>>num1;
    HUGEINT obj(num,num1);
    obj.sum();
}