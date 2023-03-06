/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 16:40:20 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:41:51 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) :
    WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Assignment Operator Called" << std::endl;
    this->mType = other.getType();
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "MIAAAAUW! PRRR!" << std::endl;
}
