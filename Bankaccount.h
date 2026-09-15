#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Bankaccount {
    private: 
        string OwnerName;
        string Pin;
        double Balance;
    public: 
        Bankaccount(string Name, string UserPin);
        bool CheckPin(string EnteredPin);
        void ShowBalance();
        void Deposit(double Amount);
        void Withdraw(double Amount);
}
