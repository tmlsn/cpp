/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:54:14 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/20 13:08:44 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

Fixed a;

Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//Fixed c(b * a);

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;

std::cout << Fixed(Fixed(a * b) / b) * Fixed(Fixed(b) / a - Fixed(b)) << std::endl;
std::cout << a << std::endl;
std::cout << b<<std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}
