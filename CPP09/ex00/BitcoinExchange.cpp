/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:14 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/18 15:50:54 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <iostream>
#include <fstream>

/////// Constructors / destructor ////////

Btc::Btc(std::ifstream &data) : 
    rawDataStr(data)
{
    this->parseCsv();
    this->rawDataStr.close();
}

// Btc::Btc(const Btc &copy)
// {
// }

// Btc &Btc::operator=(const Btc &rhs)
// {
// }

Btc::~Btc(void)
{
}

/////// Getters / Setters ////////

/////// Exceptions ////////

/////// Other ////////

void    Btc::parseCsv(void)
{
    for (std::string line; getline(this->rawDataStr, line);)
	{
        std::cout << line << std::endl;
	}
    this->rawDataStr.close();
}

// void   Btc::createElement(std::map<time_t, float> &data)
// {
    
// } 