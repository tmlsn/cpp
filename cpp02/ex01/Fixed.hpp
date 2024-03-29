/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:15:12 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/20 10:22:05 by tmalless         ###   ########.fr       */
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
};

std::ostream	&operator<< (std::ostream &ost, const Fixed &num);

#endif