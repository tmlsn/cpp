/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:33:01 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:31:43 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include "Includes.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice &cpy);
		Ice &operator=(const Ice &obj);

		void use(const ICharacter &target) const;
		Ice *clone(void) const;
};


#endif