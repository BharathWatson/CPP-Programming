#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
template<class T>
class stack
{
    public:
    int tos=-1;
    T a[10];
    void push(T ele)
    {
        if(tos==9)
        {
            cout<<"stack is overflow..."<<endl;
            exit(0);
        }
        tos++;
        a[tos]=ele;
        cout<<"element inserted to stack - "<<ele<<endl;
    }
    T pop()
    {
        if(tos==-1)
        {
            cout<<"stack is underflow..."<<endl;
            exit(0);
        }
        T tmp;
        tmp=a[tos];
        tos--;
        return tmp;
    }
    void printstack()
    {
        cout<<"elements in the stack are : "<<endl;
        for(int i=0;i<=tos;i++)
        cout<<a[i]<<"\t";
        cout<<endl;
    }
};

int main()
{
    stack<int> obj;
    stack<char> obj1;
    int ch;
    do
    {
    cout<<"enter your choice :\n1-push,2-pop,3-display,4-exit "<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        int a;char b;
        cout<<"enter a integer,character to push - ";
        cin>>a>>b;
        obj.push(a);
        obj1.push(b);
        break;
        case 2:
        cout<<"pop-ed element "<<obj.pop()<<" in int stack."<<endl;
        cout<<"pop-ed element "<<obj1.pop()<<" in char stack."<<endl;
        break;
        case 3:
        obj.printstack();
        obj1.printstack();
        break;
    }
    }while(ch!=4);
}