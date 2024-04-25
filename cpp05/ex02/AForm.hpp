/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:13:39 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/20 11:02:24 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	int					_sGrade;
	int					_xGrade;

public:
	AForm();
	AForm(std::string name);
	AForm(int grade);
	AForm(std::string name, int grade);
	AForm(int sGrade, int xGrade);
	AForm(std::string name, int sGrade, int xGrade);

	AForm(const AForm &cpy);
	AForm &operator=(const AForm &obj);

	~AForm();

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

std::ostream &operator<<(std::ostream &os, AForm *form);

#endif