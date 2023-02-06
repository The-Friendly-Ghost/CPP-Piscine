/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:16:45 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 16:19:47 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setZombieName(name);
	return (horde);
}
