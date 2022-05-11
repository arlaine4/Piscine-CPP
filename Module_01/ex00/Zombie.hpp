#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		std::string name;

		Zombie(std::string name);
		~Zombie(void);

		Zombie *newZombie(std::string name);
		void	announce(void);
		//void	randomChump(std::string name);
};

#endif
