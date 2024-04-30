/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:28:00 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 18:50:16 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm();
	std::string _target;
	
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};