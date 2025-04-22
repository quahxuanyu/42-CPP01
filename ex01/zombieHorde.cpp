#include "Zombie.hpp"

Zombie*	zomebieHorde( int N, std::string name )
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}