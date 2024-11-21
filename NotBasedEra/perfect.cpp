#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool perfect(int);

int main(){
    int quantity;

    cout << "Enter number quantity for perfect test: ";
    cin >> quantity;
    cout << endl;
    
    for (int counter = 0; counter <= quantity; counter++){
        if (perfect(counter))
            cout << counter << endl;
    }

    return 0;    
}

bool perfect(int number){
    int sum = 0;

    for (int counter = 1; counter < number; counter++){
        if (number % counter == 0){
            sum += counter;
        }
    }

    if (sum == number)
        return true;
    else
        return false;
}
