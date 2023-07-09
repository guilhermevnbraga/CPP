#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class Account {
    public:
        Account( int money ) {
            if (money > 0)
                setBalance( money );
            else
                setBalance(0);
        }

        void setBalance( int money ) {
            balance = money;
        }

        int getBalance() {
            return balance;
        }

        void credit( int money ){
            if (money > 0)
                setBalance( getBalance() + money );
        }

        void debit( int money ){
            if (money <= getBalance()){
                setBalance( getBalance() - money );
            }
            else
                cout << "Debit amount exceeded account balance." << endl;
        }

    private:
        int balance;
};
