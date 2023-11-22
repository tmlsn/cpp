/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:52:54 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 19:07:37 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:

	protected:
		std::string type;
		Animal(std::string type);
		/* data */
	public:
		Animal();
		Animal(const Animal &cpy);
		Animal &operator=(const Animal &obj);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif