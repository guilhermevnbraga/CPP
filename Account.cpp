#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Account.h"

int main() {
    int money;
    Account myAccount( 5000 );

    cout << "Inital balance: " << myAccount.getBalance() << endl;
    cout << "Enter credit amount: ";
    cin >> money;
    cout << endl;
    myAccount.credit( money );

    cout << "Actual balance: " << myAccount.getBalance() << endl;

    cout << "Enter debit amount: ";
    cin >> money;
    cout << endl;
    myAccount.debit( money );

    cout << "Final balance: " << myAccount.getBalance() << endl;

    return 0;
}
