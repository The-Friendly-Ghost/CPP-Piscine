/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:56:13 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/24 17:48:48 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int x = 0; argv[i][x]; x++)
				std::cout << (char)std::toupper(argv[i][x]);
		}
	}
	std::cout << std::endl;
	return (0);
}
