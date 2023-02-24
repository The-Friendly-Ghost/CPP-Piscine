/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:07:26 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/24 20:50:12 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Tiger("Tiger");
	ClapTrap	Lion("Lion");
	ClapTrap	Pidgey;
	ClapTrap	Pidgeotto(Pidgey);
	ClapTrap	Pidgeot;

	Pidgeot = ClapTrap("Pidgeot");

	// Nog tests maken
}
