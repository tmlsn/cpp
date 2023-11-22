/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:42:26 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 18:56:33 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
};

Dog::Dog(const Dog &cpy) : Animal("Dog")
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = cpy;
};

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignement operator called." << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return(*this);
};

void Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
};

std::string Dog::getType(void) const
{
	return (this->type);
}

