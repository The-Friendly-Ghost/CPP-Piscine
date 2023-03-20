/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 13:47:47 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 14:28:11 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Serializer::Serializer(void)
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	(void)copy;
	std::cout << "Serializer Copy constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer deconstructor called" << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Serializer	&Serializer::operator=(const Serializer &rhs)
{
	std::cout << "Serializer assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

//=====================================//
//================ Other ==============//
//=====================================//

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserializer(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
