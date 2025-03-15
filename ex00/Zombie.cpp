#include <iostream>
#include "Zombie.h"

Zombie::Zombie()
{
    this->name = "";
}

Zombie::~Zombie()
{
    std::cout << "Zombie \"" << name << "\" has been destroyed." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::annouce(void)
{
    std::cout << "<" << name << ">:  BraiiiiiiinnnzzzZ..." << std::endl;
}