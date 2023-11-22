/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:01:21 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 19:03:45 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called." << std::endl;
};

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = cpy;
};

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignement operator called." << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return(*this);
};

void WrongCat::makeSound(void) const
{
	std::cout << "Uoaim Uoaim" << std::endl;
};

std::string WrongCat::getType(void) const
{
	return (this->type);
}