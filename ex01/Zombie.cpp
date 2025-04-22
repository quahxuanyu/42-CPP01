#include <iostream>
#include "Zombie.hpp"

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

void Zombie::setName(std::string newName)
{
	this->name = newName;
}

void Zombie::annouce(void)
{
    std::cout << "<" << name << ">:  BraiiiiiiinnnzzzZ..." << std::endl;
}