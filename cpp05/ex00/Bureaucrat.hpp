/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:01:31 by tmalless          #+#    #+#             */
/*   Updated: 2024/01/24 15:13:22 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	Bureaucrat();
	
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	const std::string getName();
	int getGrade();

	void GradeTooHighException();
	void GradeTooLowException();
};

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}


#endif