/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:58:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/08 15:18:31 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void) :
    Animal("Cat")
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->mCatBrain = new Brain();
}

Cat::~Cat(void)
{
    delete this->mCatBrain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other) :
    Animal("Cat")
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->mType = other.getType();
    this->mCatBrain = new Brain(*other.getBrain());
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    this->mType = other.getType();
    this->mCatBrain = new Brain(*other.getBrain());
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "MIAAAAUW! PRRR!" << std::endl;
}

Brain   *Cat::getBrain(void) const
{
    return (this->mCatBrain);
}
