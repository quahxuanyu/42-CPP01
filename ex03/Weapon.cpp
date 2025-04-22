#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "default";
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string &Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}