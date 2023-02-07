/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:28:48 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/07 17:48:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sys/stat.h>

static inline bool	file_exists(char *str)
{
	struct	stat buffer;
	
	return (stat(str, &buffer) == 0);
}

static inline void copy_infile_to_outfile(std::fstream &fs,
		std::ofstream &outfile)
{
	std::string	line;

	while (getline(fs, line))
		outfile << line << '\n';
}

int	main(int argc, char **argv)
{
	std::fstream			fs;
	std::ofstream			outfile;
	const std::string		fileExtension = ".replace";
	size_t					pos;

	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		return (0);
	}
	if (file_exists(argv[1]))
	{
		fs.open(argv[1]);
		outfile.open(argv[1] + fileExtension);
		copy_infile_to_outfile(fs, outfile);
		// pos = outfile.find(argv[3]);
		
		// while (pos != std::string::npos)
		// {
			
		// 	pos = line.find(argv[3] + pos + 1);
		// }

		outfile.close();
		fs.close();
	}
	else
		std::cout << "File doesn't exist" << std::endl;
	return (0);
}
