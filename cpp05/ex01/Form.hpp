/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:18:08 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/15 18:17:45 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	int					_sGrade;
	int					_xGrade;

public:
	Form();
	Form(std::string name);
	Form(int grade);
	Form(std::string name, int grade);
	Form(int sGrade, int xGrade);
	Form(std::string name, int sGrade, int xGrade);

	Form(const Form &cpy);
	Form &operator=(const Form &obj);

	~Form();

	std::string	getName() const;
	int			getGrade(std::string type) const;
	int			getSGrade() const;
	int			getXGrade() const;
	bool		getStatus() const;

	void		setGrade(int grade);
	void		setSGrade(int sGrade);
	void		setXGrade(int sGrade);

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

};

std::ostream &operator<<(std::ostream &os, Form *form);

#endif