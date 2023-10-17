/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:15:11 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/18 00:39:33 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>



class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
		//HumanA();

	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon& weapon);
		~HumanB();
};

#endif