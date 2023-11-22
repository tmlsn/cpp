/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:13:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 17:04:46 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string name);
	~FragTrap();

	FragTrap(const FragTrap &cpy);
	FragTrap &operator=(const FragTrap &obj);

	void highFivesGuys(void);
};

#endif

