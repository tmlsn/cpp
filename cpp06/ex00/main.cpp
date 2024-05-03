/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:33:20 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/02 18:34:41 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	for (int i = 0; i < ac; i++)
	{
		ScalarConverter::convert(av[i]);
		std::cout << std::endl;
	}
	return (0);
}