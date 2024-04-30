/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:13:36 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 16:00:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

/* AForm::AForm() : _name("Default_Form"), _isSigned(false), _sGrade(MAX_GRADE), _xGrade(MAX_GRADE) {};

AForm::AForm(std::string name) : _name(name), _isSigned(false), _sGrade(MAX_GRADE), _xGrade(MAX_GRADE) {};

AForm::AForm(int grade) : _name("Default_Form"), _isSigned(false) 
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

AForm::AForm(std::string name, int grade) : _name(name), _isSigned(false) 
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

AForm::AForm(int sGrade, int xGrade) : _name("Default_Name"), _isSigned(false) 
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
}; */

AForm::AForm(std::string name, int sGrade, int xGrade) : _name(name), _isSigned(false) 
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

AForm::AForm(const AForm &cpy) : _name(cpy.getName())
{
	*this = cpy;
};

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		this->_sGrade = obj.getSGrade();
		this->_xGrade = obj.getXGrade();
	}
	return (*this);
}

AForm::~AForm() {};

/* void AForm::setGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	else
	{
		this->_sGrade = grade;
		this->_xGrade = grade;
	}
} */

void AForm::setSGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	else
		this->_sGrade = grade;
}

void AForm::setXGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	else
		this->_xGrade = grade;
}

std::string AForm::getName() const
{
	return (this->_name);
}

int AForm::getGrade(std::string type) const
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

int AForm::getSGrade() const
{
	return (this->_sGrade);
}

int AForm::getXGrade() const
{
	return (this->_xGrade);
}

bool AForm::getStatus() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat &bur)
{
	if (this->getSGrade() >= (int)bur.getGrade())
	{
		_isSigned = true;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw() 
{
	return ("Grade too low.");
};

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
};

const char *AForm::FormNotSignException::what() const throw()
{
	return ("The form isn't sign.");
};

const char *AForm::FileNotCreateException::what() const throw()
{
	return ("The file hasn't been created.");
};

std::ostream &operator<<(std::ostream &os, AForm *form)
{
	if (form->getStatus() == true)
		os << form->getName() << " has been signed by a grade " << form->getSGrade()\
		<< " or less and it need a grade " << form->getXGrade()\
		<< " or less to be executed." << std::endl;
	else
		os << form->getName() << " hasn't been signed yet. It need a grade "\
		<< form->getSGrade() << " or less to be signed and it need a grade "\
		<< form->getXGrade() << " or less to be executed." << std::endl;
  return (os);
}