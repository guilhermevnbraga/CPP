#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int number;

    cout << "Enter the number: "; // 4444
    cin >> number;
    cout << endl;

    int milesimo = number / 1000; // 4
    int centesimo = number / 100 - milesimo * 10; // 44-40
    int decimo = number / 10 - centesimo * 10 - milesimo * 100; // 444-40-400
    int unidade = number - milesimo * 1000 - centesimo * 100 - decimo * 10; // 4444-4000-400-40

    milesimo += 9; // 13
    milesimo -= milesimo/10*10; // 3
    number = decimo * 1000 + unidade * 100 + milesimo * 10 + centesimo; // 1 -> 3 | 2 -> 4 || 4434

    cout << "Criptographed number: " << number;
}
