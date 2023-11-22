/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:37:29 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:21:54 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name")
{
	std::cout << "DiamondTrap - String constructor called." << std::endl;
	this->_name = name;
};

DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap - Default destructor called." << std::endl;};

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy._name + "_clap_name"), ScavTrap(cpy._name + "_scav_name"), FragTrap(cpy._name + "_frag_name")
{
	std::cout << "DiamondTrap - Copy constructor called." << std::endl;
	*this = cpy;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap - Copy assignement operator called." << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
};

void DiamondTrap::whoAmI()
{
	std::cout << "My Diamond Name is : " << this->_name << std::endl;
	std::cout << "My ClapTrap Name is : " << ClapTrap::_name << std::endl;
	std::cout << "My FraTrap Name is : " << FragTrap::_name << std::endl;
	std::cout << "My ScavTrap Name is : " << ScavTrap::_name << std::endl;
};