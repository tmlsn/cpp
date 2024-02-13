/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:01:31 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/13 20:12:44 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>

# define MAX_GRADE 0
# define MIN_GRADE 150

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

	const std::string getName();
	int getGrade();

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


#endif