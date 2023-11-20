/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:34:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/20 14:14:10 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
	//std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called." << std::endl;
}

/* Fixed::Fixed(const Fixed &obj) : _value(obj._value) 
{
	std::cout << "Copy constructor called.";
} */

Fixed::Fixed(const int val) 
{
	//std::cout << "Int constructor called." << std::endl;
	this->_value = val << this->bits;
}

Fixed::Fixed(const float val) 
{
	//std::cout << "Float constructor called." << std::endl;
	this->_value = roundf(val * (1 << this->bits));
}

Fixed::Fixed(const Fixed &obj)
{
	//std::cout << "Copy constructor called." << std::endl;
	*this = obj;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignement operator called." << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called." << std::endl;
	this->_value = raw;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called." << std::endl;
	return (this->_value);
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->bits);
}

float	Fixed::toFLoat( void ) const
{
	return ((float)this->_value / (float)(1 << this->bits));
}

std::ostream	&operator<< (std::ostream &ost, const Fixed &num)
{
	ost << num.toFLoat();
	return (ost);
}

// COMPARISON OPERATORS
bool	Fixed::operator<(const Fixed fixed) const
{
	if (this->getRawBits() < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>(const Fixed fixed) const
{
	if (this->getRawBits() > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed fixed) const
{
	if (this->getRawBits() <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed fixed) const
{
	if (this->getRawBits() >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed fixed) const
{
	if (this->getRawBits() == fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed fixed) const
{
	if (this->getRawBits() != fixed.getRawBits())
		return (true);
	else
		return (false);
}


// MATHEMATICS OPERATORS
Fixed	Fixed::operator+(const Fixed fixed) const
{
	return (Fixed(this->toFLoat() + fixed.toFLoat()));
}

Fixed	Fixed::operator-(const Fixed fixed) const
{
	return (Fixed(this->toFLoat() - fixed.toFLoat()));
}

Fixed	Fixed::operator*(const Fixed fixed) const
{
	return (Fixed(this->toFLoat() * fixed.toFLoat()));
}

Fixed	Fixed::operator/(const Fixed fixed) const
{
	if (fixed.toFLoat() == 0)
	{
		std::cout << "Non non non !" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFLoat() / fixed.toFLoat()));
}


// INCREMENTATION OPERATORS
Fixed&	Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed fixed;
	fixed = *this;
	++*this;
	return (fixed);
}

Fixed&	Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed fixed;
	fixed = *this;
	--*this;
	return (fixed);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
