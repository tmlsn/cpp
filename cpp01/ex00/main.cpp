/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:40 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/17 17:33:20 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie stackZombie("Stack Zombie");
	Zombie *heapZombie = newZombie("Heap Zombie");

	randomChump("random Zomb");
	delete heapZombie;
	return (1);
}