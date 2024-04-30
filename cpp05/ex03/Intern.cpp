/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:14:17 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 19:09:52 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {
	_formNames[0] = "presidential pardon";
	_funcArray[0] = &makePresidentialPardonForm;
	_formNames[1] = "robotomy request";
	_funcArray[1] = &makeRobotomyRequestForm;
	_formNames[2] = "shrubbery creation";
	_funcArray[2] = &makeShrubberyCreationForm;
};

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
};

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
};

AForm *Intern::makeForm(std::string formName, std::string target)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (_formNames[i] == formName)
		{
			std::cout << " Intern create " << formName << "." << std::endl;
			return (_funcArray[i](target));
		}
	}
	std::cout << "Intern can't create " << formName << " form." << std::endl;
	return (NULL); 
}

Intern::~Intern() {};

AForm *makePresidentialPardonForm(std::string target)
{
	return(new PresidentialPardonForm(target));
}

AForm *makeRobotomyRequestForm(std::string target)
{
	return(new RobotomyRequestForm(target));
}

AForm *makeShrubberyCreationForm(std::string target)
{
	return(new ShrubberyCreationForm(target));
}
