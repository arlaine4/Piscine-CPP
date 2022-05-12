#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon w("Grosse massue");
	//Weapon &club = Weapon("Grosse massue");

	HumanA me("Arthur", w);
	me.attack();
	me.weapon.setType("Pied de biche");
	me.attack();
	return 0;
}
