/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:01:24 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/07 19:06:24 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int tab[5] = {0, 5, 7, 3, 46};
	
	::iter(tab, 5, ::print);

	std::string array[4] = {"blabla", "popopopo", "hihi", "enfin"};

	::iter(array, 4, ::print);

	return (0);
}