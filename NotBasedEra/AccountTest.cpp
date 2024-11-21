#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Account.h"

int main()
{
    int money;
    Account myAccount(5000);

    cout << "Inital balance: " << myAccount.getBalance() << endl;
    cout << "Enter credit amount: ";
    cin >> money;
    myAccount.credit(money);

    cout << "Actual balance: " << myAccount.getBalance() << endl;

    cout << "Enter debit amount: ";
    cin >> money;
    myAccount.debit(money);

    cout << "Final balance: " << myAccount.getBalance() << endl;

    return 0;
}
