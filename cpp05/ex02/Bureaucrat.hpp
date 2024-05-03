/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:01:31 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 15:51:13 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>
# include "AForm.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	void				setGrade(int grade);
	
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(int grade);
	Bureaucrat(std::string name, int grade);

	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(const Bureaucrat &obj);

	~Bureaucrat();

	const std::string getName() const;
	int getGrade() const;

	void	incrementGrade();
	void	decrementGrade();

	void	signForm(AForm &form);
	void	executeForm(AForm &form);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();

	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	class AlreadySignFormException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat *bur);

#endif