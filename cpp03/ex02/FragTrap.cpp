/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:13:34 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:20:20 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << "FragTrap - String constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap - Default destructor called." << std::endl;
};

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy._name)
{
	std::cout << "FragTrap - Copy constructor called." << std::endl;
	*this = cpy;
};

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap - Copy assignement operator called." << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
};

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : * High five *" << std::endl;
};