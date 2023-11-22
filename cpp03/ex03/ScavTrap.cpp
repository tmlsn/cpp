/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:55:48 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:20:45 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "FragTrap - Default constructor called." << std::endl;
	this->_name = "Default_Scav";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
};

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

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap - " << this->_name << " attacks " << target 
		<< ", causing" << this->_attackDamage 
		<< " points of damage !" << std::endl;
	}
	else if (this->_hitPoints > 0)
		std::cout << this->_name << " ran out of LIFE and can't attack anymore" 
		<< std::endl;
	else
		std::cout << this->_name << " ran out of energy and can't attack anymore" 
		<< std::endl;
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
};