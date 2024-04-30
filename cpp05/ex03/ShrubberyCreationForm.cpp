/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:32:24 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 17:53:14 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137)
{
	_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignException();
	else if (executor.getGrade() > _xGrade)
		throw GradeTooLowException();
	else
	{
		std::string fileName = _target + "_shrubbery";
		std::ofstream file(fileName.c_str());
		if (file.is_open())
		{
			file << "               ,@@@@@@@,                 " << std::endl;
			file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl;
			file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << std::endl;
			file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl;
			file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl;
			file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    " << std::endl;
			file << "   `&%\\ ` /%&'    |.|        \\ '|8'      " << std::endl;
			file << "       |o|        | |         | |        " << std::endl;
			file << "       |.|        | |         | |        " << std::endl;
			file << "    \\\\/ ._\\\\//_/__/  ,\\\\_//__\\\\/.  \\\\_//__/_ " << std::endl;
			file.close();
		}
		else
			throw FileNotCreateException();
	}
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(cpy), _target(cpy._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	(void)obj;
	return(*this);	
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};