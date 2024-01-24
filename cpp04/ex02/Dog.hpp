/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:42:58 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:53:43 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;

	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound(void) const;
		std::string getType(void) const;
		Brain *getBrain(void) const;
		void compareTo(Dog const & other_dog) const;
};

#endif