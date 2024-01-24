/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:38:45 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:39:20 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Ice::Ice() : AMateria("Ice")
{

};

Ice::Ice(const Ice &cpy) : AMateria(this->_type)
{
	*this = cpy;
};

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);

};

Ice::~Ice()
{
};

Ice *Ice::clone() const
{
	Ice *ret = new Ice(*this);
	return (ret);
}

void Ice::use(const ICharacter &target) const
{
	std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
};