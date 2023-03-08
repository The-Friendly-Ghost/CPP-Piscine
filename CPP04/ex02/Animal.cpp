/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 12:08:12 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 12:47:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal Constructor called." << std::endl;
}

Animal::Animal(std::string newType) :
	mType(newType)
{
	std::cout << "Animal Constructor called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Deconstructor called." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignment operator called";
	std::cout << std::endl;
	this->mType = other.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << " * Makes a random animal sound * " << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->mType);
}
