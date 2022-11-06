#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{
    int accno;
    char name[50],add[50];
    char type;
    int deposit;
    public:
           void open_account();
           void deposit_amount();
           void withdraw_amount();
           void balance_enquiry();
           };
void bank :: open_account()
{
    cout<<"Enter your full name : \n";
    cin.ignore();
    cin.getline(name,50);
    cout<<"Enter your address : \n";
    cin.ignore();
    cin.getline(add,50);
    cout<<"what type of account you want to open savings(s) or current(c) : \n";
    cin>> type;
    type=toupper(type);
    cout<<"Enter the initial amount(>=500 for savings account and >=1000 for current account) : \n";
    cin>> deposit;
    cout<<"The account is opened \n";

}
void bank :: deposit_amount()
{
    int a;
    cout<<"Enter how much deposit amount : \n";
    cin>>a;
    deposit+=a;

}
void bank :: withdraw_amount()
{
    float b;
    cout<<"withdraw : \n";
    cout<<"Amount to be withdrawn : \n";
    cin>>b;
   deposit-=b;
}
void bank ::  balance_enquiry()
{
    cout<<" The balance is : \n"<< deposit <<endl;
}
int main()
{
    int m,w;
    bank obj;
    do
    {
    cout<<"1) Open Account \n";
    cout<<"2) Deposit Amount \n";
    cout<<"3) Withdraw Amount \n";
    cout<<"4) Balance Enquiry \n";
    cout<<"5) Exit";
    cout<<"\n Select the option from above \n";
    cin>>m;
    switch(m)
    {
        case 1:
              cout<<"1) open account \n";
              obj.open_account();
              break;

        case 2:
              cout<<"2)Deposit amount \n";
              obj.deposit_amount();
              break;

        case 3:
              cout<<"3)Withdraw amount \n";
              obj.withdraw_amount();
              break;
        case 4:
              cout<<"4)Balance enquiry \n";
              obj.balance_enquiry();
              break;
        case 5:
               if(m==5)
               {
                exit(1);
               }
  default:
        cout<<"This does not exist, try again \n";
    }
  cout<<"\n do you want to select next option then press ::p \n";
  cout<<"if you want to exit then press :: N";
  w=getch();
  if(w=='n'||w=='N')
  exit(0);
    } while(w=='p'||w=='P');
    getch();
    return 0;
}

