/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:32:21 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 19:00:15 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45)
{
	_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignException();
	else if (executor.getGrade() > _xGrade)
		throw GradeTooLowException();
	else
	{
		srand(time(NULL));
		int n = rand() % 10;
		std::cout << "Makes some drilling noises..." << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "." << std::endl;
		}
		if (n % 2)
			std::cout << _target << " has been robotomized successfully." << std::endl; 
		else
			std::cout << "The robotomy failed..." << std::endl;
	}
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm(cpy), _target(cpy._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	(void)obj;
	return(*this);	
}

RobotomyRequestForm::~RobotomyRequestForm() {};