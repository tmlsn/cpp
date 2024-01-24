/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:00:12 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 19:01:06 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
};

WrongAnimal::WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal string constructor called." << std::endl;
	this->type = type;
};

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = cpy;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal assignement operator called." << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return(*this);
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called." << std::endl;
};

void WrongAnimal::makeSound(void) const
{
		std::cout << "That was a weird wronganimal sound." << std::endl;
};

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}