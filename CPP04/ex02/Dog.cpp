/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:58:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/08 15:19:49 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void) :
    Animal("Dog")
{
    std::cout << "Dog Constructor Called" << std::endl;
    this->mDogBrain = new Brain();
}

Dog::~Dog(void)
{
    delete this->mDogBrain;
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other) :
    Animal("Dog")
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->mType = other.getType();
    this->mDogBrain = new Brain(*other.getBrain());
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
    this->mType = other.getType();
    this->mDogBrain = new Brain(*other.getBrain());
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "WUUFFFF!" << std::endl;
}

Brain   *Dog::getBrain(void) const
{
    return (this->mDogBrain);
}
