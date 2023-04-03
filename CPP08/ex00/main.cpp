/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:12:44 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/03 15:57:02 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
    {
        std::array<int, 8> intArray = {1, 2, 3, 4, 5, 6, 7, 8};

        try
        {
            std::cout << "FINDING EXISTING NUMBER IN ARRAY" << std::endl;
            std::cout << *easyfind(intArray, 3) << std::endl << std::endl;
        }
        catch(const char *msg)
        {
            std::cerr << msg << std::endl;
        }
        
        try
        {
            std::cout << "FINDING NON-EXISTING NUMBER IN ARRAY" << std::endl;
            std::cout << *easyfind(intArray, 12) << std::endl << std::endl;
        }
        catch(const char *msg)
        {
            std::cerr << msg << std::endl;
        }
        
    }

    {
        std::array<int, 8> intArray = {1, 2, 3, 4, 5, 6, 7, 8};

        std::cout << "FINDING EXISTING NUMBER IN ARRAY" << std::endl;
        std::cout << *easyfind(intArray, 3) << std::endl << std::endl;

        std::cout << "FINDING NON-EXISTING NUMBER IN ARRAY" << std::endl;
        std::cout << *easyfind(intArray, 12) << std::endl << std::endl;
    }
}