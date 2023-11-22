/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:37:29 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 15:21:33 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name")
{
	std::cout << "DiamondTrap - String constructor called." << std::endl;
	this->_name = name;
};

DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap - Default destructor called." << std::endl;};

void DiamondTrap::whoAmI()
{
	std::cout << "My Diamond Name is : " << this->_name << std::endl;
	std::cout << "My ClapTrap Name is : " << ClapTrap::_name << std::endl;
	std::cout << "My FraTrap Name is : " << FragTrap::_name << std::endl;
	std::cout << "My ScavTrap Name is : " << ScavTrap::_name << std::endl;
};