#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int inverter(int);
int numberLength(int, int counter = 0);

int main(){
    int number;
    cout << "Enter the number for inverter: ";
    cin >> number;
    cout << "Number Length: " << numberLength(number) << endl;
    cout << "Inverted number: " << inverter(number) << endl;
    return 0;
}

int inverter(int number){
    int num = 0;
    int numberLengtha = numberLength(number);
    int power;
    int power2;

    for (int counter = numberLengtha - 1; counter >= 0; counter--){
        power = 1;
        power2 = 1;

        for (int po = counter; po > 0; po--){
            power *= 10;
        }

        for (int po = numberLengtha - counter - 1; po > 0; po--){
            power2 *= 10;
        }

        num += number / power * power2;
        number -= number / power * power;
    }

    return num;
}

int numberLength(int number, int counter){
    if (number == 0)
        return counter;
    else{
        counter++;
        return numberLength(number/10, counter);
    }
}
