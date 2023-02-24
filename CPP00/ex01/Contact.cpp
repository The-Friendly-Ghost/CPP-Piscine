/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:06:03 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/21 13:55:05 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

bool	Contact::strHasTabs(std::string const &str) const
{
	int	const 	length = str.length();

	for (int i = 0; i < length; i++)
	{
		if (str[i] == '\t')
			return (true);
	}
	return (false);
}

bool	Contact::strIsDigits(std::string const &str) const
{
	return (str.std::string::find_first_not_of("0123456789") 
		== std::string::npos);
}

bool	Contact::strIsEmpty(std::string const &str) const
{
	int	const 	length = str.length();

	for (int i = 0; i < length; i++)
	{
		if (isprint((int)str[i]) && str[i] != ' ')
			return (false);
	}
	return (true);
}

std::string	Contact::getInput(std::string info, bool phone)
{
	std::string	return_value;

	while (return_value.empty() == true || strHasTabs(return_value) == true 
		|| strIsEmpty(return_value) == true)
	{
		std::cout << "\x1B[2J\x1B[H";
		std::cout << "Enter " << info << std::endl;
		std::getline(std::cin, return_value);
		if (std::cin.eof())
			exit(0);
	}
	while (phone == true && (strIsDigits(return_value) == false
		|| return_value.empty() == true))
	{
		std::cout << "\x1B[2J\x1B[H";
		std::cout << "Invalid phone number. Try again" << std::endl;
		std::getline(std::cin, return_value);
		if (std::cin.eof())
			exit(0);
	}
	return (return_value);
}

void	Contact::getInfo(void)
{
	this->mFirstName = getInput("first name");
	this->mLastName = getInput("last name");
	this->mNickName = getInput("nickname");
	this->mPhoneNumber = getInput("phone number", true);
	this->mDarkestSecret = getInput("darkest secret");
	std::cout << "\x1B[2J\x1B[H";
}

void	Contact::printInfo(std::string info, bool printLine)
{
	if (printLine == true)
		std::cout << info << std::endl;
	else
	{
		if (info.size() <= 10)
			std::cout << std::setw(10) << info << '|';
		else
		{
			for (int i = 0; i < 9; i++)
				std::cout << info[i];
			std::cout << ".|";
		}
	}
}

bool	Contact::contactIsEmpty(void)
{
	return (this->mFirstName.empty());
}

void	Contact::printContact(bool printLine)
{
	if (printLine == true && this->mFirstName.empty())
	{
		std::cout << "Empty contact selected." << std::endl;
		return ;
	}
	printInfo(this->mFirstName, printLine);
	printInfo(this->mLastName, printLine);
	printInfo(this->mNickName, printLine);
	if (printLine == true)
	{
		printInfo(this->mPhoneNumber, printLine);
		printInfo(this->mDarkestSecret, printLine);
	}
	else
		std::cout << std::endl;
}
