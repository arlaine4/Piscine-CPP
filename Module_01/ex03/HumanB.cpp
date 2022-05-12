#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	this->name = name;
	return ;
}

void HumanB::attack(void)
{
	if (this->weapon.type.compare("") != 0)
		std::cout << this->name << " attack with his " << this->weapon.type << std::endl;
	else
		std::cout << this->name << " attack with his bare hands (no weapon)" << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[33mDeleting\033[0m " << this->name << " instance" << std::endl;
	return ;
}
