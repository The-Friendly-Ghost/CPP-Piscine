/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 08:21:07 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 13:32:17 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 2)
		std::cout << "Invalid amount of arguments" << std::endl;
	else if (argc == 1)
		ScalarConverter	ScalarConverter;
	else
		ScalarConverter ScalarConverter(argv[1]);
}