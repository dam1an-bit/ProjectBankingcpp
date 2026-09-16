#include <iostream>
#include "Bankaccount.h"
#include <string>
using namespace std;

int main() {
    string Name;
    string Pin;

    cout<<"Enter your name:";
    cin>>Name;
    cout<<"Create a Pin:";
    cin>>Pin;

    Bankaccount account(Name, Pin);
    string EnteredPin;

    bool LoggedIn=false;
    while(!LoggedIn) {
    cout<<"Enter your Pin to login:";
    cin>>EnteredPin;
    if(account.CheckPin(EnteredPin)) {
        LoggedIn=true;
        cout<<"Login successfull"<<endl;
    }
    else {
            cout<<"Wrong Pin"<<endl;
        }
    }
        int Choice;
        double Amount;
        do {
            cout<<"----- Bank account menu -----"<<endl;
            cout<<"1. Show Balance"<<endl;
            cout<<"2. Deposit"<<endl;
            cout<<"3. Withdraw"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Choose:"<<" ";
            cin>>Choice;

            switch (Choice) {
                
                case 1:
                account.ShowBalance();
                break;

                case 2:
                cout<<"Enter the amount to deposit:"<<" ";
                cin>>Amount;
                account.Deposit(Amount);
                break;

                case 3:
                cout<<"Enter amount to withdraw:"<<" ";
                cin>>Amount;
                account.Withdraw(Amount);
                break;
                
                case 4:
                cout<<"Bank account menu closed"<<endl;
                break;

                default:
                cout<<"Invalid"<<endl;
            }
        } while(Choice!=4);
    }