/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 17:53:07 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 17:59:40 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::~Weapon(void)
{
    
}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}
