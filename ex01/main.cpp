#include "Zombie.hpp"

int main(void)
{
	int N = 5;
    Zombie *horde = zomebieHorde(N, "Arnold Schwarzenegger");
	
	for (int i = 0; i < N; i++)
	{
		horde[i].annouce();
		//std::cout << "Zombie " << i + 1 << " is alive!" << std::endl;
	}
    delete[] horde;
	return (0);
}