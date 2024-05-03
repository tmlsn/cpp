/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:32:18 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 17:53:25 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5)
{
	_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignException();
	else if (executor.getGrade() > _xGrade)
		throw GradeTooLowException();
	else 
		std::cout << "Informs that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(cpy), _target(cpy._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	(void)obj;
	return(*this);	
}

PresidentialPardonForm::~PresidentialPardonForm() {};