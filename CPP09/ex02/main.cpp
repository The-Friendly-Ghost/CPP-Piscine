/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 09:22:18 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/24 20:50:35 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdexcept>
#include <iostream>

int main(int argc, char **argv)
{
    try
    {
        if (argc < 2)
            throw (std::invalid_argument("No numbers found"));

        PmergeMe    toSort(argv);

        toSort.printBefore();
        toSort.setTime(VECTORSTART);
        toSort.mergeSortVector(0, toSort.getVecSize() - 1);
        toSort.setTime(VECTOREND);

        toSort.setTime(LISTSTART);
        toSort.mergeSortList(toSort.getList());
        toSort.setTime(LISTEND);

        toSort.printResult();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}