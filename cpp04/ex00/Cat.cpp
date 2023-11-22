/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:12:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 18:55:53 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat default destructor called." << std::endl;
};

Cat::Cat(const Cat &cpy) : Animal("Cat")
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = cpy;
};

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignement operator called." << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return(*this);
};

void Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
};

std::string Cat::getType(void) const
{
	return (this->type);
}