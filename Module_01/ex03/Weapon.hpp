#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		std::string type;

		Weapon(const std::string type="");
		~Weapon(void);

		void				setType(std::string type);
		const std::string	getType(void);
};

#endif

