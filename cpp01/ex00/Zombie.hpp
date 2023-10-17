/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:50:59 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/03 16:50:45 by tmalless         ###   ########.fr       */
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
		Zombie(std::string);
		void announce(void);
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif