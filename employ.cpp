#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    char name[20];
    float salary;
    public:
    void read();
    void display()
    {
        cout<<"employee name is "<<name<<endl;
        cout<<"employee salary is "<<salary<<endl;
    }
};
void employee::read()
{
    cout<<"enter name of employee\n";
    cin>>name;
    cout<<"enter salary of the employee\n";
    cin>>salary;
}
int main()
{
    employee e;
    e.read();
    e.display();
}