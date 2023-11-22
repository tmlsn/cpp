/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:31:00 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 13:31:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	{
		ClapTrap cl = ClapTrap("Bae");
		cl.beRepaired(5);
		cl.takeDamage(5);
		cl.beRepaired(5);
		cl.takeDamage(15);
		cl.beRepaired(10);
	}
	std::cout << std::endl;
	{
		ScavTrap sl = ScavTrap("Quoicoubae");
		sl.beRepaired(5);
		sl.guardGate();
		sl.takeDamage(50);
	}

	std::cout << std::endl;
	{
		ScavTrap qw = ScavTrap("Quoicoubebou");
		FragTrap sl = FragTrap("Quoicoubae");
		sl.beRepaired(5);
		sl.highFivesGuys();
		sl.takeDamage(50);
		sl.attack("Quoicoubebou");
		qw.takeDamage(30);
	}
}