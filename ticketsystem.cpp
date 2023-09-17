#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int lerArray(int [], int);
void economic(int [] = {0});
void premium(int [] = {0});

int main(){
    int tamanhoArray = 10;
    int vagas[tamanhoArray] = {0};
    int choice;

    while (!lerArray(vagas)){
        cout << "Please type 1 for \"First Class\"" << endl
        << "Please type 2 for \"Economy\"" << endl;
        cin >> choice;
        
    }
    
    return 0;
}

bool lerArray(int array[], int tamanho){
    int resposta = 0;

    for (int i = 0; i < tamanho; i++){
        if (array[i] == 0){
            resposta = -1;
        }
        else if (i == 4){
            resposta = 2;
        }
    }
    return 1;
}
