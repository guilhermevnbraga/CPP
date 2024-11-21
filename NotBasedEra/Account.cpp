#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

#include "Account.h"

Account::Account(int money)
{
    if (money > 0)
        setBalance(money);
    else
        setBalance(0);
}

void Account::setBalance(int money)
{
    balance = money;
}

int Account::getBalance()
{
    return balance;
}

void Account::credit(int money)
{
    if (money > 0)
        setBalance(getBalance() + money);
    else
        cout << "Invalid credit amount!" << endl;
}

void Account::debit(int money)
{
    if (money <= getBalance())
    {
        setBalance(getBalance() - money);
    }
    else
        cout << "Debit amount exceeded account balance." << endl;
}
