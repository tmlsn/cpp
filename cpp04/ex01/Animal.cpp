/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:52:48 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:24:06 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
};

Animal::Animal::Animal(std::string type)
{
	std::cout << "Animal string constructor called." << std::endl;
	this->type = type;
};

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = cpy;
};

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal assignement operator called." << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return(*this);
};

Animal::~Animal()
{
	std::cout << "Animal default destructor called." << std::endl;
};

void Animal::makeSound(void) const
{
	/* if (this->type == "Cat")
		std::cout << "Miaou Miaou" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Ouaf Ouaf" << std::endl;
	else */
		std::cout << "That was a weird animal sound." << std::endl;
};

std::string Animal::getType(void) const
{
	return (this->type);
}