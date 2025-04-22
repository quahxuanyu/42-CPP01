#include "HumanA.hpp"

//this->weapon variable is a pointer
//&weapon is a reference
//this->weapon is set to the address of the weapon reference
HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}