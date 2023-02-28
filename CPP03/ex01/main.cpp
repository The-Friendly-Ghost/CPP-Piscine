/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/28 15:26:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 16:00:55 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "[Create Worm]" << std::endl;
	ScavTrap	Worm("Worm");
	std::cout << std::endl;

	std::cout << "[Create Bird]" << std::endl;
	ScavTrap	Bird("Bird");
	std::cout << std::endl;

	std::cout << "[Create Dove]" << std::endl;
	ScavTrap	Dove;
	std::cout << std::endl;

	std::cout << "[Worm activate gatekeeping]" << std::endl;
	Worm.guardGate();
	std::cout << std::endl;

	std::cout << "[Worm deactivate gatekeeping]" << std::endl;
	Worm.guardGate();
	std::cout << std::endl;

	std::cout << "[Create ClapTrap and attack]" << std::endl;
	ClapTrap	Clapman("ClapTrapMan");
	Clapman.attack("A Scavtrapper");
	std::cout << std::endl;

	std::cout << "[ScavTrap attack]" << std::endl;
	Dove.attack("another dove");
	std::cout << std::endl;
}
