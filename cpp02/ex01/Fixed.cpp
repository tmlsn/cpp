/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:34:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/19 19:12:57 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
	std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

/* Fixed::Fixed(const Fixed &obj) : _value(obj._value) 
{
	std::cout << "Copy constructor called.";
} */

Fixed::Fixed(const int val) 
{
	std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = obj;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignement operator called." << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_value = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_value);
}