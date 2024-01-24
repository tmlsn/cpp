/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:40:31 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:58:31 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include "Includes.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
	Character();
	
public:
	Character(std::string name);
	std::string getName(void);
	~Character();
};



#endif
