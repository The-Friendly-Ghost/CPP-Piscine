/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 12:04:57 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:59:08 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string	mType;

public:
	Animal(void);
	Animal(std::string newType);
	virtual ~Animal(void);
	Animal(const Animal &copy);
	Animal	&operator=(const Animal &other);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
