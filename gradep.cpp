#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
    void read();
    void display();
    private:
    char name[20];
    float marks[9],gradep[9],gpa;
    char grade[9];
};
int main()
{
    student s;
    s.read();
    s.display();
}
void student :: read()
{
    int i;
    cout<<"enter name of student:\n";
    cin>>name;
    cout<<"enter marks of 6 subjects and 3 labs:\n";
    for(i=0;i<9;i++)
    cin>>marks[i];
}
void student :: display()
{
    int i;
    gpa=0;
    for(i=0;i<9;i++)
    {
        if(marks[i]>=90)
        {
            grade[i]='S';
            gradep[i]=10;
        }
        else if(marks[i]>80&&marks[i]<90)
        {
            grade[i]='A';
            gradep[i]=9;
        }
        else if(marks[i]>70&&marks[i]<80)
        {
            grade[i]='B';
            gradep[i]=8;
        }
        else if(marks[i]>60&&marks[i]<80)
        {
            grade[i]='C';
            gradep[i]=7;
        }
        else if(marks[i]>50&&marks[i]<60)
        {
            grade[i]='D';
            gradep[i]=6;
        }
        else if(marks[i]>40&&marks[i]<50)
        {
            grade[i]='E';
            gradep[i]=5;
        }
        else
        {
            grade[i]='F';
            gradep[i]=0;
        }
    }
    for(i=0;i<9;i++)
    {
        if(i>=0&&i<=5)
        gradep[i]*=3;
        else
        gradep[i]*=2;
        gpa+=gradep[i];
    }
    gpa=gpa/24;
    cout<<"total CGPA of "<<name<<" is "<<gpa<<endl;
}