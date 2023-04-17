/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:55:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/17 14:58:06 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sys/stat.h>
#include <sstream>

static inline bool	file_exists(char *str)
{
	struct	stat buffer;
	
	return (stat(str, &buffer) == 0);
}

static inline std::string	copy_infile_to_string(std::ifstream &fs)
{
	std::stringstream	buffer;

	buffer << fs.rdbuf();
	return (buffer.str());
}

int	main(int argc, char **argv)
{
	// std::ifstream			fs;
	// std::ofstream			outfile;
	// std::string				filename;
	// std::string				total;
	// std::string				find;
	// std::string				replace;
	// size_t					pos;

	if (argc != 2)
	{
		std::cerr << "Valid input: './btc [filename]'" << std::endl;
		return (1);
	}

	if (!file_exists("data.csv"))
    {
        std::cerr << "data.csv not found" << std::endl;
        return (1);
    }

    if (!file_exists(argv[1]))
    {
        std::cerr << argv[1] << "not found" << std::endl;
        return (1);
    }

    

    else
}