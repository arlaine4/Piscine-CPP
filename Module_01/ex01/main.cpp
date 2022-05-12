#include "Zombie.hpp"

int main(void)
{
	std::cout << "Horde is coming..." << std::endl;
	Zombie *first = zombieHorde(7, "James");
	for (int i = 0; i < 7; i++)
		first[i].announce();
	delete [] first;
}
