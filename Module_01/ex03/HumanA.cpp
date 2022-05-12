#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[33mDeleting\033[0m " << this->name << " instance" << std::endl;
	return ;
}
