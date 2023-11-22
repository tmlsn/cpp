/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:37:46 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:05:35 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		DiamondTrap();
		
	public:
		using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::_energyPoints;
		using ScavTrap::attack;

		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap(const DiamondTrap &cpy);
		DiamondTrap &operator=(const DiamondTrap &obj);

		void whoAmI();
	};

#endif