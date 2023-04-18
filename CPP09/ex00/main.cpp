/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:55:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/18 15:49:48 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sys/stat.h>
#include <sstream>
#include <stdexcept>
#include "BitcoinExchange.hpp"

static inline bool	fileExists(const char *str)
{
	struct	stat buffer;

	return (stat(str, &buffer) == 0);
}

static inline void	infileToStream(const char *filename, std::ifstream &data)
{
	try
	{
		if (!fileExists(filename))
			throw (std::invalid_argument("File doesn't exist"));
		data.open(filename);
		if (!data.is_open())
			throw (std::invalid_argument("File couldn't be opened"));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cerr << "Valid input: './btc [filename]'" << std::endl;
		return (1);
	}

	// std::ifstream input = infileToStream(argv[1]);
	std::ifstream data;
	::infileToStream("data.csv", data);
	Btc dataCsv(data);

	// for (std::string line; getline(data, line);)
	// {
    //     std::cout << line << std::endl;
	// }
	
	// for ( std::string line; getline( input, line ); )
	// {
    // 	//..for each line in input...
	// }
}
