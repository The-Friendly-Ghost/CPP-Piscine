/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Classes.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:01:09 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 15:38:23 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <iostream>

Base::~Base(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Base	*generate(void)
{
	int	i;

	srand(time(NULL));
	i = rand() % 3;
	switch (i)
	{
		case (0) :
			return (reinterpret_cast<Base *>(new A));
		case (1) :
			return (reinterpret_cast<Base *>(new B));
		case (2) :
			return (reinterpret_cast<Base *>(new C));
	}
	return (NULL);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "Pointer Type is A!" << std::endl;
		return ;
	}

	B	*b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "Pointer Type is B!" << std::endl;
		return ;
	}

	C	*c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "Pointer Type is C!" << std::endl;
		return ;
	}

	std::cout << "No corresponding class type found" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "Reference Type is A!" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {
	}

	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "Reference Type is B!" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {
	}

	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "Reference Type is C!" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {
	}
}
