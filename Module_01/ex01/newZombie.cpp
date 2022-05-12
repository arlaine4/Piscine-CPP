#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie tmp_z(name);
	return ;
}

Zombie *Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}
