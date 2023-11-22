/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:42:58 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 18:55:10 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif