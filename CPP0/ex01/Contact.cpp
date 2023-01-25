/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:06:03 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/25 18:15:01 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <string>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

bool	Contact::strIsDigits(std::string const &str)
{
	return (str.std::string::find_first_not_of("0123456789") 
		== std::string::npos);
}

std::string	Contact::getLine(std::string info, bool phone = false)
{
	std::string	return_value;

	std::cout << "Enter " << info << std::endl;
	std::getline(std::cin, return_value);
	while (return_value.empty() == true)
	{
		std::cout << "No input found. Try again" << std::endl;
		std::getline(std::cin, return_value);
	}
	while (phone == true && strIsDigits(return_value) == false)
	{
		std::cout << "Invalid phone number. Try again" << std::endl;
		std::getline(std::cin, return_value);
	}
	return (return_value);
}

void	Contact::getInfo()
{
	firstName = getLine("first name");
	lastName = getLine("last name");
	nickName = getLine("nickname");
	phoneNumber = getLine("phone number", true);
	darkestSecret = getLine("darkest secret");
}