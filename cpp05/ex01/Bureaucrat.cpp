/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:12:20 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/15 17:43:07 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John Doe"), _grade(MIN_GRADE) {};

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(MIN_GRADE) {};

Bureaucrat::Bureaucrat(int grade) : _name("John Doe")
{
	try
	{
		this->setGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << " Grade set to default (150)." << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << " Grade set to default (150)." << std::endl;
	}
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << " Grade set to default (150)." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << " Grade set to default (150)." << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy.getName())
{
	*this = cpy;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		//this->_name = obj._name;
		this->_grade = obj.getGrade();
	}
	return (*this);
};

Bureaucrat::~Bureaucrat() {};

void Bureaucrat::decrementGrade()
{
	try
	{
		this->setGrade(this->getGrade() + 1);
	}
	catch ( Bureaucrat::GradeTooLowException &e)
	{
		std::cout << this->getName() << " has already the lowest grade." << std::endl;
	}
}

void Bureaucrat::incrementGrade()
{
	try
	{
		this->setGrade(this->getGrade() - 1);
	}
	catch ( Bureaucrat::GradeTooHighException &e)
	{
		std::cout << this->getName() << " has already the highest grade." << std::endl;
	}
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
};

int Bureaucrat::getGrade() const
{
	return (this->_grade);
};

void Bureaucrat::signForm(Form &form)
{
	if (form.getStatus() == true)
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because this form has already been signed." << std::endl;
	else if (form.getSGrade() < this->getGrade())
		std::cout << this->getName() << " couldn't sign " << form.getName() << "because this bureaucrat's grade is too low to sign this form." << std::endl;
	else
		std::cout << this->getName() << " signed " << form.getName() << '.' << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat *bur)
{
	os << bur->getName() << ", bureaucrat grade " << bur->getGrade() << "." << std::endl;
	return (os);
}