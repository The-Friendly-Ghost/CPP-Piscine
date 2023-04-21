/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:14 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/21 15:39:23 by cpost         ########   odam.nl         */
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
#include <limits.h>

/////// Constructors / destructor ////////

Btc::Btc(std::ifstream &data) : 
    rawDataStr(data),
    YearHighest(INT_MIN),
    YearLowest(INT_MAX)
{
    this->parseCsv();
    this->rawDataStr.close();
}

Btc::Btc(const Btc &copy) :
    rawDataStr(copy.rawDataStr)
{
    *this = copy;
}

Btc &Btc::operator=(const Btc &rhs)
{
    this->data = rhs.data;
    this->YearHighest = rhs.YearHighest;
    this->YearLowest = rhs.YearLowest;
    return (*this);
}

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
        throw (std::invalid_argument("Data.csv invalid"));
}

void    Btc::parseCsv(void)
{
    std::string line;
    double      value;
    s_date      add;

    std::getline(this->rawDataStr, line);
    if (line != "date,exchange_rate")
        throw (std::invalid_argument("Data.csv invalid"));
    while(std::getline(this->rawDataStr, line))
	{
        this->checkValidFile(line);
        std::istringstream(line.substr(0, 4)) >> add.year;
        std::istringstream(line.substr(5, 2)) >> add.month;
        std::istringstream(line.substr(8, 2)) >> add.day;
        std::istringstream(line.substr(11, std::string::npos)) >> value;
        this->data.insert(std::pair<s_date, double>(add, value));

        //Saving the lowest year in the data and the highest year. By doing
        //this, we are able to do way less calculations later on because we 
        //don't have to check a huge range of years.
        if (add.year < YearLowest)
            this->YearLowest = add.year;
        if (add.year > YearHighest)
            this->YearHighest = add.year;
	}
}

double  Btc::getValue(int year, int month, int day)
{
    std::map<s_date, double>::iterator  it;
    bool                                matchFound;

    // First, let's look for the correct year.
    if (year < this->YearLowest)
    {
        std::cout << "Error: Date to far in history.";
        throw (std::invalid_argument(""));
    }
    else if (year > this->YearHighest)
    {
        year = this->YearHighest;
        day = 31;
        month = 12;
    }
    else
    {
        matchFound = false;
        while (matchFound == false)
        {
            for (it = this->data.begin(); it != this->data.end(); it++)
            {
                if (it->first.year == year)
                {
                    matchFound = true;
                    break ;
                }
            }
            if (matchFound == false)
                year--;
        }
    }

    // Second, let's get the correct month
    matchFound = false;
    while (matchFound == false)
    {
        for (it = this->data.begin(); it != this->data.end(); it++)
        {
            if (it->first.month == month && it->first.year == year)
            {
                matchFound = true;
                break ;
            }
        }
        if (matchFound == false)
        {
            if (month == 1)
            {
                month = 12;
                year--;
                if (year < this->YearLowest)
                {
                    std::cout << "Error: Date to far in history.";
                    throw (std::invalid_argument(""));
                }
            }
            else
                month--;
        }
    }

    //Now, let's find the correct day.
    matchFound = false;
    while (matchFound == false)
    {
        for (it = this->data.begin(); it != this->data.end(); it++)
        {
            if (it->first.day == day && 
                it->first.month == month && 
                it->first.year == year)
            {
                matchFound = true;
                break ;
            }
        }
        if (matchFound == false)
        {
            if (day == 1)
            {
                day = 31;
                if (month == 1)
                {
                    month = 12;
                    year--;
                    if (year < this->YearLowest)
                    {
                        std::cout << "Error: Date to far in history.";
                        throw (std::invalid_argument(""));
                    }
                }
                else
                    month--;
            }
            else
                day--;
        }
    }
    //The iterator is now positioned at the right date. We can return
    // the value of the iterator.
    return (it->second);
}