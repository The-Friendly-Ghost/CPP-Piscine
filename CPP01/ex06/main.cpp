/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/12 17:12:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/12 21:30:05 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harll;

	if (argc != 2)
	{
		std::cout << "Input 1 argument" << std::endl;
		return (1);
	}
	Harll.complain(argv[1]);
}