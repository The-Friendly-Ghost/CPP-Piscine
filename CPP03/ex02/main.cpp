/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/28 15:26:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 17:57:22 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "[Create Flagtrap Worm]" << std::endl;
	FlagTrap	Worm("Worm");
	std::cout << std::endl;

	std::cout << "[Create Flagtrap Bird]" << std::endl;
	FlagTrap	Bird("Bird");
	std::cout << std::endl;

	std::cout << "[Create default Flagtrap Pigeon]" << std::endl;
	FlagTrap	Pigeon;
	std::cout << std::endl;

	std::cout << "[Worm high fives]" << std::endl;
	Worm.highFivesGuys();
	std::cout << std::endl;

	std::cout << "[Worm attacks]" << std::endl;
	Worm.attack("dirt");
	std::cout << std::endl;

	std::cout << "[Create ClapTrap and attack]" << std::endl;
	ClapTrap	Clapman("ClapTrapMan");
	Clapman.attack("A Flagtrapper");
	std::cout << std::endl;

	std::cout << "[Flagtrap attack]" << std::endl;
	Pigeon.attack("another dove");
	std::cout << std::endl;

	std::cout << "[Taking damage and dying]" << std::endl;
	Pigeon.takeDamage(50);
	Pigeon.takeDamage(50);
	Pigeon.takeDamage(50);
	std::cout << std::endl;
}
