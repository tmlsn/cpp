/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:18:05 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/15 18:13:55 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default_Form"), _isSigned(false), _sGrade(MAX_GRADE), _xGrade(MAX_GRADE) {};

Form::Form(std::string name) : _name(name), _isSigned(false), _sGrade(MAX_GRADE), _xGrade(MAX_GRADE) {};

Form::Form(int grade) : _name("Default_Form"), _isSigned(false) 
{
	try 
	{
		this->setGrade(grade);
	}
	catch (GradeTooLowException &e)
	{
		this->setGrade(MAX_GRADE);
		std::cout << e.what() << " Grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setGrade(MAX_GRADE);
		std::cout << e.what() << " Grade set too default (1)." << std:: endl;
	}
};

Form::Form(std::string name, int grade) : _name(name), _isSigned(false) 
{
	try 
	{
		this->setGrade(grade);
	}
	catch (GradeTooLowException &e)
	{
		this->setGrade(MAX_GRADE);
		std::cout << e.what() << " Grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setGrade(MAX_GRADE);
		std::cout << e.what() << " Grade set too default (1)." << std:: endl;
	}
};

Form::Form(int sGrade, int xGrade) : _name("Default_Name"), _isSigned(false) 
{
	try 
	{
		this->setSGrade(sGrade);
	}
	catch (GradeTooLowException &e)
	{
		this->setSGrade(MAX_GRADE);
		std::cout << e.what() << " Signing grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setSGrade(MAX_GRADE);
		std::cout << e.what() << " Signing grade set too default (1)." << std:: endl;
	}
	try 
	{
		this->setXGrade(xGrade);
	}
	catch (GradeTooLowException &e)
	{
		this->setXGrade(MAX_GRADE);
		std::cout << e.what() << " Exec grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setXGrade(MAX_GRADE);
		std::cout << e.what() << " Exec grade set too default (1)." << std:: endl;
	}
};

Form::Form(std::string name, int sGrade, int xGrade) : _name(name), _isSigned(false) 
{
	try 
	{
		this->setSGrade(sGrade);
	}
	catch (GradeTooLowException &e)
	{
		this->setSGrade(MAX_GRADE);
		std::cout << e.what() << " Signing grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setSGrade(MAX_GRADE);
		std::cout << e.what() << " Signing grade set too default (1)." << std:: endl;
	}
	try 
	{
		this->setXGrade(xGrade);
	}
	catch (GradeTooLowException &e)
	{
		this->setXGrade(MAX_GRADE);
		std::cout << e.what() << " Exec grade set too default (1)." << std:: endl;
	}
	catch (GradeTooHighException &e)
	{
		this->setXGrade(MAX_GRADE);
		std::cout << e.what() << " Exec grade set too default (1)." << std:: endl;
	}
};

Form::Form(const Form &cpy) : _name(cpy.getName())
{
	*this = cpy;
};

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->_sGrade = obj.getSGrade();
		this->_xGrade = obj.getXGrade();
	}
	return (*this);
}

Form::~Form() {};

void Form::setGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->_sGrade = grade;
		this->_xGrade = grade;
	}
}

void Form::setSGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	else
		this->_sGrade = grade;
}

void Form::setXGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	else
		this->_xGrade = grade;
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGrade(std::string type) const
{
	if (type == "SIGN")
		return (this->_sGrade);
	else if (type == "EXEC")
		return (this->_xGrade);
	else
	{
		std::cout << type << " is invalid. Please enter a valid entry, SIGN or EXEC :" << std::endl;
		std::cin >> type;
		return (this->getGrade(type));

	}
}

int Form::getSGrade() const
{
	return (this->_sGrade);
}

int Form::getXGrade() const
{
	return (this->_xGrade);
}

bool Form::getStatus() const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (this->getSGrade() >= (int)bur.getGrade())
		std::cout << bur.getName() << " signed " << this->getName() << "." << std::endl;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() 
{
	return ("Grade too low.");
};

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
};

std::ostream &operator<<(std::ostream &os, Form *form)
{
	if (form->getStatus() == true)
		os << form->getName() << " has been signed by a grade " << form->getSGrade()\
		<< " or less and it need a grade " << form->getXGrade()\
		<< " or less to be executed." << std::endl;
	else
		os << form->getName() << " hasn't been signed yet. It need a grade "\
		<< form->getSGrade() << " or less and it need a grade "\
		<< form->getXGrade() << " or less to be executed." << std::endl;
  return (os);
}