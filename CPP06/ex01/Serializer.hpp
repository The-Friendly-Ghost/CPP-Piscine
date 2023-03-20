/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 13:47:20 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 14:11:36 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"

class Serializer
{
	
public:
	Serializer(void);
	Serializer(const Serializer &copy);
	~Serializer();

	Serializer	&operator=(const Serializer &rhs);

	uintptr_t	serialize(Data *ptr);
	Data		*deserializer(uintptr_t raw);

};

#endif
