/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 14:39:39 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/11 13:49:01 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	{
		try
		{
			std::cout << "CASE1: EXCEPTION, NO NUMBERS ADDED" << std::endl;
			Span	nums(6);

			nums.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			std::cout << std::endl << "CASE2: WORKING" << std::endl;
			Span	nums(6);

			nums.addNumber(-19);
			nums.addNumber(-20);
			nums.addNumber(20);
			nums.addNumber(10);
			std::cout << "Longest span: " << nums.longestSpan() << std::endl;
			std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			std::cout << std::endl << "CASE3: WORKING + EXCEPTION" << std::endl;
			Span	nums(6);

			nums.addNumber(-1000);
			nums.addNumber(0);
			nums.addNumber(1000);
			nums.addNumber(100);
			std::cout << "Longest span: " << nums.longestSpan() << std::endl;
			std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;

			nums.addNumber(4);
			nums.addNumber(0);
			nums.addNumber(4);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			std::cout << std::endl << "CASE4: MAIN FROM SUBJECT" << std::endl;
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	{
		try
		{
			std::cout << std::endl << "CASE5: MANY NUMBERS" << std::endl;
			Span	nums(20001);

			nums.addManyNumbers(20001);
			std::cout << "Position 10: " << nums.getIntVec()[10] << std::endl;
			std::cout << "Position 100: " << nums.getIntVec()[100] << std::endl;
			std::cout << "Position 1000: " << nums.getIntVec()[1000] << std::endl;
			std::cout << "Position 10000: " << nums.getIntVec()[10000] << std::endl;
			std::cout << "Position 20000: " << nums.getIntVec()[20000] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
