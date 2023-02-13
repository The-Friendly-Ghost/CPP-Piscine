/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:52:05 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/13 17:55:27 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << "A value = " << a.getRawBits() << std::endl;
	std::cout << "B value = " << b.getRawBits() << std::endl;
	std::cout << "C value = " << c.getRawBits() << std::endl;
}