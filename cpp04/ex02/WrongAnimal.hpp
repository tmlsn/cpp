/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:59:12 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/22 19:09:49 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string type;
		WrongAnimal(std::string type);
		/* data */
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal &operator=(const WrongAnimal &obj);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif