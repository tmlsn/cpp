/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:26:33 by tmalless          #+#    #+#             */
/*   Updated: 2024/04/30 17:41:12 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
     std::cout << "\n-------------------CEO----------------------------------" << std::endl;
    try
    {
        Bureaucrat bur = Bureaucrat("Sophie Vigier", 1);
	    ShrubberyCreationForm form("42Paris");
	
	    std::cout << &bur;
        std::cout << &form;
        
        bur.signForm(form);
        bur.executeForm(form);
/*         bur.executeForm(form);
        bur.executeForm(form); */

        RobotomyRequestForm dead("tmalless");
        // std::cout << dead;
        
        bur.signForm(dead);
        bur.executeForm(dead);
		bur.executeForm(dead);
		bur.executeForm(dead);
		bur.executeForm(dead);
		bur.executeForm(dead);
		bur.executeForm(dead);
        
        PresidentialPardonForm mercy("tmalless");
        // std::cout << mercy;
        bur.signForm(mercy);
        bur.executeForm(mercy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------------------USELESS INTERN-------------------------" << std::endl;
    try
    {
        Bureaucrat bur = Bureaucrat("Useless Intern", 150);
	    ShrubberyCreationForm form("Home");
	
	    std::cout << &bur;
        std::cout << &form;
        
        bur.signForm(form);
        bur.executeForm(form);
        bur.executeForm(form);
        bur.executeForm(form);

        RobotomyRequestForm dead("tmalless");
        std::cout << &dead;

        bur.signForm(dead);
        bur.executeForm(dead);
        
        PresidentialPardonForm mercy("tmalless");
        std::cout << &mercy;
        bur.signForm(mercy);
        bur.executeForm(mercy);
        
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}