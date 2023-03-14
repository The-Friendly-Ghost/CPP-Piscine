/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:16:27 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:35:28 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name) : mName(name)
{

}

Zombie::~Zombie(void)
{
    
}

void    Zombie::setZombieName(std::string name)
{
    this->mName = name;
}

void    Zombie::announce(void)
{
    std::cout << this->mName << " wants BRAIIINZZZ..." << std::endl;
}
