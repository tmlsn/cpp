/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:42:26 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:53:31 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain;
	std::cout << "Dog default constructor called." << std::endl;
};

Dog::~Dog()
{
	delete this->_brain;
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
	{
		this->type = obj.type;
		this->_brain = new Brain(*(obj._brain));
	}
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

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << &this->_brain << std::endl;
	std::cout << "Other's heap address: " << &other_dog._brain << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas(i)) << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas(i)) << std::endl;
	std::cout << std::endl;
}
