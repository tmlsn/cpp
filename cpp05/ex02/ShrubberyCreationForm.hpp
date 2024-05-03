/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:28:00 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 17:46:41 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm();
	std::string _target;
	
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;
};



