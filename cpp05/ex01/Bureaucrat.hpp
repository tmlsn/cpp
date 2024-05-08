/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:01:31 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/07 15:48:06 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

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

	void	signForm(Form &form);

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
};

std::ostream &operator<<(std::ostream &os, Bureaucrat *bur);

#endif