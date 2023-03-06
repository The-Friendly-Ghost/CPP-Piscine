/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 13:02:30 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 14:33:57 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void) :
	Animal("Dog")
{
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Deconstructor called." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment operator called";
	std::cout << std::endl;
	this->mType = other.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << " WOOF! WOOF! BARK! BARK! " << std::endl;
}
