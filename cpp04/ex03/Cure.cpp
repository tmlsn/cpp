/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:44:15 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:40:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"



Cure::Cure() : AMateria("cure")
{

};

Cure::Cure(const Cure &cpy) : AMateria(this->_type)
{
	*this = cpy;
};

Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);

};

Cure::~Cure()
{
};

Cure *Cure::clone() const
{
	Cure *ret = new Cure(*this);
	return (ret);
}

void Cure::use(const ICharacter &target) const
{
	std::cout << "Cure : \"* heals " << target.getName() << "’s wounds *\"" << std::endl;
};