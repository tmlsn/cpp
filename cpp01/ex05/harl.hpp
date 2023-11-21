/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:42:22 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/17 14:48:55 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

# include <iostream>

class Harl
{
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		Harl();
		void complain(std::string level);
		~Harl();
};

#endif