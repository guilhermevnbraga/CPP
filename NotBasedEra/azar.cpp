/*
    Um jogador rola dois dados. Cada dado tem seis faces. Essas faces contêm 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados param de
    rolar, a soma dos pontos nas faces viradas para cima é calculada. Se a soma é 7 ou 11 na primeira rolagem dos dados, o jogador
    ganha. Se a soma é 2, 3 ou 12 na primeira rolagem dos dados (chamado ‘craps’), o jogador perde (isto é, a ‘casa’ ganha). Se a soma
    for 4, 5, 6, 8, 9 ou 10 na primeira rolagem dos dados, essa soma torna-se a ‘pontuação’ do jogador. Para ganhar, você deve continuar
    a lançar o dado até ‘fazer sua pontuação’. O jogador perde se obtiver um 7 antes de fazer sua pontuação.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include "dado.h"

int main()
{
    unsigned seed;

    cout << "Enter the first dice seed: ";
    cin >> seed;
    cout << endl;

    dado dado(seed);

    int pontuacao = dado.rolarDado();
    cout << "First dice roll: " << pontuacao << endl;

    bool acabou;
    if (pontuacao == 7 || pontuacao == 11)
    {
        cout << "Congratulations, you win!";
        acabou = true;
    }
    else if (pontuacao == 2 || pontuacao == 3 || pontuacao == 12)
    {
        cout << "Damn! You lose!";
        acabou = true;
    }

    int c = 2;
    int rolagem;
    while (!acabou)
    {
        cout << "Enter the " << c << " seed: ";
        cin >> seed;
        cout << endl;
        dado.setSeed(seed);
        rolagem = dado.rolarDado();

        cout << "Roll number " << c << ": " << rolagem << endl;
        if (rolagem == pontuacao)
        {
            cout << "Awesome, you win!";
            acabou = true;
        }
        else if (rolagem == 7)
        {
            cout << "You lose!";
            acabou = true;
        }
        else
        {
            cout << "Trying again..." << endl;
        }
        c++;
    }

    return 0;
}
