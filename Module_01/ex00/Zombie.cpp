#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
	return ;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << this->name << std::endl;
	return ;
}
