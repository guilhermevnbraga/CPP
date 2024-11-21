#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int question(int, int dificulty = 1);

int main(){
    srand(time(0));

    int dificulty;
    int userAnswer;

    cout << "Enter the game dificulty: ";
    cin >> dificulty;

    int answer = question(1 + rand() % 4, dificulty);

    cin >> userAnswer;

    if (userAnswer == answer)
        cout << "Certa resposta!\n";
    else
        cout << "Errado!\n";

    return 0;
}

int question(int operation, int dificulty){
    int answer;
    int diff = 10;

    if (dificulty < 1)
        dificulty = 1;

    for (int counter = 1; counter < dificulty; counter++){
        diff *= 10;
    }

    int number1 = diff / 10 + rand() % diff;
    int number2 = diff / 10 + rand() % diff;

    cout << "Quanto e ";

    switch(operation){
        case 1:
            cout << number1;
            cout << " + ";
            answer = number1 + number2;
            break;
        
        case 2:
            if (number1 < number2){
                int copy = number1;
                number1 = number2;
                number2 = copy;
            }

            cout << number1;
            cout << " - ";
            answer = number1 - number2;
            break;

        case 3:
            cout << number1;
            cout << " * ";
            answer = number1 * number2;
            break;

        case 4:

            while (number1 % number2 != 0){
                number1 = diff/10 + rand() % diff;
                number2 = diff/10 + rand() % diff;

                while (number2 == 0){
                    number2 = 1 + rand() % diff;
                }
            }

            cout << number1;
            cout <<" / ";

            answer = number1 / number2;
            break;
    }

    cout << number2 << " ? ";

    return answer;
}
