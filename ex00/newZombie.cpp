#include <iostream>
#include "Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie *zombie;

    zombie = new Zombie(name);
    return zombie;
}