/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 08:23:02 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 13:11:46 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <limits>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Convert::Convert(void) : 
	mInput("0"),
	mPrintDecimal("")
{
	// std::cout << "Convert constructor called" << std::endl;
	formatString(this->mInput);
}

Convert::Convert(std::string input) :
	mInput(input),
	mPrintDecimal("")
{
	// std::cout << "Convert constructor called" << std::endl;
	formatString(mInput);
}

Convert::Convert(const Convert &copy) :
	mInput(copy.getInput())
{
	std::cout << "Convert copy constructor called" << std::endl;
}

Convert::~Convert(void)
{
	// std::cout << "Convert destructor called" << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Convert	&Convert::operator=(const Convert &rhs)
{
	std::cout << "Convert assignment operator called" << std::endl;
	this->mInput = rhs.getInput();
	return (*this);
}

//=====================================//
//======== Getters / Setters ==========//
//=====================================//

std::string Convert::getInput(void) const
{
	return (this->mInput);
}

void	Convert::setDecimal(void)
{
	this->mPrintDecimal = ".0";
}

std::string	Convert::getDecimal(void) const
{
	return (this->mPrintDecimal);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char  *Convert::ImpossibleString::what (void) const throw()
{
    return (NULL);
}

//=====================================//
//================ Other ==============//
//=====================================//

void	Convert::validateString(std::string &input)
{
	int		points;
	int		nonDigit;
	bool	zeroDecimal;

	points = 0;
	nonDigit = 0;
	zeroDecimal = true;
	if (input.back() == 'f')
		input.pop_back();
	for (int i = 0; input.c_str()[i]; i++)
	{
		if (input.c_str()[i] == '.')
			points++;
		else if (!isdigit(input.c_str()[i]))
			nonDigit++;
		if (points > 0 && input.c_str()[i] != '0' 
			&& input.c_str()[i] != '.')
			zeroDecimal = false;
	}
	if (points > 1 || nonDigit > 0)
		throw (ImpossibleString());
	if (zeroDecimal == true)
		this->setDecimal();
}

void	Convert::formatString(std::string input)
{
	long double			ld;
	std::stringstream	sstream;

	try
	{
		if (input.length() == 1)
		{
			if (!isdigit(input.c_str()[0]))
				sstream << static_cast<int>(input.c_str()[0]);
			else
				sstream << input;
			this->setDecimal();
		}
		else
		{
			validateString(input);
			sstream << input;
		}
		sstream >> ld;
		convertString(ld);
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void	Convert::convertString(long double ld)
{
	//=== Char Conversion ===//
	if ((ld <= 32 && ld >= 0) || ld == 127)
		std::cout << "Char: Non Displayable" << std::endl;
	else if (ld < 0 || ld > 127)
		std::cout << "Char: Impossible" << std::endl;
	else
		std::cout << "Char: " << static_cast<char>(ld) << std::endl;

	//=== Int Conversion ===//
	if (ld < std::numeric_limits<int>::min() || ld > std::numeric_limits<int>::max())
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(ld) << std::endl;

	//=== Float Conversion ===//
	if (ld < -std::numeric_limits<float>::max())
		std::cout << "Float: -Inff" << std::endl;
	else if (ld > std::numeric_limits<float>::max())
		std::cout << "Float: +Inff" << std::endl;
	else
		std::cout << "Float: " << static_cast<float>(ld) << this->getDecimal() << "f" << std::endl;

	//=== Double Conversion ===//
	if (ld < -std::numeric_limits<double>::max())
		std::cout << "Double: -Inf" << std::endl;
	else if (ld > std::numeric_limits<double>::max())
		std::cout << "Double: +Inf" << std::endl;
	else
		std::cout << "Double: " << static_cast<double>(ld) << this->getDecimal() << std::endl;
}
