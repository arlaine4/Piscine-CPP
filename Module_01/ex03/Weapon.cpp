#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
	return ;
}

const std::string	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "\033[33mDeleting\033[0m " << this->type << " instance" << std::endl;
	return ;
}
