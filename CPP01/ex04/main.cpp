/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:28:48 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/09 15:54:04 by cpost         ########   odam.nl         */
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
	std::ifstream			fs;
	std::ofstream			outfile;
	std::string				filename;
	std::string				total;
	std::string				find;
	std::string				replace;
	size_t					pos;

	//Check if amount of arguments is correct
	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		return (0);
	}
	
	if (file_exists(argv[1]))
	{
		//Convert char* to std::string
		filename = argv[1];
		find = argv[2];
		replace = argv[3];
		
		//open in- and output files
		fs.open(filename);
		outfile.open(filename + ".replace");
		if (!fs || !outfile)
		{
			std::cout << "File opening failed" << std::endl;
			return (0);
		}
		
		//Copy content of infile to a string 'total'
		total = copy_infile_to_string(fs);

		//Find first occurence occurences of the 'find' in the 'total', and
		// replace them with 'replace'
		pos = total.find(find);
		while (pos != std::string::npos)
		{
			total.erase(pos, find.length());
			total.insert(pos, replace);
			pos = total.find(find, pos + replace.length());
		}

		//Move total string to outfile
		outfile << total;

		//Close in- and outfile
		outfile.close();
		fs.close();
	}
	else
		std::cout << "File doesn't exist" << std::endl;
	return (0);
}
