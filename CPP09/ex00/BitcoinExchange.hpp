/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:24 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/18 15:46:33 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <time.h>

class Btc
{
private:
    std::ifstream               &rawDataStr;
    // std::map<time_t, float>     data;

    Btc(void);
    void    parseCsv(void);
    // void    createElement(std::map<time_t, float> &data);


public:
    Btc(std::ifstream &data);
    // Btc(const Btc &copy);
    // Btc &operator=(const Btc &rhs);
    ~Btc(void);
};

#endif