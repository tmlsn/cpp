/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:13:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:05:56 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	protected:
		FragTrap();

	public:
		FragTrap(std::string name);
		~FragTrap();

		void attack(const std::string &target);
		void highFivesGuys(void);

		FragTrap(const FragTrap &cpy);
		FragTrap &operator=(const FragTrap &obj);
};

#endif

