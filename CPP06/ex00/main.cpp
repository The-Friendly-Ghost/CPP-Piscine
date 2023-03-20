/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 08:21:07 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 10:45:55 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 2)
		std::cout << "Invalid amount of arguments" << std::endl;
	else if (argc == 1)
		Convert	convert;
	else
		Convert convert(argv[1]);
}