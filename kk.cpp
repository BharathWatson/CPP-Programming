#include <bits/stdc++.h>
using namespace std;
class hugeint
{
    char *p;
    int x;
    public:
    hugeint(int x=40):p(new char[x]){}
    void read()
    {
        cout<<" enter huge int : - ";
        cin>>p;
        for( x=0; p[x]!='\0'; x++);
    }
    hugeint operator+(const hugeint& b)
    {
        int len;
        if(x>b.x)
          len=x;
          else
          len=b.x;
          hugeint c(len+1);
          char*s=new char[len+1];
          int k=0,temp=0,flag=0,i,j;
          for( i=x-1,j=b.x-1; (i>=0&&j>=0); i--,j--)
          {
             temp=p[i]+b.p[j]-96;
             if(flag==1)
             {
             temp+=1;
             flag=0;
             }
             if(temp>=10)
             {
                s[k++]=(temp%10)+48;
                flag=1;
             }
             else
             s[k++]=temp+48;
          }
          while(j>=0)
          s[k++]=b.p[j--];
          while(i>=0)
          s[k++]=p[i--];
          for(i=k-1;i>0;i--)
          cout<<s[k];
    }
};
int main()
{
    hugeint a,b;
     a.read(),b.read();
     hugeint c=a+b;
}