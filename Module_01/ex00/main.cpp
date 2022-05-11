#include "Zombie.hpp"

int main(void)
{
	Zombie z("zombie test");
	Zombie z2("zombie test 2");
	Zombie *new_z;
	new_z = z.newZombie("nouveau zombie tu connais");
}
