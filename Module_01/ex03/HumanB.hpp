#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:
		std::string name;
		Weapon weapon;

		HumanB(const std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon weapon);
};

#endif
