/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:15:12 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/18 17:42:15 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <stdlib.h>

class Fixed
{
	private:
		int	val;
		static const int bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const &obj);
		~Fixed();
		int getRawBits( void );
		void setRawBits( int const raw );
};

#endif