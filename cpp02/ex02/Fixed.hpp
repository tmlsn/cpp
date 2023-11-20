/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:15:12 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/20 14:12:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int bits = 8;
	
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);

		Fixed(const Fixed &obj);
		Fixed &operator= (const Fixed &obj);

		~Fixed();
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFLoat( void ) const;
		int		toInt( void ) const;

		// COMPARISON OPERATORS
		bool	operator<(const Fixed fixed) const;
		bool	operator>(const Fixed fixed) const;
		bool	operator<=(const Fixed fixed) const;
		bool	operator>=(const Fixed fixed) const;
		bool	operator==(const Fixed fixed) const;
		bool	operator!=(const Fixed fixed) const;

		// MATHEMATICS OPERATORS
		Fixed	operator+(const Fixed fixed) const;
		Fixed	operator-(const Fixed fixed) const;
		Fixed	operator*(const Fixed fixed) const;
		Fixed	operator/(const Fixed fixed) const;

		// INCREMENTATION OPERATORS
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<< (std::ostream &ost, const Fixed &num);

#endif