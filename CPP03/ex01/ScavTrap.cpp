/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 15:58:15 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Constructors, deconstructor

ScavTrap::ScavTrap(void) :
	ClapTrap("Dove", 100, 50, 20),
	mGateKeepingMode(false)
{
	std::cout << "Scavtrap constructor called for " << this->getName();
	std::cout << std::endl;
}

ScavTrap::ScavTrap(std::string newName) :
	ClapTrap(newName, 100, 50, 20),
	mGateKeepingMode(false)
{
	std::cout << "Scavtrap constructor called for " << this->getName();
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called for ";
	std::cout << copy.getName() << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called for " << this->getName() << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Assignment operator called for " << other.getName();
	std::cout << std::endl;
	this->mAttackDmg = other.getAttackDmg();
	this->mName = other.getName();
	this->mHitPoints = other.getHitpnts();
	this->mEnergyPnts = other.getEnergy();
	this->mGateKeepingMode = other.getGateKeeping();
	return (*this);
}

// Getters

bool	ScavTrap::getGateKeeping(void) const
{
	return (this->mGateKeepingMode);
}

// Actions

void	ScavTrap::attack(const std::string &target)
{
	std::cout << std::endl << "[ATTACK]" << std::endl;
	if (this->mEnergyPnts <= 0)
	{
		std::cout << "Action not possible. ScavTrap " << this->getName();
		std::cout << " has " << this->getEnergy() << " energy left.";
		std::cout << std::endl;
	}
	else if (this->mHitPoints <= 0)
	{
		std::cout << "Action not possible. ScavTrap " << this->getName();
		std::cout << " has " << this->getHitpnts();
		std::cout << " hitpoints left." << std::endl;
	}
	else
	{
		this->mEnergyPnts--;
		std::cout << "ScavTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDmg() << " points of damage. ";
		std::cout << "ScavTrap has " << this->getEnergy() << " energy left.";
		std::cout << std::endl;
	}
}

void	ScavTrap::setGateKeeping(bool mode)
{
	if (mode == true)
		std::cout << this->getName() << ": Gatekeeping activated" << std::endl;
	else
		std::cout << this->getName() << ": Gatekeeping deactivated" << std::endl;
	this->mGateKeepingMode = mode;
}

void	ScavTrap::guardGate(void)
{
	if (this->getGateKeeping() == true)
		this->setGateKeeping(false);
	else
		this->setGateKeeping(true);
}
