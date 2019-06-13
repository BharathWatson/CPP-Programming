#include <iostream>
#include <iomanip>
using namespace std;
class Account
{
  public:
   Account( double d ,double ac) { balance = d;accountno = ac; }
   virtual double GetAccount()
   {
     return (float)accountno;
   }
   virtual double GetBalance()
   {
     return balance;
   }
   virtual void PrintBalance()
   {
      cerr << "Error. Balance not available for base type." << endl;
   }
  private:
    double balance,accountno;
};
class CurrentAccount : public Account
{
  public:
   CurrentAccount(double d,double ac) : Account(d,ac) {}
   void PrintBalance()
   {
     cout << "Current account Number is : " << GetAccount() << endl;
      cout << "Current account balance: " << GetBalance() << endl;
   }
};
class SavingsAccount : public Account
{
  public:
   SavingsAccount(double d,double ac) : Account(d,ac) {}
   void PrintBalance()
   {
      cout << "Savings account Number is: " << GetAccount()<<endl;
      cout << "Savings account balance: " << GetBalance()<<endl;
   }
};
int main()
{
   double c,s,ca,sa;
   cout<<"enter current account number and balance - ";
   cin>>ca>>c;
   cout<<"enter savings account number and balance - ";
   cin>>sa>>s;

   CurrentAccount *pCurrent = new CurrentAccount( c , ca) ;
   SavingsAccount  *pSavings  = new SavingsAccount( s , sa );

   Account *pAccount = pCurrent;
   pAccount->PrintBalance();

   pAccount = pSavings;
   pAccount->PrintBalance();
}