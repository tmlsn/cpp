/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:50:59 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/17 21:36:32 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


#include <iostream>
#include <stdlib.h>

class Zombie
{
	private :
		std::string name;

	public :
		Zombie();
		Zombie(std::string);
		void announce(void);
		void setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif