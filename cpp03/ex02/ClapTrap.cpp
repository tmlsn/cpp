/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:30:58 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 14:17:46 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap - Default constructor called." << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap - String constructor called." << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap - Default destructor called." << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &cpy) /* : _name(cpy._name) */
{
	std::cout << "ClapTrap - Copy constructor called." << std::endl;
	*this = cpy;
};

ClapTrap & ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap - Copy assignement operator called." << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
};

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target 
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints > 0)
		{
			std::cout << this->_name << " take " << amount 
			<< " point(s) of damage. Bringing its health to " 
			<< this->_hitPoints << " hit point(s)." << std::endl;
		}
		else 
		{
			std::cout << this->_name << " take " << amount 
			<< " point(s) of damage. And died because of this vicious attack !" << std::endl;
		}
	}
	else
	{
		std::cout << this->_name << " is arlready dead, stop harrassing its dead body please..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints +=	amount;
		std::cout << this->_name << " has been repaired and gained "
		<< amount << " hit point(s) bringing its total to "
		<< this->_hitPoints << " hit point(s)." << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is already dead, there's no hope for it, you can't do anything against that, you have to accept it..."
		<< std::endl;
	}
	else
	{
		std::cout << this->_name << " has no more energy, all he can do is lay down and cry."
		<< std::endl;
	}
}