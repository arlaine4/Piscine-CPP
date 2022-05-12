#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"


//class Weapon;

class HumanA
{
	public:
		Weapon 		weapon;
		std::string name;

		HumanA(const std::string, Weapon weapon);
		~HumanA(void);

		void	attack(void);
};

#endif
