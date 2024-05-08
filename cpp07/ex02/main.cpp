/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:32:35 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 13:18:21 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
    }

    //Test max value Array vs int[]
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << "Numbers:"<< numbers[i] << std::endl;
    //     std::cout << "Mirror:"<< mirror[i] << std::endl;
    // }

    std::cout << "\nTest Copie Profonde ===================================== \n" << std::endl;
    //SCOPE TEST COPIE PROFONDE
    {
        std::cout << "Testons d'abord la surcharge de l'operateur =" << std::endl;
        Array<int> toCopy(10);
        for (unsigned int i = 0; i < toCopy.size(); i++)
        {
            toCopy[i] = i;
        }
        Array<int> copy = toCopy;
        std::cout << "Maintenant, affichons les deux Arrays" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++)
        {
            std::cout << "toCopy[" << i << "]: " << toCopy[i] << std::endl;
            std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
        }
        std::cout << "Modifions copy : cela ne devrait pas modifier toCopy!" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++)
        {
            copy[i] = 10 - i;
        }
        std::cout << "copy modifie, affichons les deux Array a nouveau" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++)
        {
            std::cout << "toCopy[" << i << "]: " << toCopy[i] << std::endl;
            std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
        }

        std::cout << "Maintenant, testons la copie par constructeur" << std::endl;
        Array<int> copy2(copy);
        for (unsigned int i = 0; i < copy.size(); i++)
        {
            std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "copy2[" << i << "]: " << copy2[i] << std::endl;
        }
        std::cout << "Modifions copy2 : cela ne devrait pas modifier copy!" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++)
        {
            copy2[i] = i;
        }
        std::cout << "copy2 modifie, affichons les deux Array a nouveau" << std::endl;
        for (unsigned int i = 0; i < copy.size(); i++)
        {
            std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "copy2[" << i << "]: " << copy2[i] << std::endl;
        }
    }


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    
    std::cout << "Quelques tests de l'index out of bound" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	 try
    {
        std::cout << numbers[2] << std::endl;
        std::cout << numbers[10] << std::endl;
        std::cout << numbers[10234] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;//
    return 0;
}