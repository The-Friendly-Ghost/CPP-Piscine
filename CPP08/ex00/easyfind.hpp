/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:12:52 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/03 15:58:21 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
typename T::iterator    easyfind(T value, int num)
{
    T::iterator   temp;

    temp = std::find(value.begin(), value.end(), num);
    if (temp == value.end())
        throw("VALUE NOT FOUND");
    return (temp);
}
