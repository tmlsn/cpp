/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:34:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/18 17:58:18 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():val(0) {}

// Fixed::Fixed(const Fixed &obj) : val(obj.val) {}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed & Fixed::operator=(Fixed const &obj)
{
	
}