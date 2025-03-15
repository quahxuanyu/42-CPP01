#include "Zombie.h"

int main(void)
{
    Zombie *zomb;

    randomChump("John");
    zomb = newZombie("Samual");

    zomb->annouce();
    delete zomb;
}