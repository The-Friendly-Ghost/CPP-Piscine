/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 07:14:46 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/21 08:14:03 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stdexcept>
#include <iostream>

RPN::RPN(void)
{}

RPN::~RPN(void)
{}

RPN::RPN(RPN const &copy)
{
    this->numbers = copy.numbers;
}

RPN	&RPN::operator=(RPN const &rhs)
{
    this->numbers = rhs.numbers;
    return (*this);
}

void	RPN::addNumber(int num)
{
    this->numbers.push_back(num - 48);
}

void	RPN::plus(void)
{
    const size_t size = this->numbers.size();

    if (size < 2)
        throw (std::invalid_argument("Error"));
    else
    {
        numbers[size - 2] = numbers[size - 2] + numbers[size - 1];
        numbers.pop_back();
    }
}

void RPN::minus(void)
{
    const size_t size = this->numbers.size();

    if (size < 2)
        throw (std::invalid_argument("Error"));
    else
    {
        numbers[size - 2] = numbers[size - 2] - numbers[size - 1];
        numbers.pop_back();
    }
}

void RPN::divide(void)
{
    const size_t size = this->numbers.size();

    if (size < 2)
        throw (std::invalid_argument("Error"));
    else
    {
        numbers[size - 2] = numbers[size - 2] / numbers[size - 1];
        numbers.pop_back();
    }
}

void RPN::multiply(void)
{
    const size_t size = this->numbers.size();

    if (size < 2)
        throw (std::invalid_argument("Error"));
    else
    {
        numbers[size - 2] = numbers[size - 2] * numbers[size - 1];
        numbers.pop_back();
    }
}

void	RPN::printAll(void)
{
    for (std::deque<double>::iterator it = this->numbers.begin();
    it != this->numbers.end(); it++)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;
}

void	RPN::printResult(void)
{
    if (this->numbers.size() != 1)
        throw (std::invalid_argument("Error"));
    else
        std::cout << numbers[0] << std::endl;
}
