/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:19:48 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/18 00:02:47 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void)
{
	return (this->type);
}

Weapon::~Weapon()
{
	
}

