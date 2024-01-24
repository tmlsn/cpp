/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:33:51 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 14:44:09 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include "Includes.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &obj);

		void use(const ICharacter &target) const;
		Cure &clone(void);
};

#endif