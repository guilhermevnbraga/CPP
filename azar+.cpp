#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    srand(time(0));
    int pontuacao = 2 + rand() % 6 + rand() % 6;
    cout << "First dice roll: " << pontuacao << endl << endl;

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
        rolagem = 2 + rand() % 6 + rand() % 6;

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
            cout << "Trying again..." << endl << endl;
        }

        c++;
    }

    return 0;
}
