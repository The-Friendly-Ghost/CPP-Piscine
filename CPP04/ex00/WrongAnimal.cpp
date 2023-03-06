/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 16:36:34 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:37:51 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType) :
	mType(newType)
{
	std::cout << "WrongAnimal Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Deconstructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Assignment operator called";
	std::cout << std::endl;
	this->mType = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " * Makes a wrong animal sound * " << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->mType);
}
