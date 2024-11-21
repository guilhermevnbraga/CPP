#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main(){
    double amount;
    double principal = 24;

    cout << "Year" << setw( 120 ) << "Amount on deposit" << endl;

    cout << fixed << setprecision( 2 );

    for ( double rate = 5; rate <= 10; rate += 5)
    {
        for ( int year = 379; year < 2023; year++ ){
            amount = principal * pow( 1.0 + rate/100, year );
            
            cout << setw( 4 ) << year << setw( 100 ) << amount << endl;
        }
        cout << endl;
    }

    return 0;
}
