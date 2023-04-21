/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 07:14:54 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/21 08:16:15 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <stdexcept>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return(1);
	
	try
	{
		RPN	numbers;
		int i = 0;

		while (argv[1][i])
		{
			if (std::isdigit(argv[1][i]))
				numbers.addNumber(argv[1][i]);
			else if (argv[1][i] == '+')
				numbers.plus();
			else if (argv[1][i] == '-')
				numbers.minus();
			else if (argv[1][i] == '/')
				numbers.divide();
			else if (argv[1][i] == '*')
				numbers.multiply();
			else if (argv[1][i] != ' ')
				throw (std::invalid_argument("Error"));
			i++;
		}
		numbers.printResult();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
