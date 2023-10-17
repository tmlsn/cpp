/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:40 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/17 21:36:18 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "Bob");

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}

	delete [] horde;
	
	return (1);
}