/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 12:57:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/07 21:54:17 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// #include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const Cat *Apollo = new Cat();

	Apollo->getBrain()->setIdea(0, "Must Attack Plant!");

	std::cout << Apollo->getBrain()->getIdea(0);

	return (0);
}
