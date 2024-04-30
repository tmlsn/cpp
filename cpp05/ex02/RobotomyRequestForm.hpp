/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:28:00 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/26 19:00:19 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm();
	std::string _target;
	
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
};