/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:56:56 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/26 18:30:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	std::string	input;
	PhoneBook	phoneBook;
	
	phoneBook.setContactNum(0);
	while (1)
	{
		std::cout << "Command: ";
		std::cin >> input;
		if (!input.compare("ADD"))
			phoneBook.addNewContact();
		else if (!input.compare("SEARCH"))
			phoneBook.searchContact();
		else if (!input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "Invalid command (ADD, SEARCH or EXIT)" << std::endl;
		}
	}
	return (0);
}
