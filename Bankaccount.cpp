#include <iostream>
#include <string>
#include "Bankaccount.h"
using namespace std;

Bankaccount::Bankaccount(string Name, string UserPin) {
    OwnerName=Name;
    Pin=UserPin;
    Balance=0;
}

bool Bankaccount::CheckPin(string EnteredPin) {
    if(EnteredPin==Pin) {
        return true;
    }
    else {
        cout<<"Wrong Pin"<<endl;
        return false;
    }
}

void Bankaccount::ShowBalance() {
    cout<<"Owner:"<<" "<<OwnerName<<endl;
    cout<<"Balance:"<<" "<<Balance<<endl;
}

void Bankaccount::Deposit(double Amount) {
    if(Amount>0) {
        Balance=Balance+Amount;
        cout<<"Deposited:"<<" "<<Amount<<endl;
    }
    else {
        cout<<"Invalid amount"<<endl;
    }
}

void Bankaccount::Withdraw(double Amount) {
    if(Amount>0 && Amount<=Balance) {
        Balance=Balance-Amount;
        cout<<"Withdrawn:"<<" "<<Amount<<endl;
    }
    else {
        cout<<"Invalid withdrawal"<<endl;
    }
}

