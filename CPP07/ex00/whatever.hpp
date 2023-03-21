/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 15:07:43 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/21 15:34:38 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template< typename T >
void    swap(T &a, T &b)
{
    T   temp = a;

    a = b;
    b = temp;
}

template< typename T >
const T &min(const T &a, const T &b)
{
    return (a < b ? a : b);
}

template< typename T >
const T &max(const T &a, const T &b)
{
    return (a > b ? a : b);
}

#endif
