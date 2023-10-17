/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:25:43 by tmalless          #+#    #+#             */
/*   Updated: 2023/10/18 00:48:09 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>



class HumanA
{
	private:
		std::string name;
		Weapon* weapon;
		HumanA();

	public:
		HumanA(std::string name, Weapon& weapon);
		void attack(void);
		~HumanA();
};

#endif