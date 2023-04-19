/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:14 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/19 16:00:45 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <utility>
#include <cctype>

/////// Constructors / destructor ////////

Btc::Btc(std::ifstream &data) : 
    rawDataStr(data)
{
    this->parseCsv();

    for(std::map<s_date, float>::const_iterator it = this->data.begin();
    it != this->data.end(); ++it)
    {
        std::cout << "Day: " << it->first.day << " | Month: " << it->first.day << " | year: " << it->first.year << " | value: " << it->second << std::endl;
    }

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

void    Btc::checkValidFile(std::string line)
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
        cStr[10] != ','         ||
        !std::isdigit(cStr[11])
    )
        throw (std::invalid_argument("Data.csv not valid"));
}

void    Btc::parseCsv(void)
{
    std::string line;
    float       value;
    s_date      add;

    std::getline(this->rawDataStr, line);
    if (line != "date,exchange_rate")
        throw (std::invalid_argument("Data.csv not valid"));
    while(std::getline(this->rawDataStr, line))
	{
        this->checkValidFile(line);
        std::istringstream(line.substr(0, 4)) >> add.year;
        std::istringstream(line.substr(5, 2)) >> add.month;
        std::istringstream(line.substr(8, 2)) >> add.day;
        std::istringstream(line.substr(11, std::string::npos)) >> value;
        this->data.insert(std::pair<s_date, float>(add, value));
	}
}

// void   Btc::createElement(std::map<time_t, float> &data)
// {
    
// } 