#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number1, number2, number3;

    cout << "Entre com três valores inteiros: ";
    cin >> number1 >> number2 >> number3;
    cout << "Soma: " << number1 + number2 + number3 << endl;
    cout << "Media: " << (number1 + number2 + number3)/3 << endl;
    cout << "Produto: " << number1 * number2 * number3 << endl;

    cout << "O menor: ";
    if (number1 < number2) {
        if (number1 < number3)
            cout << number1;
    }
    else if (number2 < number3)
        cout << number2;
    else
        cout << number3;
    cout << endl;

    cout << "O maior: ";
    if (number1 > number2){
        if (number1 > number3)
            cout << number1;
    }
    else if (number2 > number3)
        cout << number2;
    else
        cout << number3;

    return 0;
}
