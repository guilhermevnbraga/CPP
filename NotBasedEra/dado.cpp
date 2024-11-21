#include <cstdlib>
using std::srand;
using std::rand;

#include "dado.h"

dado::dado(unsigned sed)
{
    seed = sed;
}

void dado::setSeed(unsigned sed)
{
    seed = sed;
}

int dado::getSeed()
{
    return seed;
}

int dado::rolarDado()
{
    srand(seed);
    int rolagem = 2 + rand() % 6 + rand() % 6;
    
    return rolagem;
}
