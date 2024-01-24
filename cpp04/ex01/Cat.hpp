/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:09:04 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 10:10:03 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(const Cat &cpy);
		Cat &operator=(const Cat &obj);
		~Cat();

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif