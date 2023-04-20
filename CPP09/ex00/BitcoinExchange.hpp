/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:24 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/20 17:12:39 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>

class Btc
{
private:
    struct s_date {
        int year;
        int month;
        int day;

        bool operator<(s_date const & other) const 
        {
            if (this->year != other.year)
                return (this->year < other.year);
            else if (this->month != other.month)
                return (this->month < other.month);
            else
                return (this->day < other.day);
        }
    };

    std::ifstream               &rawDataStr;
    std::map<s_date, float>     data;
    int                         YearHighest;
    int                         YearLowest;

    Btc(void);
    void    parseCsv(void);
    void    checkValidFile(std::string line);
    // void    createElement(std::map<time_t, float> &data);


public:
    Btc(std::ifstream &data);
    // Btc(const Btc &copy);
    // Btc &operator=(const Btc &rhs);
    ~Btc(void);

    float   getValue(int year, int month, int day);
};

#endif