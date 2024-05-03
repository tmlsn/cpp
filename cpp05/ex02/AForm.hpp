/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:13:39 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 15:24:00 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	const std::string	_name;
	bool				_isSigned;
	int					_sGrade;
	int					_xGrade;
	AForm();
	//void		setGrade(int grade);
	void		setSGrade(int sGrade);
	void		setXGrade(int sGrade);

public:
	/* AForm(std::string name);
	AForm(int grade);
	AForm(std::string name, int grade);
	AForm(int sGrade, int xGrade); */
	AForm(std::string name, int sGrade, int xGrade);

	AForm(const AForm &cpy);
	AForm &operator=(const AForm &obj);

	virtual ~AForm();

	std::string	getName() const;
	int			getGrade(std::string type) const;
	int			getSGrade() const;
	int			getXGrade() const;
	bool		getStatus() const;


	void		beSigned(Bureaucrat &bur);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class FormNotSignException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class FileNotCreateException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm *form);

#endif