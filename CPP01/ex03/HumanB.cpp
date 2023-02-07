/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 13:35:15 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/07 14:13:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) :
	mWeapon(NULL), 
	mName("Some random person")
{

}

HumanB::HumanB(std::string name) :
	mWeapon(NULL),
	mName(name)
{

}

HumanB::~HumanB(void)
{
	
}

void	HumanB::attack(void)
{
	if (this->mWeapon == NULL)
		std::cout << this->mName << " attacked with bare fists." << std::endl;
	else
		std::cout << this->mName << " attacked with "
		<< this->mWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->mWeapon = &weapon;
}
