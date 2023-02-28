/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 17:53:14 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Constructors, deconstructor

ClapTrap::ClapTrap(void) :
	mName("Pigeon"),
	mHitPoints(10),
	mEnergyPnts(10),
	mAttackDmg(0)
{
	std::cout << "Claptrap constructor called";
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string newName) :
	mName(newName),
	mHitPoints(10),
	mEnergyPnts(10),
	mAttackDmg(0)
{
	std::cout << "Claptrap constructor called";
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string newName, int hitPoints, int energy, int attackDmg) :
	mName(newName),
	mHitPoints(hitPoints),
	mEnergyPnts(energy),
	mAttackDmg(attackDmg)
{
	std::cout << "Claptrap constructor called";
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Claptrap copy constructor called";
	std::cout << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap assignment operator called";
	std::cout << std::endl;
	this->mAttackDmg = other.getAttackDmg();
	this->mName = other.getName();
	this->mHitPoints = other.getHitpnts();
	this->mEnergyPnts = other.getEnergy();
	return (*this);
}

// Getters

std::string	ClapTrap::getName(void) const
{
	return (this->mName);
}

int	ClapTrap::getHitpnts(void) const
{
	return (this->mHitPoints);
}

int	ClapTrap::getEnergy(void) const
{
	return (this->mEnergyPnts);
}

int	ClapTrap::getAttackDmg(void) const
{
	return (this->mAttackDmg);
}

// Actions

void	ClapTrap::attack(const std::string &target)
{
	std::cout << std::endl << "[ATTACK]" << std::endl;
	if (this->mEnergyPnts <= 0)
	{
		std::cout << "Action not possible. " << this->mName;
		std::cout << " has " << this->mEnergyPnts << " energy left.";
		std::cout << std::endl;
	}
	else if (this->mHitPoints <= 0)
	{
		std::cout << "Action not possible. " << this->mName;
		std::cout << " has " << this->mHitPoints;
		std::cout << " hitpoints left." << std::endl;
	}
	else
	{
		this->mEnergyPnts--;
		std::cout << this->mName << " attacks " << target;
		std::cout << ", causing " << this->mAttackDmg << " points of damage. ";
		std::cout << this->mName << " has " << this->mEnergyPnts << " energy left.";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << "[TAKE DAMAGE]" << std::endl;
	if (this->mHitPoints <= 0)
	{
		std::cout << "Action not possible. " << this->mName << " has ";
		std::cout << this->mHitPoints << " left." << std::endl;
	}
	else
	{
		this->mHitPoints -= amount;
		std::cout << this->mName << " took " << amount;
		std::cout << " points of damage. " << this->mHitPoints << " left.";
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << "[REPAIR]" << std::endl;
	if (this->mEnergyPnts <= 0)
	{
		std::cout << "Action not possible. " << this->mName;
		std::cout << " has " << this->mEnergyPnts << " left." << std::endl;
	}
	else if (this->mHitPoints <= 0)
	{
		std::cout << "Action not possible. " << this->mName;
		std::cout << " has " << this->mHitPoints << " left." << std::endl;
	}
	else
	{
		this->mHitPoints += amount;
		this->mEnergyPnts--;
		std::cout << this->mName << " repaired " << amount << " health points. ";
		std::cout << this->mHitPoints << " points of health left. ";
		std::cout << this->mEnergyPnts << " energy left.";
		std::cout << std::endl;
	}
}
