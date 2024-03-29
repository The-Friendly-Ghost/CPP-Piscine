/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 15:07:43 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/22 12:12:06 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename V>
void    testFunction(V &value)
{
    std::cout << value << std::endl;
}

template<typename T, typename N, typename F>
void    iter(T *array, N length, F func)
{
    for (N i = 0; i < length; i++)
        func(array[i]);
}


#endif
