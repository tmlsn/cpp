/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:42:56 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:12:25 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP

# define BRAIN_CPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string _ideas[100];
		
	public:
		Brain();
		~Brain();

		Brain(const Brain &cpy);
		Brain &operator=(const Brain &obj);

		std::string getIdeas(int index);
		void setIdeas(std::string idea);
};

#endif
