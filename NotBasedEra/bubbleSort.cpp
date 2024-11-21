#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a[10];
    int temp;
    bool troca = false;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }

    for (int y = 0; y < 10; y++){
        for (int x = 0; x < 9-y; x++){
            if (a[x] > a[x+1]){
                temp = a[x];
                a[x] = a[x+1];
                a[x+1] = temp;
                troca = true;
            }
        }
        if (troca == false){
            break;
        }
    }

    for (int x = 0; x < 10; x++){
        cout << a[x] << " ";
    }

    cout << endl;
    return 0;
}
