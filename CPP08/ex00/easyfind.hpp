/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:12:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/11 15:17:06 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator    easyfind(T value, int num)
{
    typename T::iterator   temp;

    temp = std::find(value.begin(), value.end(), num);
    if (temp == value.end())
        throw("VALUE NOT FOUND");
    return (temp);
}

#endif
