/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 12:01:26 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/27 12:23:28 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
T   *makeArray(unsigned int size)
{
    Array   *arr;

    arr = new array[size * sizeof(array)];
    for (unsigned int i = 0; i < size; i++)
    {
        
    }
}