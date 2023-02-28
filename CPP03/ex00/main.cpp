/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:07:26 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/27 17:20:03 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	Tiger("Tiger");
	ClapTrap	Lion("Lion");
	ClapTrap	Pidgey;
	ClapTrap	Pidgeotto(Pidgey);
	ClapTrap	Pidgeot;

	Pidgeot = ClapTrap("Pidgeot");

	std::cout << std::endl<< std::endl << "----------- 1 -------------" << std::endl << std::endl;
	// No more hit points
	Tiger.takeDamage(5);
	Tiger.takeDamage(6);
	Tiger.attack("a gazelle");

	std::cout << std::endl<< std::endl << "----------- 2 ------------" << std::endl << std::endl;
	// Repair
	Lion.takeDamage(7);
	Lion.beRepaired(7);
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.attack("a buffalo");
	Lion.beRepaired(7);

	std::cout << std::endl<< std::endl << "--------------------------" << std::endl << std::endl;
}
