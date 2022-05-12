#include "Zombie.hpp"


int main(void)
{
	Zombie james("James");
	Zombie john("John");
	Zombie *steven;
	steven = james.newZombie("James little brother");
	randomChump("Eden");
	// delete steven;
}
