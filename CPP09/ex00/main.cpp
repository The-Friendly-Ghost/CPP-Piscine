/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:55:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/21 15:42:47 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sys/stat.h>
#include <sstream>
#include <stdexcept>
#include "BitcoinExchange.hpp"
#include <limits>
#include <stdlib.h>

static bool	fileExists(const char *str)
{
    struct	stat buffer;

    return (stat(str, &buffer) == 0);
}

static void	infileToStream(const char *filename, std::ifstream &data)
{
    if (!fileExists(filename))
        throw (std::invalid_argument("File doesn't exist"));
    data.open(filename);
    if (!data.is_open())
        throw (std::invalid_argument("File couldn't be opened"));
}

static void verifyDate(std::string &line)
{
    const char    *cStr = line.c_str();

    if (
        !std::isdigit(cStr[0])  ||
        !std::isdigit(cStr[1])  ||
        !std::isdigit(cStr[2])  ||
        !std::isdigit(cStr[3])  ||
        cStr[4] != '-'          ||
        !std::isdigit(cStr[5])  ||
        !std::isdigit(cStr[6])  ||
        cStr[7] != '-'          ||
        !std::isdigit(cStr[8])  ||
        !std::isdigit(cStr[9])  ||
        cStr[10] != ' '         ||
        cStr[11] != '|'         ||
        cStr[12] != ' '
    )
    {
        std::cout << "Error: bad input => " << line;
        throw (std::invalid_argument(""));
    }

    int month;
    int day;
    std::istringstream(line.substr(5, 2)) >> month;
    std::istringstream(line.substr(8, 2)) >> day;
    if (month > 12 || day > 31 || month == 0 || day == 0)
    {
        std::cout << "Error: bad input => " << line;
        throw (std::invalid_argument(""));
    }
}

static double  stringToInt(std::string &line)
{
    if (line.length() < 14)
    {
        std::cout << "Error: bad input => " << line;
        throw (std::invalid_argument(""));
    }
    if (line[13] == '-')
    {
        if (std::isdigit(line[14]))
        {
            std::cout << "Error: Not a positive number.";
            throw (std::invalid_argument(""));
        }
    }
    else if (!std::isdigit(line[13]))
    {
        std::cout << "Error: bad input => " << line;
        throw (std::invalid_argument(""));
    }

    double result = atof(line.substr(13, std::string::npos).c_str());
    if (result < 0)
    {
        std::cout << "Error: Not a positive number.";
        throw (std::invalid_argument(""));
    }
    if (result > 1000)
    {
        std::cout << "Error: too large a number.";
        throw (std::invalid_argument(""));
    }
    return (result);
}

static double    matchDate(std::string &line, Btc &data)
{
    int year;
    int month;
    int day;

    std::istringstream(line.substr(0, 4)) >> year;
    std::istringstream(line.substr(5, 2)) >> month;
    std::istringstream(line.substr(8, 2)) >> day;
    return (data.getValue(year, month, day));
}

static void	parseInput(std::ifstream &input, Btc &data)
{
    std::string	line;
    double      multiply;
    double      btcPrice;

    std::getline(input, line);
    if (line != "date | value")
        throw (std::invalid_argument("input file invalid"));
    while (std::getline(input, line))
    {
        try
        {
            ::verifyDate(line);
            multiply = ::stringToInt(line);
            btcPrice = ::matchDate(line, data);
            std::cout << line.substr(0, 4) << "-" << line.substr(5, 2);
            std::cout << "-" << line.substr(8, 2) << " => " << multiply;
            std::cout << " = " << btcPrice * multiply << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

int	main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
            throw (std::invalid_argument("Input should be: './btc [filename]'"));

        std::ifstream input;
        std::ifstream data;
        ::infileToStream(argv[1], input);
        ::infileToStream("data.csv", data);
        Btc dataCsv(data);
        ::parseInput(input, dataCsv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
