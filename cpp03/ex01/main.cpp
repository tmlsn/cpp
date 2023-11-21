#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap toto;
	ClapTrap jojo;
	ClapTrap clap = ClapTrap("Clap");
	ClapTrap bae = ClapTrap("Bae");
	toto = bae;
	jojo = ClapTrap(clap);
	clap.beRepaired(5);
	clap.takeDamage(2147483659);
	clap.takeDamage(5);
	clap.beRepaired(5);	
}