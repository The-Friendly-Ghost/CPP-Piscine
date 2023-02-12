/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/12 17:14:10 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/12 21:33:14 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	
}

Harl::~Harl()
{
	
}

void	Harl::complain(std::string level)
{
	int	levelNum = 4;
	std::string	lvls[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (lvls[i] == level)
			levelNum = i;
	}
	
	switch(levelNum)
	{
		case OTHER :
			std::cout << "[UNKNOWN]" << std::endl
			<< "Probably complaining about insignificant problems" << std::endl;
			break ;
		case DEBUG :
			debug();
		case INFO :
			info();
		case WARNING :
			warning();
		case ERROR :
			error();
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You ";
	std::cout << "didn't put enough bacon in my burger! If you did, I wouldn't";
	std::cout << "be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started working ";
	std::cout << "here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}