/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 16:35:50 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 17:43:12 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "Address str: " << &str << std::endl;
	std::cout << "Address str: " << &stringPTR << std::endl;
	std::cout << "Address str: " << &stringREF << std::endl;
	std::cout << "Address str: " << str << std::endl;
	std::cout << "Address str: " << *stringPTR << std::endl;
	std::cout << "Address str: " << stringREF << std::endl;
}
