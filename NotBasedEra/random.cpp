#include <iostream>
#include <iomanip> // Inclua a biblioteca para manipuladores de fluxo
using namespace std;

int main() {
    int frequency1 = 0, frequency2 = 0, frequency3 = 0;
    int frequency4 = 0, frequency5 = 0, frequency6 = 0;

    // Simulação de rolagem de dados (exemplo)
    for (int roll = 1; roll <= 6000; ++roll) {
        int face = 1 + rand() % 6;

        switch (face) {
        case 1:
            frequency1++;
            break;
        case 2:
            frequency2++;
            break;
        case 3:
            frequency3++;
            break;
        case 4:
            frequency4++;
            break;
        case 5:
            frequency5++;
            break;
        case 6:
            frequency6++;
            break;
        }
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << frequency1
         << "\n   2" << setw(13) << frequency2
         << "\n   3" << setw(13) << frequency3
         << "\n   4" << setw(13) << frequency4
         << "\n   5" << setw(13) << frequency5
         << "\n   6" << setw(13) << frequency6 << endl;

    // Exemplos adicionais de formatação
    cout << "\nExemplos adicionais de formatacao:\n";
    cout << "Alinhamento a esquerda: " << left << setw(10) << 42 << "fim" << endl;
    cout << "Alinhamento a direita: " << right << setw(10) << 42 << "fim" << endl;
    cout << "Precisao fixa: " << fixed << setprecision(2) << 3.14159 << endl;
    cout << "Notacao cientifica: " << scientific << 123456.789 << endl;
    cout << "Preenchimento com zeros: " << setfill('0') << setw(5) << 42 << endl;

    return 0;
}
