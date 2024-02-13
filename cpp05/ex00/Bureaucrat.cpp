/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:12:20 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/13 20:12:31 by tmalless         ###   ########.fr       */
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
		std::cout << e.what() << ", grade set to default (150).";
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << ", grade set to default (150).";
	}
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << ", grade set to default (150).";
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(MIN_GRADE);
		std::cout << e.what() << ", grade set to default (150).";
	}
}

Bureaucrat::~Bureaucrat() {};



void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

const std::string Bureaucrat::getName()
{
	return (this->_name);
};

int Bureaucrat::getGrade()
{
	return (this->_grade);
};