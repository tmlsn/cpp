/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:09:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/05/04 17:51:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#endif

#include "Contact.hpp"

class	PhoneBook
{
	private :
		Contact rep[8];
		int		c_number;
	public :
		PhoneBook();
		void add();
		void search();
		void exit();
		int	check_index(std::string index);
		~PhoneBook();
};