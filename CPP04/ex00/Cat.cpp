/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:58:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:39:58 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void) :
    Animal("Cat")
{
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    this->mType = other.getType();
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "MIAAAAUW! PRRR!" << std::endl;
}
