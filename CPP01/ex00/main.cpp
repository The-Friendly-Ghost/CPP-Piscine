/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 19:27:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 11:38:12 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*heap;

	heap = newZombie("Heap");
	heap->announce();
	randomChump("Stack");
	delete heap;
}