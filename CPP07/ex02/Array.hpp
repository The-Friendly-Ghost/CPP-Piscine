/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 12:00:01 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/27 12:07:49 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Array.tpp"

class Array
{
private:
    /* data */
public:
    Array(void);
    Array(unsigned int n);
    Array(const Array &copy);
    ~Array();

    Array   &operator=(const Array &rhs);

    unsigned int    size(void) const;
};

#endif
