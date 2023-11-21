
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon weapon1 = Weapon("glock");
	HumanA Tim("Tim", weapon1);
	Tim.attack();

	HumanB Tom("Tom");
	Tom.attack();

	Weapon weapon2 = Weapon("small rocks");
	Tom.setWeapon(weapon2);
	Tom.attack();

	weapon1.setType("big rockets");
	Tim.attack();

	weapon2.setType("M16");
	Tom.attack();

	weapon1.setType("knife");
	Tim.attack();

	return (0);
}