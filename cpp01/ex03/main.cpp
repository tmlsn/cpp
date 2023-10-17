
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon weapon1 = Weapon("colonialism");
	HumanA david("David", weapon1);
	david.attack();

	HumanB daoud("Daoud");
	// daoud.attack();

	Weapon weapon2 = Weapon("small rocks");
	daoud.setWeapon(weapon2);
	daoud.attack();

	weapon1.setType("big rockets");
	david.attack();

	weapon2.setType("Hamas");
	daoud.attack();

	weapon1.setType("\"Oh my god this is terorism !!!\"");
	david.attack();

	return (0);
}