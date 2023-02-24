/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:56:56 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/21 14:09:50 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <fstream>

int	main(void)
{
	std::string	input;
	PhoneBook	phoneBook;
	
	phoneBook.setContactNum(0);
	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			break ;
		else if (input == "ADD")
			phoneBook.addNewContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "Invalid command (ADD, SEARCH or EXIT)" << std::endl;
		}
	}
	return (0);
}
