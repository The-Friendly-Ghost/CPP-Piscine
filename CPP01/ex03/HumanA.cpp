/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 13:08:05 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/07 14:09:37 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
    mName(name),
    mWeapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
    std::cout << this->mName << " attacked with " << this->mWeapon.getType() 
    << std::endl;
}
