/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:48:42 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:06:19 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H

# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	protected:
		ScavTrap();
		
	public:
		ScavTrap(const std::string);
		~ScavTrap();
		
		void attack(const std::string &target);
		void guardGate();

		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &obj);
};

#endif