/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:12:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:04:59 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain;
	std::cout << "Cat default constructor called." << std::endl;
};

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat default destructor called." << std::endl;
};

Cat::Cat(const Cat &cpy) : Animal("Cat")
{
	std::cout << "Cat copy constructor called." << std::endl;
	//this->_brain = new Brain;
	*this = cpy;
};

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignement operator called." << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		/* if (this->_brain)
			delete this->_brain; */
		this->_brain = new Brain(*(obj._brain));
	}
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