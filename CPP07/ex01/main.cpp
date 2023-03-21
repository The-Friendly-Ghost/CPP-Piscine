/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 19:17:49 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/21 19:34:43 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int	main(void)
{
	std::string	strArray[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int			intArray[] = {1, 2, 3, 4, 5, 6, 7};

	iter(strArray, 7, testFunction<std::string>);
	iter(intArray, 7, testFunction<int>);
}