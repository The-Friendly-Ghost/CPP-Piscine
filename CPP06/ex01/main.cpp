/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:21:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 14:37:43 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data		data1;
	Serializer	ser;
	uintptr_t	raw;

	data1.num = 10;
	data1.str = "Hello World";

	std::cout << "address data1: " << &data1 << std::endl;
	std::cout << "num Data1: " << data1.num << " | str Data1: " << data1.str << std::endl << std::endl;

	raw = ser.serialize(&data1);

	Data *data2 = ser.deserializer(raw);
	std::cout << "address data2: " << data2 << std::endl;
	std::cout << "num Data2: " << data2->num << " | str Data2: " << data2->str << std::endl << std::endl;
}