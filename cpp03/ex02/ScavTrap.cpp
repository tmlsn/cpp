/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:55:48 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:20:24 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap - Default constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap - Default destructor called." << std::endl;
};
	
ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy._name)
{
	std::cout << "ScavTrap - Copy constructor called." << std::endl;
	*this = cpy;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap - Copy assignement operator called." << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
};