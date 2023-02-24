/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 14:55:11 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/21 14:12:07 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::getContactNum(void)
{
	return (this->mContactNum);
}

void	PhoneBook::setContactNum(int num)
{
	this->mContactNum = num;
}

void	PhoneBook::addNewContact(void)
{
	Contact	temp;

	temp.getInfo();
	this->mContact[this->mContactNum] = temp;
	this->mContactNum = (this->mContactNum + 1) % 8;
}

void	PhoneBook::searchContact(void)
{
	std::string	input;
	
	std::cout << "\x1B[2J\x1B[H" << "YOUR CONTACTS" << std::endl;
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "First name|";
	std::cout << std::setw(11) << "Last name|";
	std::cout << std::setw(11) << "Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		this->mContact[i].printContact(false);
	}
	std::cout << "Enter Index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
			exit(0);
	if (input.std::string::find_first_of("12345678") 
		!= std::string::npos && input.length() == 1)
		this->mContact[std::stoi(input) - 1].printContact(true);
	else
		std::cout << "Invalid input" << std::endl;
}

#endif
