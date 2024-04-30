/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:55:57 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 19:07:55 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef AForm *(*func)(std::string target);
	std::string _formNames[3] /* = {"presidential pardon", "robotomy request", "shrubbery creation"} */;
	func _funcArray[3] /* = {&makePresidentialPardonForm, &makeRobotomyRequestForm, &makeShrubberyCreationForm} */;
public:
	Intern();
	Intern(const Intern &cpy);
	Intern &operator=(const Intern &obj);
	~Intern();
	AForm *makeForm(std::string formName, std::string target);
};

AForm *makePresidentialPardonForm(std::string target);
AForm *makeRobotomyRequestForm(std::string target);
AForm *makeShrubberyCreationForm(std::string target);
