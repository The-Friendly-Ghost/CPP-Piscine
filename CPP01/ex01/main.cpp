/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 11:46:34 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 16:33:33 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	checkleaks(void)
// {
// 	system("leaks -q Moar_brainz");
// }

int	main(void)
{
	const int		N = 5;
	Zombie			*horde;

	//atexit(checkleaks);
	horde = zombieHorde(N, "HENK");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}