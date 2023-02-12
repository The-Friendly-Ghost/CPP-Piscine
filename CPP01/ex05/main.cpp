/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/12 17:12:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/12 17:37:34 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harll;
	
	Harll.complain("DEBUG");
	std::cout << std::endl;
	Harll.complain("INFO");
	std::cout << std::endl;
	Harll.complain("WARNING");
	std::cout << std::endl;
	Harll.complain("ERROR");
	std::cout << std::endl;
	Harll.complain("RANDOM/INVALID");
}