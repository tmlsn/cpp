/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:40 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/17 21:41:51 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;

	std::cout << "Name your Stack Zombie:" << std::endl;
	std::cin >> name;
	Zombie stackZombie(name);
	stackZombie.announce();
	//stackZombie.~Zombie();

	std::cout << "Name your Heap Zombie:" << std::endl;
	std::cin >> name;
	Zombie *heapZombie = newZombie(name);
	heapZombie->announce();
	delete heapZombie;

	randomChump("random Zomb");
	return (1);
}