/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 12:04:57 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/02 14:00:53 by cpost         ########   odam.nl         */
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
	~Animal(void);
	Animal(const Animal &copy);
	Animal	&operator=(const Animal &other);
	void	makeSound(void);
};

#endif
