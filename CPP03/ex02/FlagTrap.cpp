/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FlagTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 17:58:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Constructors, deconstructor

FlagTrap::FlagTrap(void) :
	ClapTrap("Pigeon", 100, 100, 30)
{
	std::cout << "FlagTrap constructor called for " << this->getName();
	std::cout << std::endl;
}

FlagTrap::FlagTrap(std::string newName) :
	ClapTrap(newName, 100, 100, 30)
{
	std::cout << "FlagTrap constructor called for " << this->getName();
	std::cout << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy)
{
	std::cout << "FlagTrap copy constructor called for ";
	std::cout << copy.getName() << std::endl;
	*this = copy;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor called for " << this->getName() << std::endl;
}

FlagTrap	&FlagTrap::operator=(const FlagTrap &other)
{
	std::cout << "Assignment operator called for " << other.getName();
	std::cout << std::endl;
	this->mAttackDmg = other.getAttackDmg();
	this->mName = other.getName();
	this->mHitPoints = other.getHitpnts();
	this->mEnergyPnts = other.getEnergy();
	return (*this);
}

// Actions

void	FlagTrap::highFivesGuys(void)
{
	std::cout << this->getName() << "Gives a high five" << std::endl;
}
