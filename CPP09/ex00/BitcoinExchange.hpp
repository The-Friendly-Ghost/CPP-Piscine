/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/14 15:56:24 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/14 16:34:59 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <fstream>

class Btc
{
private:

/////// Private Variables ////////
    typedef struct s_date {
        int day;
        int month
        int year;
    }   t_date ;

    std::map<t_date, float>    data;

/////// Private Functions ////////
        Btc( void );
void    parseCsv( void );

public:
    Btc( std::fstream file );
    Btc( const Btc &copy );
    Btc &operator=( const Btc &rhs );
    ~Btc( void );

    
};
