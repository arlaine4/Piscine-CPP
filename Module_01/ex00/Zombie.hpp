#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

void randomChump(std::string name);

class Zombie
{
	public:
		std::string name;

		Zombie(std::string name);
		~Zombie(void);

		Zombie *newZombie(std::string name);
		void	announce(void);
};

#endif
