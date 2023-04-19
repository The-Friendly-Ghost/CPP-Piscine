/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:55:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/19 15:44:58 by cpost         ########   odam.nl         */
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
	if (!fileExists(filename))
		throw (std::invalid_argument("File doesn't exist"));
	data.open(filename);
	if (!data.is_open())
		throw (std::invalid_argument("File couldn't be opened"));
}

int	main(int argc, char **argv)
{
	// Checking if there are 2 input arguments on the command line
	(void)argv;
	if (argc != 2)
	{
		std::cerr << "Valid input: './btc [filename]'" << std::endl;
		return (1);
	}

	// Parsing the data files
	try
	{
		// std::ifstream input = infileToStream(argv[1]);
		std::ifstream data;
		::infileToStream("data.csv", data);
		Btc dataCsv(data);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

}
