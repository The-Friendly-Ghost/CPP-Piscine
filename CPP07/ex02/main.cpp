/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 16:31:43 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/29 17:34:10 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int main(void)
{
    {
    std::cout << "CREATING INT ARRAY" << std::endl;
        try
        {
            Array<int>  intArr(20);

            for (int i = 0; i < 20; i++)
                intArr.setArr(i, i + 5);
            std::cout << intArr.getArr(5) << std::endl;
            std::cout << intArr[30] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
    std::cout << std::endl << std::endl << "CREATING STRING ARRAY" << std::endl;
        try
        {
            Array<std::string>  strArr(3);

            strArr.setArr(0, "First string");
            strArr.setArr(1, "Second string");
            strArr.setArr(2, "Third string");
            std::cout << strArr.getArr(2) << std::endl;
            std::cout << strArr.getArr(30) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << "CREATING FLOAT ARRAY" << std::endl;
        try
        {
            Array<float>  intArr(20);

            for (int i = 0; i < 20; i++)
                intArr.setArr(i, i + 5.2);
            std::cout << intArr.getArr(5) << std::endl;
            std::cout << intArr.getArr(30) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
