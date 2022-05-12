#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon w("Grosse massue");
	Weapon fancy("Scie sauteuse");
	//Weapon &club = Weapon("Grosse massue");

	HumanA me("Arthur", w);
	HumanB me2("Arthuro");
	me.attack();
	me.weapon.setType("Pied de biche");
	me.attack();
	std::cout << std::endl << std::endl;

	me2.attack();
	me2.setWeapon(fancy);
	me2.attack();
	return 0;
}
